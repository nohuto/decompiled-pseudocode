/*
 * XREFs of ndisSetDeviceInterfaceState @ 0x1C00C3A04
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
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
