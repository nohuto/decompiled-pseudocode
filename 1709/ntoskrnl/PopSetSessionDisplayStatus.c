/*
 * XREFs of PopSetSessionDisplayStatus @ 0x1405ED87C
 * Callers:
 *     PopSessionConnected @ 0x1405ED7F0 (PopSessionConnected.c)
 *     PopSessionDisconnected @ 0x140709E74 (PopSessionDisconnected.c)
 *     PopSetDisplayStatus @ 0x14070A030 (PopSetDisplayStatus.c)
 * Callees:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x14059FE78 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_1405FA210;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
