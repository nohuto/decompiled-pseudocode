/*
 * XREFs of PopSetSystemState @ 0x14016DB24
 * Callers:
 *     PoSetUserPresent @ 0x14016DAE0 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402787A0 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140654F70 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x1400CF6BC (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x14016DB68 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x14016DC30 (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime(3u);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
