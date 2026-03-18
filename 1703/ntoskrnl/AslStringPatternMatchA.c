/*
 * XREFs of AslStringPatternMatchA @ 0x1405BAFA0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchA @ 0x1405BAFA0 (AslStringPatternMatchA.c)
 * Callees:
 *     toupper @ 0x14016B980 (toupper.c)
 *     AslStringPatternMatchA @ 0x1405BAFA0 (AslStringPatternMatchA.c)
 */

__int64 __fastcall AslStringPatternMatchA(char *a1, _BYTE *a2)
{
  char v4; // al
  char v5; // al
  int v6; // ebx
  int v7; // ebx

  while ( 1 )
  {
    v4 = *a1;
    if ( !*a1 && !*a2 )
      return 1LL;
    if ( v4 == 63 )
    {
      ++a1;
      goto LABEL_7;
    }
    if ( v4 != 42 )
    {
      v7 = toupper(v4);
      if ( v7 != toupper((char)*a2) )
        return 0LL;
      ++a1;
      goto LABEL_7;
    }
    v5 = a1[1];
    if ( v5 == 42 )
    {
      ++a1;
    }
    else
    {
      if ( !v5 )
        return 1LL;
      v6 = toupper(v5);
      if ( v6 == toupper((char)*a2) )
      {
        if ( (unsigned int)AslStringPatternMatchA(a1 + 1, a2) )
          return 1LL;
      }
LABEL_7:
      if ( !*a2 )
        return 0LL;
      ++a2;
    }
  }
}
