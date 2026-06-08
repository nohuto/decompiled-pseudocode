/*
 * XREFs of ExecutePccWrite @ 0x1C000BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutePccWrite(__int64 a1)
{
  LOBYTE(a1) = 1;
  return ExecutePccCommand(a1);
}
