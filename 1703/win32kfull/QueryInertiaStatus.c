/*
 * XREFs of QueryInertiaStatus @ 0x1C01B0DD0
 * Callers:
 *     <none>
 * Callees:
 *     QueryInertiaInfo @ 0x1C020A788 (QueryInertiaInfo.c)
 */

_BOOL8 QueryInertiaStatus()
{
  return QueryInertiaInfo(&gInertiaInfo, *(_QWORD *)gptCursorAsync, 0LL) != 0;
}
