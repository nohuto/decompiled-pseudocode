/*
 * XREFs of PopSetSessionUserStatus @ 0x140526758
 * Callers:
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x1405270DC (PopRemoteSessionActiveInput.c)
 *     PopConsoleSessionPassiveInput @ 0x1405847B8 (PopConsoleSessionPassiveInput.c)
 *     PopSessionDisconnected @ 0x1405EEACC (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x14076D7C4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x14076D90C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopEvaluateGlobalUserStatus @ 0x140526838 (PopEvaluateGlobalUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x140526968 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x140526A18 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x1406273E0 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_1403A7B80 = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE);
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
