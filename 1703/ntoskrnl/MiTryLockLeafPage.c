/*
 * XREFs of MiTryLockLeafPage @ 0x14010AED8
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14010A7AC (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryLockLeafPage(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = MI_READ_PTE_LOCK_FREE(v1);
      v8 = v2;
      if ( (v2 & 1) == 0 )
        break;
      v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v8);
LABEL_8:
      if ( MiIsPfnInline(v3) )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v4 - 0x58000000000LL + 24), 0x3FuLL) )
          return 0LL;
        v5 = MI_READ_PTE_LOCK_FREE(v1);
        if ( v5 == v8 )
          return v6;
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v2 & 0x400) != 0 || (v2 & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(v2) )
    {
      v3 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v8);
      goto LABEL_8;
    }
  }
}
