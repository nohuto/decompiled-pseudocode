/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x14023DB24
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x14023DB58 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x14024D2C8 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14024D3C0 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P)
{
  ExFreePoolWithTag(P[26], 0x4D584650u);
  ExFreePoolWithTag(P, 0x4D584650u);
}
