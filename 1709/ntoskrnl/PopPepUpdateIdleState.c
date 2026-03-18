/*
 * XREFs of PopPepUpdateIdleState @ 0x140123A34
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x14000C130 (PopPepIdleTimeoutRoutine.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140123750 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140123910 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140123980 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepComponentSetLatency @ 0x14014749C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14015C184 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140242574 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x14001C0BC (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140123A94 (PopPepGetComponentPreferedIdleState.c)
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
