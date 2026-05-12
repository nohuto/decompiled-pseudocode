/*
 * XREFs of RaidAdapterStopAdapter @ 0x1C0011C4C
 * Callers:
 *     RaidAdapterStop @ 0x1C0011B54 (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStopAdapter(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 296, 1LL, 0LL);
  RaidAdapterReleaseInterruptLock(a1, v2);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 3LL) )
    RaCallMiniportAdapterControl(a1 + 296, 3LL, 0LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v3;
}
