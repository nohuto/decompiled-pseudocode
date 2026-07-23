/*
 * XREFs of RtlStringFromGUID @ 0x1404C2C60
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140153258 (KsepEvntLogShimsApplied.c)
 *     PipHardwareConfigInit @ 0x14080CF9C (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140823554 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x140826724 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140835F7C (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
