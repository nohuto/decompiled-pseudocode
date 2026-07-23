/*
 * XREFs of ZwQueryLicenseValue @ 0x140180800
 * Callers:
 *     RtlGetProductInfo @ 0x1401636B0 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x140459860 (ExpGenuinePolicyPostProcess.c)
 *     ExGetExpirationDate @ 0x1405A651C (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x1405B87A4 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x1406B4F80 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x1406F0554 (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x140725434 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140822AB8 (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1408259C0 (InitializeDynamicPartitioningPolicy.c)
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
