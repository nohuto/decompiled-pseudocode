/*
 * XREFs of ExecutePccWrite @ 0x1C00099E0
 * Callers:
 *     <none>
 * Callees:
 *     ExecutePccCommand @ 0x1C002D2AC (ExecutePccCommand.c)
 */

__int64 __fastcall ExecutePccWrite(__int64 a1)
{
  LOBYTE(a1) = 1;
  return ExecutePccCommand(a1);
}
