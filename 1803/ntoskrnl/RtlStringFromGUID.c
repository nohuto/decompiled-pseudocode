/*
 * XREFs of RtlStringFromGUID @ 0x140518D40
 * Callers:
 *     PipHardwareConfigInit @ 0x1408C395C (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x1408C6D54 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x1408CA024 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x1408E1F1C (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
