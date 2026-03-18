/*
 * XREFs of PopPepUpdateIdleState @ 0x140079874
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x1400797C0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140079A10 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14016C020 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x140279230 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140279314 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140279408 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140279820 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400796B0 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1400798D4 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1, result);
  }
  return result;
}
