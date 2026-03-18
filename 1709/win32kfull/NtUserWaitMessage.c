/*
 * XREFs of NtUserWaitMessage @ 0x1C00F83C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00F8420 (ClientWaitMessageExMPH.c)
 */

__int64 NtUserWaitMessage()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx

  EnterCrit(0LL, 1LL);
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL) > 0 )
    v0 = ClientWaitMessageExMPH(15615LL);
  else
    v0 = xxxSleepThread2(0x3CFFu, 0, 1, 0, 0LL);
  v3 = v0;
  UserSessionSwitchLeaveCrit(v2, v1);
  return v3;
}
