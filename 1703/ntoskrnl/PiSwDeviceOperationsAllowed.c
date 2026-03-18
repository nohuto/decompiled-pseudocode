/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x140460E24
 * Callers:
 *     PiSwIrpSetLifetime @ 0x140460D68 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405746C4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x14057D004 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1405DA2A4 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1406A3270 (PiSwIrpGetLifetime.c)
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
