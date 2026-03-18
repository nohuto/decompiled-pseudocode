/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x14022A954
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x14022A988 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x140238218 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x140238310 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *a1)
{
  ExFreePoolWithTag(a1[26], 0x4D584650u);
  ExFreePoolWithTag(a1, 0x4D584650u);
}
