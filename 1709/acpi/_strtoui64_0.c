/*
 * XREFs of _strtoui64_0 @ 0x1C002BCA2
 * Callers:
 *     ConvertToInteger @ 0x1C002119C (ConvertToInteger.c)
 *     DebugExpr @ 0x1C005DD84 (DebugExpr.c)
 *     DebugInPort @ 0x1C005DF5C (DebugInPort.c)
 *     DebugOutPort @ 0x1C005E21C (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
 *     IsNumber @ 0x1C005E6FC (IsNumber.c)
 *     DbgParseOneArg @ 0x1C0063650 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
