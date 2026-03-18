/*
 * XREFs of IopVerifierExAllocatePool @ 0x140007BA0
 * Callers:
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     IoAllocateWorkItem @ 0x1400BAAE0 (IoAllocateWorkItem.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     IoQueryFullDriverPath @ 0x140186560 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140237888 (IopAdjustFileObjectKeepAliveCount.c)
 *     NtFlushBuffersFileEx @ 0x140560E8C (NtFlushBuffersFileEx.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopGetRegistryKeyInformation @ 0x1405D953C (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     IoCreateSystemThread @ 0x1405E5FD0 (IoCreateSystemThread.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14071A3D0 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14071A854 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x1408A9998 (IopGetBootDiskInformationLite.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 *     IopCreateUmdfDirectory @ 0x1408C46C8 (IopCreateUmdfDirectory.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopStoreArcInformation @ 0x1408C6DD0 (IopStoreArcInformation.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
