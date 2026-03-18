/*
 * XREFs of ExpApplyRewaitBoost @ 0x14012DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 */

volatile signed __int64 *__fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 0xFF00u, (__int64)KeGetCurrentThread());
}
