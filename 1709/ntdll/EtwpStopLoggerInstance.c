/*
 * XREFs of EtwpStopLoggerInstance @ 0x180060DE0
 * Callers:
 *     EtwpStopUmLogger @ 0x180062764 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180062FF0 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x18006384C (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x180063A40 (EtwpDisableTraceProviders.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 544);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2LL, *(unsigned int *)(a1 + 40));
  return 0LL;
}
