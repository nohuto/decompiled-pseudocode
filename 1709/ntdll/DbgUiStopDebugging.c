/*
 * XREFs of DbgUiStopDebugging @ 0x1800CFF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
