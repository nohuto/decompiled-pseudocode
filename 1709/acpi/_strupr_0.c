/*
 * XREFs of _strupr_0 @ 0x1C002BCAE
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C00161AC (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C005DD84 (DebugExpr.c)
 *     DebugNotify @ 0x1C005E060 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
