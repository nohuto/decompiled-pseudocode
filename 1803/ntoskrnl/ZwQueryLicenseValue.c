/*
 * XREFs of ZwQueryLicenseValue @ 0x1401A9E20
 * Callers:
 *     RtlGetProductInfo @ 0x140170840 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x140549E30 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x1405F36F0 (ExpGetVMActivationStatus.c)
 *     ExGetExpirationDate @ 0x14063071C (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140636914 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x14074BE90 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x14078C3D4 (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x1407CCBE4 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x1408C2BE8 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x1408C6534 (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1408C98F4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
