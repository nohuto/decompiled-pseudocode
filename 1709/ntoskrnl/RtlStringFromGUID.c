/*
 * XREFs of RtlStringFromGUID @ 0x1404DF780
 * Callers:
 *     PipHardwareConfigInit @ 0x1408275F0 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140854A4C (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x140857E90 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x14086D1B4 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
