/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1402BAB80
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopFreeWakeSource @ 0x140762198 (PopFreeWakeSource.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
