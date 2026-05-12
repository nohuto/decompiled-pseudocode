/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1C0011A08
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C00124FC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  KIRQL v2; // si
  int v3; // edi

  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 4LL) )
    RaCallMiniportAdapterControl(a1 + 296, 4LL, 0LL);
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 296, 2LL, 0LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  RaidAdapterReleaseInterruptLock(a1, v2);
  return (unsigned int)v3;
}
