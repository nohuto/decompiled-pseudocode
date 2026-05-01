/*
 * XREFs of HamDisconnectForDebugging @ 0x18000CD60
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x18000D468 (HampConnectionDestroy.c)
 */

__int64 __fastcall HamDisconnectForDebugging(__int64 a1)
{
  HampConnectionDestroy(a1);
  return 0LL;
}
