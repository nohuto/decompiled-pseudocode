/*
 * XREFs of PopSetSystemState @ 0x14015B574
 * Callers:
 *     PoSetUserPresent @ 0x14015B530 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x140241290 (PoSetSystemState.c)
 *     PopAllowAwayModeSettingCallback @ 0x1405F1E60 (PopAllowAwayModeSettingCallback.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     PopResetIdleTime @ 0x14012EC3C (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x14015B5B8 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x14015B664 (PopDiagTraceSetSystemState.c)
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
