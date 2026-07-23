/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x1800550D0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x180108B10 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180055078 @ 0x180055078 (sub_180055078.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     TpTimerOutstandingCallbackCount @ 0x180058FF0 (TpTimerOutstandingCallbackCount.c)
 *     sub_18005907C @ 0x18005907C (sub_18005907C.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueueEx(HANDLE TimerQueueHandle, HANDLE Event)
{
  NTSTATUS v4; // ebx
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
    v4 = sub_180058F2C(&v9);
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
          sub_18005907C(i);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      if ( _InterlockedDecrement((volatile signed __int32 *)TimerQueueHandle) )
      {
        if ( Event != (HANDLE)-1LL )
        {
          v4 = v7 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        ZwWaitForAlertByThreadId(TimerQueueHandle, 0LL);
      }
      else
      {
        *((_QWORD *)TimerQueueHandle + 5) = 0LL;
        sub_180055078(TimerQueueHandle);
      }
      v4 = 0;
    }
LABEL_19:
    sub_1800588B4(v9);
    return v4;
  }
  return -1073741585;
}
