/*
 * XREFs of BiConvertElementFormatToValueType @ 0x1406093C8
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiConvertElementFormatToValueType(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 >= 2 )
  {
    if ( a1 <= 3 )
      return result;
    if ( a1 == 4 )
      return 7LL;
  }
  return 3LL;
}
