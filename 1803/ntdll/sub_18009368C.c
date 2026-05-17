/*
 * XREFs of sub_18009368C @ 0x18009368C
 * Callers:
 *     sub_1800936D0 @ 0x1800936D0 (sub_1800936D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009368C(char a1)
{
  if ( (a1 & 0x20) != 0 )
  {
    return 5;
  }
  else if ( (a1 & 8) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 4) != 0 )
  {
    return 2;
  }
  else if ( (a1 & 1) != 0 )
  {
    return 3;
  }
  else
  {
    return (unsigned int)(2 * (a1 & 2));
  }
}
