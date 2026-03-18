/*
 * XREFs of PsGetCurrentThreadId @ 0x140115CA0
 * Callers:
 *     PoShutdownBugCheck @ 0x1406FC900 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
