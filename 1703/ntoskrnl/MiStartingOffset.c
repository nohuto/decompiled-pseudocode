/*
 * XREFs of MiStartingOffset @ 0x1400CDBF0
 * Callers:
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x140014728 (MiViewMayContainPage.c)
 *     MiAdvanceVadView @ 0x1400173F0 (MiAdvanceVadView.c)
 *     MiReadyFlushMdlToWrite @ 0x140025C70 (MiReadyFlushMdlToWrite.c)
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiSetSubsectionBase @ 0x140039EF0 (MiSetSubsectionBase.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiStartingOffsetNeedLock @ 0x1400CDC90 (MiStartingOffsetNeedLock.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140107B00 (MiPickClusterForMappedFileFault.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x1406B2E54 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
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
