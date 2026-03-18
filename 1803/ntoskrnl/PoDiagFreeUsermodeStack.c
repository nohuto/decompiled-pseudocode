/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x14048C060
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140003E2C (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
