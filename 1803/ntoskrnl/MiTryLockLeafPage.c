/*
 * XREFs of MiTryLockLeafPage @ 0x1400518D8
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14004FA24 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiTryLockLeafPage(unsigned __int64 a1)
{
  unsigned __int64 v1; // r11
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
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
      v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFLL;
LABEL_8:
      if ( (unsigned int)MiIsPfnInline(v3) )
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
