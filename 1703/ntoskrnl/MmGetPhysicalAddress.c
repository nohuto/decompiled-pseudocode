/*
 * XREFs of MmGetPhysicalAddress @ 0x1400A7A80
 * Callers:
 *     PopGetNextTable @ 0x140137B10 (PopGetNextTable.c)
 *     RtlMarkHiberPhase @ 0x14013ED00 (RtlMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x140140494 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E668C (HvlpSetupCachedHypercallPages.c)
 *     HvlpGetSecurePageList @ 0x1401EC374 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401EC518 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1401EC6C8 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401ECE54 (VslFinalizeLiveDumpInSk.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401EDD3C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1401F0AC0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401F0F40 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F2F14 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1401F9EAC (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1401FA4E4 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 *     SmEtwLogStoreCorruption @ 0x14024D878 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x140406740 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x140406CAC (PopRequestWrite.c)
 *     PopRequestRead @ 0x140407B98 (PopRequestRead.c)
 *     PopBuildMemoryImageHeader @ 0x14040D080 (PopBuildMemoryImageHeader.c)
 *     HvlInitializeProcessor @ 0x1405A7BC0 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x1406882A8 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14068EFF4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1400A7900 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  int v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress((unsigned __int64)BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
