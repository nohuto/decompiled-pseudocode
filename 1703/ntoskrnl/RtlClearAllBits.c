/*
 * XREFs of RtlClearAllBits @ 0x14006E050
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     HvResetUnreconciledData @ 0x14045D4C8 (HvResetUnreconciledData.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x1404B6E10 (MiCaptureImageExceptionValues.c)
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x1404B7098 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x1404B7204 (MiInitializePrivateFixupBitmap.c)
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x140585F48 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x140704BA4 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1407123B8 (EtwpUpdateStackTracing.c)
 *     BgpFwInitializeReservePool @ 0x140755FB0 (BgpFwInitializeReservePool.c)
 *     ViAllocateContiguousMemory @ 0x14076B0DC (ViAllocateContiguousMemory.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
