/*
 * XREFs of ndisSetDeviceInterfaceState @ 0x1C00AEDDC
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
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
