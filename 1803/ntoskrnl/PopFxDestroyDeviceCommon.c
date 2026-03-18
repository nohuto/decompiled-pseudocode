/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1402750D4
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x140275108 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x140283060 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x140283158 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P)
{
  ExFreePoolWithTag(P[26], 0x4D584650u);
  ExFreePoolWithTag(P, 0x4D584650u);
}
