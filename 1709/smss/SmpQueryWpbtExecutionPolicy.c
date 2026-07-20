/*
 * XREFs of SmpQueryWpbtExecutionPolicy @ 0x14000C4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpQueryWpbtExecutionPolicy(__int64 a1, int a2, _DWORD *a3, int a4)
{
  SmpDisableWpbtExecution = a4 == 4 && a2 == 4 && *a3 != 0;
  return 0LL;
}
