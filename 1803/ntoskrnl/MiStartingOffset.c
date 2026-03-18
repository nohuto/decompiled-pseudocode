/*
 * XREFs of MiStartingOffset @ 0x140129FF0
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiPickClusterForMappedFileFault @ 0x140056310 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MiAdvanceVadView @ 0x140072C74 (MiAdvanceVadView.c)
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1400823C0 (MiViewMayContainPage.c)
 *     MiReadyFlushMdlToWrite @ 0x1400B8E08 (MiReadyFlushMdlToWrite.c)
 *     MiSetSubsectionBase @ 0x1400CD53C (MiSetSubsectionBase.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x1401289A0 (MiStartingOffsetNeedLock.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x140749CA4 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  __int64 SharedProtos; // rax

  v3 = *a1;
  v5 = a1[1];
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || a2 >= v5 + 8LL * *((unsigned int *)a1 + 11) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v3, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1);
      v9 = a2 - *(_QWORD *)(SharedProtos + 72);
    }
    else
    {
      v9 = a2 - v5;
    }
    return ((v9 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*((unsigned int *)a1 + 9) << 9);
  }
  else
  {
    if ( v5 )
      v7 = (__int64)(a2 - v5) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*((unsigned int *)a1 + 9) | ((unsigned __int64)((_WORD)a1[4] & 0xFFC0) << 26)) << 12);
  }
}
