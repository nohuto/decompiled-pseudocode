/*
 * XREFs of RtlDeleteTimer @ 0x180010F80
 * Callers:
 *     RtlCancelTimer @ 0x180105C70 (RtlCancelTimer.c)
 * Callees:
 *     sub_18001052C @ 0x18001052C (sub_18001052C.c)
 *     TpTimerOutstandingCallbackCount @ 0x180010F30 (TpTimerOutstandingCallbackCount.c)
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     TpWaitForTimer @ 0x1800143D0 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x180019600 (TpReleaseTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeleteTimer(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v5 = sub_180012CB0(&v9, 0LL);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive(*(_QWORD *)(a2 + 56) + 8LL);
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlReleaseSRWLockExclusive(*(_QWORD *)(a2 + 56) + 8LL);
    _InterlockedOr((volatile signed __int32 *)(a2 + 48), 1u);
    TpSetTimerEx(*(_QWORD *)(a2 + 64), 0LL, 0LL, 0LL, v5);
    if ( a3 == -1 )
    {
      TpWaitForTimer(*(_QWORD *)(a2 + 64), 1LL);
    }
    else if ( a3 )
    {
      *(_QWORD *)(a2 + 72) = a3;
    }
    v10 = TpTimerOutstandingCallbackCount(*(_QWORD *)(a2 + 64));
    TpReleaseTimer(*(_QWORD *)(a2 + 64));
    _m_prefetchw((const void *)(a2 + 48));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0xFFFFFFFE) & 2) != 0 )
    {
      sub_18001052C(a2);
      v10 = 0;
    }
    v5 = v10 != 0 ? 0x103 : 0;
  }
  sub_180012FFC(v9);
  return (unsigned int)v5;
}
