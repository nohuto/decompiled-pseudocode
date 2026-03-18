/*
 * XREFs of MatchObjType @ 0x1C0047034
 * Callers:
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     CopyObject @ 0x1C0050550 (CopyObject.c)
 * Callees:
 *     <none>
 */

char __fastcall MatchObjType(unsigned int a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 == a2 )
    return 1;
  if ( a1 == 14 )
  {
    if ( a2 == 1 )
      return 1;
LABEL_8:
    a1 = 134;
    goto LABEL_10;
  }
  if ( !a1 )
    goto LABEL_10;
  if ( a1 > 4 )
  {
    if ( a1 != 5 )
      goto LABEL_10;
    goto LABEL_8;
  }
  a1 = 133;
LABEL_10:
  if ( a1 == a2 || a2 == 135 && a1 - 133 <= 1 )
    return 1;
  if ( !a1 )
  {
    if ( a2 == 134 )
      return v2;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v2;
}
