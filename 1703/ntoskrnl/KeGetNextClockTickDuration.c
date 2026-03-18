/*
 * XREFs of KeGetNextClockTickDuration @ 0x1401FD300
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 */

unsigned __int64 KeGetNextClockTickDuration()
{
  __int64 v0; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  LARGE_INTEGER v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v3);
  if ( KiClockTimerNextTickTime > InterruptTimePrecise )
    return KiClockTimerNextTickTime - InterruptTimePrecise;
  return v0;
}
