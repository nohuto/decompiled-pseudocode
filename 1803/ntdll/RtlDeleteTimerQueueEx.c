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

__int64 __fastcall RtlDeleteTimerQueueEx(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  int v5; // ebx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  volatile signed __int32 *i; // rsi
  int v10; // [rsp+20h] [rbp-48h]
  volatile signed __int32 *v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v5 = sub_180058F2C(&v12, 0LL);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive(a1 + 8, v4, v6, v7);
      for ( i = *(volatile signed __int32 **)(a1 + 24); i != (volatile signed __int32 *)(a1 + 24); i = v11 )
      {
        v11 = *(volatile signed __int32 **)i;
        _InterlockedOr(i + 12, 1u);
        v10 += TpTimerOutstandingCallbackCount(*((_QWORD *)i + 8));
        TpReleaseTimer(*((_QWORD *)i + 8));
        _m_prefetchw((const void *)(i + 12));
        if ( (_InterlockedAnd(i + 12, 0xFFFFFFFE) & 2) != 0 )
          sub_18005907C(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v5 = v10 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        ZwWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        sub_180055078(a1);
      }
      v5 = 0;
    }
LABEL_19:
    sub_1800588B4(v12);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
