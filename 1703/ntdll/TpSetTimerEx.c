/*
 * XREFs of TpSetTimerEx @ 0x180017510
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180011110 (RtlCreateTimer.c)
 *     TpSetTimer @ 0x180017500 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x180085320 (RtlUpdateTimer.c)
 *     sub_1800DF864 @ 0x1800DF864 (sub_1800DF864.c)
 * Callees:
 *     TpIsTimerSet @ 0x1800172C0 (TpIsTimerSet.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)sub_18001770C(Timer, 0LL, DueTime != 0LL) )
  {
    v8 = *((_QWORD *)Timer + 18);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    LOBYTE(v10) = DueTime != 0LL;
    v11 = sub_1800177A0(Timer, v8 + 112, v10);
    if ( DueTime && *((_BYTE *)Timer + 355) )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      v9 = 0;
    }
    if ( !v11 )
    {
      if ( !v9 )
        return v11;
      if ( TpIsTimerSet(Timer) )
      {
LABEL_10:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)Timer);
    }
    if ( !v9 )
    {
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
          (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
      }
      return v11;
    }
    sub_180018DD8(Timer, v8 + 112, DueTime, Period, WindowLength);
    goto LABEL_10;
  }
  return 0;
}
