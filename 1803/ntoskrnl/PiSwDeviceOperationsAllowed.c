/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x1405C65C0
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x1405C6164 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x140612B24 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1406465E8 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x14064D4A4 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x1407354AC (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
