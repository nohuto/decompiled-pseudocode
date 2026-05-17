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

__int64 __fastcall RtlDeleteTimer(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  int v6; // edi
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  int v13; // [rsp+58h] [rbp+20h]

  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v6 = sub_180058F2C(&v12, 0LL);
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive(*((_QWORD *)a2 + 7) + 8LL, v5, v7, v8);
    v9 = *(__int64 **)a2;
    v10 = (__int64 **)*((_QWORD *)a2 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a2 + 8LL) != a2 || *v10 != (__int64 *)a2 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)a2 + 7) + 8LL));
    _InterlockedOr(a2 + 12, 1u);
    TpSetTimerEx(*((_QWORD *)a2 + 8), 0LL, 0, 0);
    if ( a3 == -1 )
    {
      TpWaitForTimer(*((_QWORD *)a2 + 8), 1u);
    }
    else if ( a3 )
    {
      *((_QWORD *)a2 + 9) = a3;
    }
    v13 = TpTimerOutstandingCallbackCount(*((_QWORD *)a2 + 8));
    TpReleaseTimer(*((_QWORD *)a2 + 8));
    _m_prefetchw((const void *)(a2 + 12));
    if ( (_InterlockedAnd(a2 + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      sub_18005907C(a2);
      v13 = 0;
    }
    v6 = v13 != 0 ? 0x103 : 0;
  }
  sub_1800588B4(v12);
  return (unsigned int)v6;
}
