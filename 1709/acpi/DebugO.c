/*
 * XREFs of DebugO @ 0x1C005E1C0
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x1C005E21C (DebugOutPort.c)
 */

__int64 __fastcall DebugO(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 1LL);
}
