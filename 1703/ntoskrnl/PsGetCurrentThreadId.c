/*
 * XREFs of PsGetCurrentThreadId @ 0x14001C750
 * Callers:
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return KeGetCurrentThread()[1].KernelStack;
}
