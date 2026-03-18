/*
 * XREFs of MiTryLockLeafPage @ 0x1400CC170
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400CBF98 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiTryLockLeafPage(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r11
  __int64 PteShadow; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      PteShadow = *v3;
      if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v3, *v3);
      v11 = PteShadow;
      if ( (PteShadow & 1) == 0 )
        break;
      v5 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
LABEL_11:
      if ( (unsigned int)MiIsPfnInline(v5) )
      {
        v8 = 48 * v7 - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          return 0LL;
        v9 = *v3;
        if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
          v9 = MiReadPteShadow(v3, *v3);
        if ( v9 == v6 )
          return v8;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, PteShadow) )
    {
      v5 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v11);
      goto LABEL_11;
    }
  }
}
