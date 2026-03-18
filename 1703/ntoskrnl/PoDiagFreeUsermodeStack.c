/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x14045E2C4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14003C378 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
