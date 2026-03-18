/*
 * XREFs of PopNetArmRefreshTimer @ 0x14076B7D0
 * Callers:
 *     PopNetRefreshWorkerCallback @ 0x14076B9E0 (PopNetRefreshWorkerCallback.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x14076BB08 (PopNetUpdateConnectivityRefreshTime.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x14076A240 (PopTraceNetRefreshTimerArmed.c)
 */

void __fastcall PopNetArmRefreshTimer(__int64 a1)
{
  unsigned __int64 v2; // rcx

  KeSetTimer2((__int64)&PopNetRefreshTimer, a1, 0LL, 0LL);
  v2 = 0LL;
  if ( MEMORY[0xFFFFF78000000014] < a1 )
    v2 = a1 - MEMORY[0xFFFFF78000000014];
  PopTraceNetRefreshTimerArmed(v2);
}
