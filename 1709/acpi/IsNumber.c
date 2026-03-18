/*
 * XREFs of IsNumber @ 0x1C005E6FC
 * Callers:
 *     DebugExpr @ 0x1C005DD84 (DebugExpr.c)
 *     DebugInPort @ 0x1C005DF5C (DebugInPort.c)
 *     DebugNotify @ 0x1C005E060 (DebugNotify.c)
 *     DebugOutPort @ 0x1C005E21C (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C002BCA2 (_strtoui64_0.c)
 */

char __fastcall IsNumber(const char *a1, int a2)
{
  char v3; // di
  char *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  EndPtr = 0LL;
  v3 = 1;
  if ( strtoui64_0(a1, &EndPtr, a2) == -1LL || a1 == EndPtr || !*a1 )
    return 0;
  return v3;
}
