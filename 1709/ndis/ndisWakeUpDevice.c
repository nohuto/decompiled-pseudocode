/*
 * XREFs of ndisWakeUpDevice @ 0x1C00E1F20
 * Callers:
 *     ndisWdfPreReleaseHardware @ 0x1C00EBB30 (ndisWdfPreReleaseHardware.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
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
