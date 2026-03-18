/*
 * XREFs of RtlClearAllBits @ 0x140016020
 * Callers:
 *     HvResetUnreconciledData @ 0x14046FB84 (HvResetUnreconciledData.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     MiCaptureImageExceptionValues @ 0x140471A50 (MiCaptureImageExceptionValues.c)
 *     CmCheckRegistry @ 0x140471AFC (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x140471CD4 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x140471E40 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405F0040 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 *     MiExpandPartitionIds @ 0x1406EDE84 (MiExpandPartitionIds.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x14073CE94 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x14074FF18 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x1407ACDAC (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1407D0848 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
