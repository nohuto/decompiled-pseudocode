/*
 * XREFs of PopSetSystemState @ 0x14014ABF4
 * Callers:
 *     PoSetUserPresent @ 0x14014ABB0 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x14022DCB0 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x1405D58F0 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x14003A050 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x14014AC38 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x14014AD5C (PopDiagTraceSetSystemState.c)
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
      result = PopResetIdleTime(3);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
