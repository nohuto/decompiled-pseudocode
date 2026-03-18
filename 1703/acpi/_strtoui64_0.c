/*
 * XREFs of _strtoui64_0 @ 0x1C002BFB2
 * Callers:
 *     ConvertToInteger @ 0x1C001CA8C (ConvertToInteger.c)
 *     DebugExpr @ 0x1C005BFDC (DebugExpr.c)
 *     DebugInPort @ 0x1C005C1B4 (DebugInPort.c)
 *     DebugOutPort @ 0x1C005C474 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 *     IsNumber @ 0x1C005C948 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C0062480 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
