/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x1800152C0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x18010B2A0 (RtlDeleteTimerQueue.c)
 * Callees:
 *     TpReleaseTimer @ 0x18000BCB0 (TpReleaseTimer.c)
 *     RtlpTpResumeImpersonation @ 0x180011788 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18001197C (RtlpTpRevertCapture.c)
 *     TpTimerOutstandingCallbackCount @ 0x180011A00 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpTimerRundown @ 0x180011C54 (RtlpTpTimerRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180015460 (RtlpTpTimerQueueRundown.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueueEx(HANDLE TimerQueueHandle, HANDLE Event)
{
  int v4; // ebx
  char *i; // rsi
  int v7; // [rsp+20h] [rbp-48h]
  char *v8; // [rsp+30h] [rbp-38h]
  HANDLE v9; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( TimerQueueHandle )
  {
    v4 = RtlpTpRevertCapture(&v9, 0);
    if ( v4 >= 0 )
    {
      if ( Event )
      {
        if ( Event == (HANDLE)-1LL )
          *((_QWORD *)TimerQueueHandle + 5) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *((_QWORD *)TimerQueueHandle + 2) = Event;
      }
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      for ( i = (char *)*((_QWORD *)TimerQueueHandle + 3); i != (char *)TimerQueueHandle + 24; i = v8 )
      {
        v8 = *(char **)i;
        _InterlockedOr((volatile signed __int32 *)i + 12, 1u);
        v7 += TpTimerOutstandingCallbackCount(*((_QWORD *)i + 8));
        TpReleaseTimer(*((PTP_TIMER *)i + 8));
        _m_prefetchw(i + 48);
        if ( (_InterlockedAnd((volatile signed __int32 *)i + 12, 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown((__int64)i);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      if ( _InterlockedDecrement((volatile signed __int32 *)TimerQueueHandle) )
      {
        if ( Event != (HANDLE)-1LL )
        {
          v4 = v7 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(TimerQueueHandle, 0LL);
      }
      else
      {
        *((_QWORD *)TimerQueueHandle + 5) = 0LL;
        RtlpTpTimerQueueRundown(TimerQueueHandle);
      }
      v4 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v9);
    return v4;
  }
  return -1073741585;
}
