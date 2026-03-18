/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14057D6FC
 * Callers:
 *     PopSessionDisconnected @ 0x140579D20 (PopSessionDisconnected.c)
 *     PopSetDisplayStatus @ 0x140579DA0 (PopSetDisplayStatus.c)
 *     PopSessionConnected @ 0x14057D654 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x14042015C (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  const char *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = ">>>>>";
  if ( !a3 )
    v6 = File;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
