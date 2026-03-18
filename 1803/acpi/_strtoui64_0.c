/*
 * XREFs of _strtoui64_0 @ 0x1C0003FC2
 * Callers:
 *     DebugExpr @ 0x1C0048694 (DebugExpr.c)
 *     DebugInPort @ 0x1C004886C (DebugInPort.c)
 *     DebugOutPort @ 0x1C0048B2C (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0049010 (IsNumber.c)
 *     ConvertToInteger @ 0x1C0053BE8 (ConvertToInteger.c)
 *     DbgParseOneArg @ 0x1C0054040 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
