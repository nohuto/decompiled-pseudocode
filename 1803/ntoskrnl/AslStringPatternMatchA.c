/*
 * XREFs of AslStringPatternMatchA @ 0x14061E11C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchA @ 0x14061E11C (AslStringPatternMatchA.c)
 * Callees:
 *     toupper @ 0x14018A400 (toupper.c)
 *     AslStringPatternMatchA @ 0x14061E11C (AslStringPatternMatchA.c)
 */

__int64 __fastcall AslStringPatternMatchA(char *a1, char *a2)
{
  char v2; // si
  char *v3; // rax
  unsigned int v4; // edi
  char *v5; // rbp
  int v6; // eax
  int v7; // ebx
  char *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v2 = *a1;
  v3 = a2;
  v4 = 1;
LABEL_2:
  v5 = a1;
  while ( 1 )
  {
    if ( !v2 )
    {
      v2 = 0;
      if ( !*v3 )
        return v4;
    }
    if ( v2 == 63 )
    {
      ++v5;
    }
    else
    {
      if ( v2 == 42 )
      {
        a1 = v5 + 1;
        v2 = v5[1];
        if ( v2 == 42 )
          goto LABEL_2;
        if ( !v2 )
          return v4;
        v6 = toupper(v2);
        if ( v6 == toupper(*v9) )
        {
          if ( (unsigned int)AslStringPatternMatchA(v5 + 1, v9) )
            return v4;
        }
      }
      else
      {
        v7 = toupper(*v3);
        if ( toupper(v2) != v7 )
          return 0;
        ++v5;
      }
      v3 = v9;
    }
    if ( !*v3 )
      return 0;
    v2 = *v5;
    v9 = ++v3;
  }
}
