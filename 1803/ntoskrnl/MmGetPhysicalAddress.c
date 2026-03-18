/*
 * XREFs of MmGetPhysicalAddress @ 0x14003C3D0
 * Callers:
 *     PopGetNextTable @ 0x14014EE24 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     BgpFwLibraryEnable @ 0x1401658A8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1402272C4 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x140228500 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1402285B0 (HvlpSetupSchedulerAssist.c)
 *     HvlpGetSecurePageList @ 0x14022ECF4 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x14022EE94 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14022F044 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14022F67C (VslFinalizeLiveDumpInSk.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14023073C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x140233710 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140233B90 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140235D00 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x14023C96C (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14023D004 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x140267CAC (MmStoreLogCorruptionFixed.c)
 *     RtlMarkHiberPhase @ 0x140292630 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x1402A6DF0 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1402A8F98 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x140477074 (PopBuildMemoryImageHeader.c)
 *     PopHiberReadChecksums @ 0x140486128 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14062B3A4 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140718E08 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14071FC44 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     VslBindNtIum @ 0x1408DE168 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x14003C3F8 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
