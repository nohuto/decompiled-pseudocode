/*
 * XREFs of PopUpdateExternalDisplayState @ 0x1406540E8
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(char a1)
{
  char v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  PopAcquirePolicyLock();
  PopConsoleExternalDisplayConnected = a1;
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = &v3;
    v3 = a1;
    v6 = 1;
    TlgWrite(&pCallbackContext, &unk_14030C930, 0LL, 0LL, 3u, &pData);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock();
}
