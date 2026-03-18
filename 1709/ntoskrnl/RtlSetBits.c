/*
 * XREFs of RtlSetBits @ 0x1400A1A30
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiAssignSharedUserRanges @ 0x140143C30 (MiAssignSharedUserRanges.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x14022501C (MiExtendPagingFileMaximum.c)
 *     MiSetPageFileAllocationBits @ 0x140226D20 (MiSetPageFileAllocationBits.c)
 *     PnprMirrorMarkedPages @ 0x14042CA74 (PnprMirrorMarkedPages.c)
 *     PopCloneRange @ 0x14043264C (PopCloneRange.c)
 *     PopDiscardRange @ 0x140432FBC (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140433288 (PopGenerateUnHibernatedMdl.c)
 *     PopSetBootPhaseRange @ 0x1404357E4 (PopSetBootPhaseRange.c)
 *     MiLockdownSections @ 0x140471994 (MiLockdownSections.c)
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x14047CB94 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     HvCheckBin @ 0x1404D02F0 (HvCheckBin.c)
 *     RtlMarkExceptionHandlingPages @ 0x1404D0FC0 (RtlMarkExceptionHandlingPages.c)
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x14050475C (MiObtainRelocationBits.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 *     HvpUpdateRecoveryVector @ 0x1406A3044 (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x1406E4C98 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x1407ACDAC (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x14083A100 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_1402C7730[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_1402C7740[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1402C7730[v6];
      goto LABEL_4;
    }
  }
}
