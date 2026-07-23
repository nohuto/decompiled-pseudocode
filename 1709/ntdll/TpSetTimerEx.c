/*
 * XREFs of TpSetTimerEx @ 0x18000F800
 * Callers:
 *     TpSetTimer @ 0x18000F7B0 (TpSetTimer.c)
 *     RtlCreateTimer @ 0x180011160 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180011A50 (RtlDeleteTimer.c)
 *     RtlUpdateTimer @ 0x1800138F0 (RtlUpdateTimer.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180037818 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpScheduleCompaction @ 0x18004911C (RtlpHpScheduleCompaction.c)
 *     RtlpWnfSetRetryTimer @ 0x1800DE1EC (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TpIsTimerSet @ 0x18000F7C0 (TpIsTimerSet.c)
 *     TppTimerpValidateTimer @ 0x18000F9AC (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18000FBB4 (TppSetTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL) )
  {
    v8 = *((_QWORD *)Timer + 18);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    LOBYTE(v10) = DueTime != 0LL;
    v11 = TppCancelTimer(Timer, v8 + 112, v10);
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
    TppSetTimer(Timer, v8 + 112, DueTime, Period, WindowLength);
    goto LABEL_11;
  }
  return 0;
}
