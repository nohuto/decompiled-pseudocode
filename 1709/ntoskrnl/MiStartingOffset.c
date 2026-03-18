/*
 * XREFs of MiStartingOffset @ 0x14002C570
 * Callers:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiReadyFlushMdlToWrite @ 0x14002813C (MiReadyFlushMdlToWrite.c)
 *     MiPickClusterForMappedFileFault @ 0x1400281E0 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiStartingOffsetNeedLock @ 0x14002B1C0 (MiStartingOffsetNeedLock.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1400F25DC (MiViewMayContainPage.c)
 *     MiSetSubsectionBase @ 0x140110918 (MiSetSubsectionBase.c)
 *     MiAdvanceVadView @ 0x140112B84 (MiAdvanceVadView.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiFillMapFileInfo @ 0x1406DEE20 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 SharedProtos; // rax

  v4 = *a1;
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v9 = a1[1];
    if ( a2 < v9 || a2 >= v9 + 8LL * *((unsigned int *)a1 + 11) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v4, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1);
      v10 = a2 - *(_QWORD *)(SharedProtos + 32);
    }
    else
    {
      v10 = a2 - v9;
    }
    return ((v10 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*((unsigned int *)a1 + 9) << 9);
  }
  else
  {
    v6 = a1[1];
    if ( v6 )
      v7 = (__int64)(a2 - v6) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*((unsigned int *)a1 + 9) | ((unsigned __int64)((_WORD)a1[4] & 0xFFC0) << 26)) << 12);
  }
}
