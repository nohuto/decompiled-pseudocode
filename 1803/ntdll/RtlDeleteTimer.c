/*
 * XREFs of RtlDeleteTimer @ 0x180057EA0
 * Callers:
 *     RtlCancelTimer @ 0x180108B00 (RtlCancelTimer.c)
 * Callees:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     TpWaitForTimer @ 0x18002C520 (TpWaitForTimer.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     TpTimerOutstandingCallbackCount @ 0x180058FF0 (TpTimerOutstandingCallbackCount.c)
 *     sub_18005907C @ 0x18005907C (sub_18005907C.c)
 */

NTSTATUS __cdecl RtlDeleteTimer(HANDLE TimerQueueHandle, HANDLE TimerToCancel, HANDLE Event)
{
  NTSTATUS v5; // edi
  _QWORD *v6; // rcx
  HANDLE *v7; // rax
  HANDLE v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerToCancel )
    return -1073741584;
  v5 = sub_180058F2C(&v9);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    v6 = *(_QWORD **)TimerToCancel;
    v7 = (HANDLE *)*((_QWORD *)TimerToCancel + 1);
    if ( *(HANDLE *)(*(_QWORD *)TimerToCancel + 8LL) != TimerToCancel || *v7 != TimerToCancel )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    _InterlockedOr((volatile signed __int32 *)TimerToCancel + 12, 1u);
    TpSetTimerEx(*((PTP_TIMER *)TimerToCancel + 8), 0LL, 0, 0);
    if ( Event == (HANDLE)-1LL )
    {
      TpWaitForTimer(*((PTP_TIMER *)TimerToCancel + 8), 1u);
    }
    else if ( Event )
    {
      *((_QWORD *)TimerToCancel + 9) = Event;
    }
    v10 = TpTimerOutstandingCallbackCount(*((_QWORD *)TimerToCancel + 8));
    TpReleaseTimer(*((PTP_TIMER *)TimerToCancel + 8));
    _m_prefetchw((char *)TimerToCancel + 48);
    if ( (_InterlockedAnd((volatile signed __int32 *)TimerToCancel + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      sub_18005907C(TimerToCancel);
      v10 = 0;
    }
    v5 = v10 != 0 ? 0x103 : 0;
  }
  sub_1800588B4(v9);
  return v5;
}
