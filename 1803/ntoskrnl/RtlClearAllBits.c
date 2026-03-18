/*
 * XREFs of RtlClearAllBits @ 0x140007490
 * Callers:
 *     CmCheckRegistry @ 0x140499094 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14049926C (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x1404993D8 (MiInitializePrivateFixupBitmap.c)
 *     HvStoreModifiedData @ 0x140499C58 (HvStoreModifiedData.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     MiCaptureImageExceptionValues @ 0x1405F9650 (MiCaptureImageExceptionValues.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x140613FF0 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 *     MiExpandPartitionIds @ 0x140757314 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14079FEA0 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1407A7484 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x140819F18 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x14083C66C (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
