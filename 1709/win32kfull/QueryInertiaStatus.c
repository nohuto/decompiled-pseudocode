/*
 * XREFs of QueryInertiaStatus @ 0x1C01B41B0
 * Callers:
 *     <none>
 * Callees:
 *     QueryInertiaInfo @ 0x1C020D930 (QueryInertiaInfo.c)
 */

_BOOL8 QueryInertiaStatus()
{
  return QueryInertiaInfo(&gInertiaInfo, *(_QWORD *)gptCursorAsync, 0LL) != 0;
}
