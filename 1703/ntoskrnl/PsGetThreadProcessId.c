/*
 * XREFs of PsGetThreadProcessId @ 0x14002CF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadProcessId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
