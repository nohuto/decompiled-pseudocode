/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x1402033D8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiAdjustTimerDueTimes @ 0x140149D6C (KiAdjustTimerDueTimes.c)
 */

__int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  char v6[4]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+24h] [rbp-34h]
  __int128 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+40h] [rbp-18h]

  if ( KiSerializeTimerExpiration )
  {
    v2 = a2 - KiClockTimerOneShotStartTime;
    result = (unsigned int)KiTimerRebaseThresholdOnDripsExit;
    v9 = v2;
    if ( v2 > 10000000LL * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      MEMORY[0xFFFFF780000003B0] += v2;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v9 = -v9;
      v4 = KiProcessorBlock[0];
      if ( !KiSerializeTimerExpiration )
        v4 = a1;
      v6[0] = 1;
      v7 = 0;
      v8 = 0LL;
      v10 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), v4 + 13952, (__int64)v6);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
