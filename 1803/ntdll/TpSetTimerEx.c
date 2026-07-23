/*
 * XREFs of TpSetTimerEx @ 0x180024F70
 * Callers:
 *     sub_1800114B4 @ 0x1800114B4 (sub_1800114B4.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 *     TpSetTimer @ 0x1800247B0 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x180056890 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180057FF0 (RtlCreateTimer.c)
 *     sub_1800D90E8 @ 0x1800D90E8 (sub_1800D90E8.c)
 * Callees:
 *     TpIsTimerSet @ 0x180024540 (TpIsTimerSet.c)
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)sub_180025DA4(Timer, 0LL, DueTime != 0LL) )
  {
    v8 = *((_QWORD *)Timer + 18);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    LOBYTE(v10) = DueTime != 0LL;
    v11 = sub_18002888C(Timer, v8 + 112, v10);
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
LABEL_11:
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
    sub_18002C9D0(Timer, v8 + 112, DueTime, Period, WindowLength);
    goto LABEL_11;
  }
  return 0;
}
