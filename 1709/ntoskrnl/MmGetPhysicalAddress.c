/*
 * XREFs of MmGetPhysicalAddress @ 0x1400BBFC0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 *     BgpFwLibraryEnable @ 0x14013E9AC (BgpFwLibraryEnable.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1401EA214 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401EB48C (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1401EB53C (HvlpSetupSchedulerAssist.c)
 *     HvlpGetSecurePageList @ 0x1401F1174 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401F1318 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1401F14C8 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401F1CC4 (VslFinalizeLiveDumpInSk.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401F2C1C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1401F6200 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401F6880 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F8888 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1401FFC24 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x140200224 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x14022D9C4 (MmStoreLogCorruptionFixed.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     PopGetNextTable @ 0x140241D08 (PopGetNextTable.c)
 *     RtlMarkHiberPhase @ 0x14025A810 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x140272B48 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140275EBC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140276010 (SmPrepareForFatalPageError.c)
 *     PopBuildMemoryImageHeader @ 0x140432438 (PopBuildMemoryImageHeader.c)
 *     PopHiberReadChecksums @ 0x140433A00 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 *     HvlInitializeProcessor @ 0x1405B7BCC (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x1406B41D8 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1406BACB8 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x1407ACF6C (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1400BBFF0 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
