/*
 * XREFs of TpWaitForTimer @ 0x1800143D0
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 * Callees:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v4; // bp
  char v5; // bl
  __int64 v6; // r8

  if ( (unsigned int)sub_18001770C(Timer, 0LL, 0LL) )
  {
    v4 = 0;
    v5 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      ++*((_BYTE *)Timer + 355);
      LOBYTE(v6) = 1;
      v4 = sub_1800177A0(Timer, *((_QWORD *)Timer + 18) + 112LL, v6);
      if ( *((_DWORD *)Timer + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    sub_18001434C(Timer, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
