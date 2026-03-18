/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x14003BD0C
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14003BCE0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  KIRQL v6; // bp

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
  v5 = dword_14036E0D0;
  v6 = v4;
  if ( a2 )
    dword_14036E0D0 |= a1;
  else
    dword_14036E0D0 &= ~a1;
  KxReleaseSpinLock(&qword_14036DFD0);
  __writecr8(v6);
  return v5;
}
