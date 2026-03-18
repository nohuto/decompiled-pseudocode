/*
 * XREFs of MiLockLeafPage @ 0x140104100
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140027284 (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x140028ABC (MiMakeImageReadOnly.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiIsSubsectionClean @ 0x14020A668 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x140218880 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(a1);
      v10 = v4;
      v5 = v4;
      if ( (v4 & 1) == 0 )
        break;
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v10);
LABEL_7:
      if ( MiIsPfnInline(v6) )
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
