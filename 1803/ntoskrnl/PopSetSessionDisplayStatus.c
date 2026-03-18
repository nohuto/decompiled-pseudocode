/*
 * XREFs of PopSetSessionDisplayStatus @ 0x140612ED8
 * Callers:
 *     PopSetDisplayStatus @ 0x1405EEA80 (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x1405EEACC (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x140612E30 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x140526968 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_14065D480;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
