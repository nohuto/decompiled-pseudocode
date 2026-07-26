/*
 * XREFs of ndisSetDeviceInterfaceState @ 0x1C00B91E8
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetDeviceInterfaceState(__int64 a1, BOOLEAN a2)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 368) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), a2);
  if ( *(_QWORD *)(a1 + 4184) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4176), a2);
  if ( *(_QWORD *)(a1 + 4864) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4856), a2);
  return result;
}
