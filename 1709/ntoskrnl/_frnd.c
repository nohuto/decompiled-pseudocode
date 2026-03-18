/*
 * XREFs of _frnd @ 0x14017D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall frnd(double result)
{
  if ( result < 9.007199254740991e15 && result > -9.007199254740991e15 )
    return (double)(int)result;
  return result;
}
