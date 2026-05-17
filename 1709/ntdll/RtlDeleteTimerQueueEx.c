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

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 i; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  HANDLE v13; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v5 = RtlpTpRevertCapture(&v13, 0, a3);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive(a1 + 8);
      for ( i = *(_QWORD *)(a1 + 24); i != a1 + 24; i = v12 )
      {
        v12 = *(_QWORD *)i;
        _InterlockedOr((volatile signed __int32 *)(i + 48), 1u);
        v11 += TpTimerOutstandingCallbackCount(*(_QWORD *)(i + 64));
        TpReleaseTimer(*(_QWORD *)(i + 64));
        _m_prefetchw((const void *)(i + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(i + 48), 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i, v7, v8, v9);
      }
      RtlReleaseSRWLockExclusive(a1 + 8);
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v5 = v11 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v5 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v13);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
