/*
 * XREFs of MiLockLeafPage @ 0x14002F4D4
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiReplacePageOfProtoPool @ 0x14011DA1C (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x140122884 (MiMakeImageReadOnly.c)
 *     MiIsSubsectionClean @ 0x140211280 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x140222B30 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 PteShadow; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      PteShadow = *a1;
      if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a1, *a1);
      v11 = PteShadow;
      if ( (PteShadow & 1) == 0 )
        break;
      v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
LABEL_11:
      if ( (unsigned int)MiIsPfnInline(v7) )
      {
        v8 = 48 * a4 - 0x58000000000LL;
        if ( v4 )
          MiLockNestedPageAtDpcInline(v8);
        else
          MiLockPageAtDpcInline(v8);
        v9 = *a1;
        if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
          v9 = MiReadPteShadow(a1, *a1);
        if ( v9 == PteShadow )
          return v8;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, a4) )
    {
      v7 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v11);
      goto LABEL_11;
    }
  }
}
