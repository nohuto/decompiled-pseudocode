/*
 * XREFs of ZwQueryLicenseValue @ 0x1401801E0
 * Callers:
 *     RtlGetProductInfo @ 0x1401540A0 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x14059B6E0 (ExpGenuinePolicyPostProcess.c)
 *     RtlpGetWindowsPolicy @ 0x1405BE4A4 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x1405C2C4C (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x1406E10D0 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x140727FC4 (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x140764F04 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     InitializeDynamicPartitioningPolicy @ 0x14084A22C (InitializeDynamicPartitioningPolicy.c)
 *     WheapLoadPolicy @ 0x1408544DC (WheapLoadPolicy.c)
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
