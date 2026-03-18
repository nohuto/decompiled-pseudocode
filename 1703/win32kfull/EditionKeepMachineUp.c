/*
 * XREFs of EditionKeepMachineUp @ 0x1C00F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00F9E8C (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionKeepMachineUp(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  enum POWER_MONITOR_REQUEST_REASON v5; // ecx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !gbBlockSendInputResets || (a4 & 8) == 0 )
  {
    v5 = gpsi;
    LOBYTE(v5) = (*gpsi & 0x4000) != 0;
    if ( ((unsigned __int8)v5 & ((a4 & 2) == 0)) == 0 )
      KeepMachineUp(v5);
  }
  if ( gPowerAdaptiveState && ((*gpsi & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    gPowerAdaptiveState = 0;
    v7[0] = 8;
    QueuePowerRequest(v7, 0LL);
  }
  return 1LL;
}
