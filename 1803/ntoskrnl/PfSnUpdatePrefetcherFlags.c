/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1400D26EC
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1400D26C0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x14047892C (PfSnBeginBootPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  KIRQL v6; // bp

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD850);
  v5 = dword_1403CD950;
  v6 = v4;
  if ( a2 )
    dword_1403CD950 |= a1;
  else
    dword_1403CD950 &= ~a1;
  KxReleaseSpinLock(&qword_1403CD850);
  __writecr8(v6);
  return v5;
}
