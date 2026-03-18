/*
 * XREFs of _strupr_0 @ 0x1C0003FCE
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C00466AC (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C0048694 (DebugExpr.c)
 *     DebugNotify @ 0x1C0048970 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
