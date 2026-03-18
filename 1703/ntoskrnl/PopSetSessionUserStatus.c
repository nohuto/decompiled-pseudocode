/*
 * XREFs of PopSetSessionUserStatus @ 0x1404205E4
 * Callers:
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopConsoleSessionPassiveInput @ 0x14042020C (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x140420578 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x140579D20 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1406D4484 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1406D45C8 (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x14042015C (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x1404207EC (PopPrintUserActivityPresence.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopExtendConnectionState @ 0x1405D45FC (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  int v5; // eax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_140349EA0 = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, &Src);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, &Src);
  v5 = PopMaximumConnectionSessions;
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
    {
      PopExtendConnectionState(a1);
      v5 = PopMaximumConnectionSessions;
    }
    if ( v5 )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
      else
        _bittestandset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
    }
  }
  return PopEvaluateGlobalUserStatus();
}
