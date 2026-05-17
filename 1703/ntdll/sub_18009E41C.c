/*
 * XREFs of sub_18009E41C @ 0x18009E41C
 * Callers:
 *     sub_18009E460 @ 0x18009E460 (sub_18009E460.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009E41C(char a1)
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
