/*
 * XREFs of ?_CancelTimer@CDelayedTask@ComTaskPool@Internal@Windows@@AEAA_NXZ @ 0x1800F59A0
 * Callers:
 *     ??_ECDelayedTaskLifetime@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180105420 (--_ECDelayedTaskLifetime@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::ComTaskPool::CDelayedTask::_CancelTimer(
        Windows::Internal::ComTaskPool::CDelayedTask *this)
{
  char v1; // bl
  void *v2; // rdx

  v1 = 0;
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)this + 2, 0LL);
  if ( v2 )
    return DeleteTimerQueueTimer(0LL, v2, 0LL);
  return v1;
}
