/*
 * XREFs of NtUserWaitMessage @ 0x1C00E6280
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00E62E0 (ClientWaitMessageExMPH.c)
 */

__int64 NtUserWaitMessage()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx

  EnterCrit(0LL, 1LL);
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
    v0 = ClientWaitMessageExMPH(15615LL);
  else
    v0 = xxxSleepThread2(0x3CFFu, 0, 1, 0, 0LL);
  v5 = v0;
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v5;
}
