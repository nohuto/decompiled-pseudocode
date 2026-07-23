/*
 * XREFs of TpReleaseTimer @ 0x180019600
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 *     sub_180082ED0 @ 0x180082ED0 (sub_180082ED0.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_1800196E0 @ 0x1800196E0 (sub_1800196E0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  int v3; // eax
  void (__fastcall *v4)(PTP_TIMER); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)sub_18001770C((PPEB_LDR_DATA)Timer, 1LL, 0LL) )
  {
    LOBYTE(v3) = sub_1800144B8((__int64)Timer, 1LL);
    if ( v3 )
    {
      *((_QWORD *)Timer + 23) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      ++*((_BYTE *)Timer + 355);
      if ( sub_1800177A0((__int64)Timer, (_RTL_SRWLOCK *)(*((_QWORD *)Timer + 18) + 112LL), 0) )
        v2 = 2;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
      {
        v4 = (void (__fastcall *)(PTP_TIMER))**((_QWORD **)Timer + 1);
        if ( (char *)v4 == (char *)sub_1800196E0 )
          sub_1800196E0(Timer);
        else
          v4(Timer);
      }
    }
  }
}
