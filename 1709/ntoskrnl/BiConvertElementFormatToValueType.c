/*
 * XREFs of BiConvertElementFormatToValueType @ 0x1405B022C
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiConvertElementFormatToValueType(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 < 2 )
    return 3LL;
  if ( a1 <= 3 )
    return result;
  if ( a1 == 4 )
    return 7LL;
  else
    return 3LL;
}
