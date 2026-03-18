/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14059EC20
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x14044D7EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x1405E85F8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x1406CDDAC (PiSwIrpGetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1406CDE70 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1406CE008 (PiSwIrpPropertySet.c)
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
