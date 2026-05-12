/*
 * XREFs of RaUnitQueryRemoveDeviceIrp @ 0x1C006841C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryRemoveDeviceIrp(_DWORD *a1, IRP *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[171] || a1[173] || a1[172] )
    v2 = -2147483631;
  else
    a1[10] = 4;
  return RaidCompleteRequestEx(a2, 0, v2);
}
