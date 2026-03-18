/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140450040
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14000DDE8 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
