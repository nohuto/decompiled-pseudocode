/*
 * XREFs of DbgUiStopDebugging @ 0x1800D5210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
