/*
 * XREFs of _strupr_0 @ 0x1C002BFBE
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C001E46C (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C005BFDC (DebugExpr.c)
 *     DebugNotify @ 0x1C005C2C0 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
