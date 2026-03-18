/*
 * XREFs of RtlSetBits @ 0x14000A290
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     MiStoreEvictPageFile @ 0x140072CD4 (MiStoreEvictPageFile.c)
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14009D510 (MiSetPageFileAllocationBits.c)
 *     MiGetPrototypePteRanges @ 0x1400BFCB4 (MiGetPrototypePteRanges.c)
 *     MiAssignSharedUserRanges @ 0x14017D65C (MiAssignSharedUserRanges.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x14025F210 (MiExtendPagingFileMaximum.c)
 *     PopSetBootPhaseRange @ 0x140477278 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1404772B8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x1404772D0 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140477434 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x14048360C (PnprMirrorMarkedPages.c)
 *     HvCheckBin @ 0x1404AED40 (HvCheckBin.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 *     HvpAddFreeCellHint @ 0x1404E38A4 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x1404F1C44 (MiObtainRelocationBits.c)
 *     HvpRemoveFreeCellHint @ 0x140515BD0 (HvpRemoveFreeCellHint.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 *     MiLockdownSections @ 0x1405F958C (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x1405F96FC (RtlMarkExceptionHandlingPages.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     HvpUpdateRecoveryVector @ 0x140706770 (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x14074F0B8 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x140819F18 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1408BB990 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
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
      v7 = byte_1402FEA38[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_1402FEA48[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1402FEA38[v6];
      goto LABEL_4;
    }
  }
}
