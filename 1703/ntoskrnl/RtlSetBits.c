/*
 * XREFs of RtlSetBits @ 0x14009ABF0
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400320B4 (MiStoreEvictPageFile.c)
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14007E9A0 (MiSetPageFileAllocationBits.c)
 *     MiAssignSharedUserRanges @ 0x1401592B0 (MiAssignSharedUserRanges.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140219B30 (MiExtendPagingFileMaximum.c)
 *     PopSetBootPhaseRange @ 0x14040DD90 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14040DDD0 (PopDiscardRange.c)
 *     PopCloneRange @ 0x14040DE20 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x14040E09C (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x140417A44 (PnprMirrorMarkedPages.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x14048E1D0 (HvpAddFreeCellHint.c)
 *     MiObtainRelocationBits @ 0x140495FBC (MiObtainRelocationBits.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 *     MiLockdownSections @ 0x1404B6D54 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x1405128E0 (RtlMarkExceptionHandlingPages.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     HvCheckBin @ 0x140513920 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 *     HvpUpdateRecoveryVector @ 0x140678ACC (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x1406B800C (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x14076B0DC (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1408115D8 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
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
      v7 = byte_14029EB30[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14029EB40[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14029EB30[v6];
      goto LABEL_4;
    }
  }
}
