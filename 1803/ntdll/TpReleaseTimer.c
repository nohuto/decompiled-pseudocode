/*
 * XREFs of TpReleaseTimer @ 0x180058900
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     sub_180058AD0 @ 0x180058AD0 (sub_180058AD0.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  void (__fastcall *v3)(PTP_TIMER); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)sub_180025DA4((PPEB_LDR_DATA)Timer, 1LL, 0LL) && (unsigned int)sub_180058A78(Timer, 1LL) )
  {
    *((_QWORD *)Timer + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    ++*((_BYTE *)Timer + 355);
    if ( sub_18002888C((__int64)Timer, (_RTL_SRWLOCK *)(*((_QWORD *)Timer + 18) + 112LL), 0) )
      v2 = 2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
    {
      v3 = (void (__fastcall *)(PTP_TIMER))**((_QWORD **)Timer + 1);
      if ( (char *)v3 == (char *)sub_180058AD0 )
        sub_180058AD0(Timer);
      else
        v3(Timer);
    }
  }
}
