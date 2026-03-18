/*
 * XREFs of PopLidSwitchChangeCallback @ 0x1406C71A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x1405A8304 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopLidSwitchChangeCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v5 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - a1[1];
  if ( v5 || a3 != 4 || !a2 )
    return 3221225485LL;
  if ( PopPlatformAoAc
    && !*a2
    && !PopConsoleDisplayState
    && (GUID *)PopWdiCurrentScenario == &GUID_SPM_LOW_POWER_CS
    && !_InterlockedCompareExchange(&PopLidClosedSleepStudyWorkItemQueued, 1, 0) )
  {
    ExQueueWorkItem(&PopLidClosedSleepStudyWorkItem, DelayedWorkQueue);
  }
  v6 = *(_OWORD *)a1;
  v9 = *a2;
  v8 = v6;
  PopBroadcastSessionInfo(0, 20, (__int64)&v8);
  return 0LL;
}
