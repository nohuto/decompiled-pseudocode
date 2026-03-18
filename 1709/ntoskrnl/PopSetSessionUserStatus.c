/*
 * XREFs of PopSetSessionUserStatus @ 0x14059FF2C
 * Callers:
 *     PopRemoteSessionActiveInput @ 0x14059FB8C (PopRemoteSessionActiveInput.c)
 *     PopConsoleSessionPassiveInput @ 0x14059FBC8 (PopConsoleSessionPassiveInput.c)
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopCheckConsoleTimeouts @ 0x140709B34 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x140709D18 (PopInputDisabled.c)
 *     PopSessionDisconnected @ 0x140709E74 (PopSessionDisconnected.c)
 * Callees:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x14059FE78 (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1405A04F4 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x1405F091C (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_1403644E0 = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0, 4u, &Src);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1, 4u, &Src);
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
      PopExtendConnectionState(a1);
    if ( PopMaximumConnectionSessions )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
      else
        _bittestandset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
    }
  }
  return PopEvaluateGlobalUserStatus();
}
