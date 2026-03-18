/*
 * XREFs of MiLockLeafPage @ 0x1401249A0
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x1400C2CC0 (MiMakeImageReadOnly.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiIsSubsectionClean @ 0x14024F640 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14025D78C (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(a1);
      v10 = v4;
      v5 = v4;
      if ( (v4 & 1) == 0 )
        break;
      v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL;
LABEL_7:
      if ( (unsigned int)MiIsPfnInline(v6) )
      {
        v8 = 48 * v7 - 0x58000000000LL;
        if ( a2 )
          MiLockNestedPageAtDpcInline(v8);
        else
          MiLockPageAtDpcInline(v8);
        if ( MI_READ_PTE_LOCK_FREE(a1) == v5 )
          return v8;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v4 & 0x400) != 0 || (v4 & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(v4) )
    {
      v6 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v10);
      goto LABEL_7;
    }
  }
}
