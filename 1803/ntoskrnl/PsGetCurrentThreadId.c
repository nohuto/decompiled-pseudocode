/*
 * XREFs of PsGetCurrentThreadId @ 0x1400B5CA0
 * Callers:
 *     PoShutdownBugCheck @ 0x140762AF0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1407B55E4 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
