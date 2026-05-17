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

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 240);
    LOBYTE(v10) = a2 != 0;
    v11 = TppCancelTimer(a1, v8 + 112, v10);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive(a1 + 240);
      v9 = 0;
    }
    if ( !v11 )
    {
      if ( !v9 )
        return v11;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(a1 + 240);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    if ( !v9 )
    {
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      }
      return v11;
    }
    TppSetTimer(a1, v8 + 112, a2, a3, a4);
    goto LABEL_11;
  }
  return 0LL;
}
