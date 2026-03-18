/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x140131AFC
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x140131AD0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140429124 (PfSnBeginBootPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  KIRQL v6; // bp

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
  v5 = dword_140389E10;
  v6 = v4;
  if ( a2 )
    dword_140389E10 |= a1;
  else
    dword_140389E10 &= ~a1;
  KxReleaseSpinLock(&qword_140389D10);
  __writecr8(v6);
  return v5;
}
