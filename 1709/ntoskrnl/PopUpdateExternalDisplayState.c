/*
 * XREFs of PopUpdateExternalDisplayState @ 0x1405B82B4
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
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
    TlgWrite(&pCallbackContext, &unk_1402D1FFD, 0LL, 0LL, 3u, &pData);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock();
}
