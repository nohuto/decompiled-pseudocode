/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x1402BAB9C
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x140035180 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdlePrepare @ 0x14010DF60 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x140242130 (KeQueryTimerDueTime.c)
 */

unsigned __int64 ExGetNextWakeTimeForDeepSleep()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 result; // rax
  __int64 *v2; // rdi
  __int64 v3; // rcx

  v0 = -1LL;
  result = -1LL;
  if ( PoRtcWakeAllowed )
  {
    v2 = (__int64 *)ExpWakeTimerList;
    while ( v2 != &ExpWakeTimerList )
    {
      v3 = (__int64)(v2 - 33);
      v2 = (__int64 *)*v2;
      if ( *(_QWORD *)(v3 + 256) )
        result = KeQueryTimerDueTime(v3);
      if ( result )
      {
        if ( result < v0 )
          v0 = result;
      }
    }
    return v0;
  }
  return result;
}
