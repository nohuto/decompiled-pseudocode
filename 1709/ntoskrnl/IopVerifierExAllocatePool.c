/*
 * XREFs of IopVerifierExAllocatePool @ 0x140024538
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 *     IoAllocateWorkItem @ 0x14011CA30 (IoAllocateWorkItem.c)
 *     IoQueryFullDriverPath @ 0x1401FA820 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401FAAE4 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopGetRegistryKeyInformation @ 0x1405173D8 (IopGetRegistryKeyInformation.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140518684 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     NtFlushBuffersFileEx @ 0x140575154 (NtFlushBuffersFileEx.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     IoCreateSystemThread @ 0x1405DB160 (IoCreateSystemThread.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x1406B5720 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406B5B58 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140833760 (IopGetBootDiskInformationLite.c)
 *     IopCreateArcNames @ 0x140844F90 (IopCreateArcNames.c)
 *     IopCreateUmdfDirectory @ 0x1408450BC (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140845950 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
