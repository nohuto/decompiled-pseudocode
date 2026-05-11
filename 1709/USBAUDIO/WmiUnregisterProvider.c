/*
 * XREFs of WmiUnregisterProvider @ 0x1C001AA8C
 * Callers:
 *     DeviceRemove @ 0x1C0001D50 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiUnregisterProvider(__int64 a1)
{
  return IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 24), 2u);
}
