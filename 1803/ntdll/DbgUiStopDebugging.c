/*
 * XREFs of DbgUiStopDebugging @ 0x1800C9640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
