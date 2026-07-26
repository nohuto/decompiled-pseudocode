/*
 * XREFs of ndisWakeUpDevice @ 0x1C00E35E0
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 */

__int64 __fastcall ndisWakeUpDevice(__int64 a1)
{
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 3892) == 1 )
    return 0LL;
  v3 = ndisRequestDevicePowerD0(a1, 0xBu);
  if ( v3 == 259 )
  {
    v3 = 0;
    KeWaitForSingleObject((PVOID)(a1 + 4248), Executive, 0, 0, 0LL);
  }
  return v3;
}
