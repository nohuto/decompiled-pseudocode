/*
 * XREFs of sub_180083608 @ 0x180083608
 * Callers:
 *     sub_18008354C @ 0x18008354C (sub_18008354C.c)
 * Callees:
 *     sub_18007A824 @ 0x18007A824 (sub_18007A824.c)
 */

__int64 __fastcall sub_180083608(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 i; // bl
  __int64 v4; // rcx
  _BYTE *v5; // rax

  result = 0x8000LL;
  if ( *(_WORD *)(a1 + 98) >= 0x8000u )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v4 = 0LL;
      v5 = (_BYTE *)(a1 + 150);
      while ( !*(v5 - 2) || *v5 != i )
      {
        v4 = (unsigned int)(v4 + 1);
        v5 += 24;
        if ( (unsigned int)v4 >= 4 )
        {
          result = 0LL;
          goto LABEL_7;
        }
      }
      result = a1 + 8 * (v4 + 2 * (v4 + 8));
LABEL_7:
      if ( result )
        result = sub_18007A824(i, a1);
    }
  }
  return result;
}
