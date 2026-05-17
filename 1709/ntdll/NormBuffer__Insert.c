/*
 * XREFs of NormBuffer__Insert @ 0x1800F8DD4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080920 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800F8C64 (NormBuffer__AppendAndSortDecomposed.c)
 *     NormBuffer__Insert @ 0x1800F8DD4 (NormBuffer__Insert.c)
 * Callees:
 *     NormBuffer__Insert @ 0x1800F8DD4 (NormBuffer__Insert.c)
 */

bool __fastcall NormBuffer__Insert(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v4; // rcx
  int v6; // ebp
  char v7; // di
  __int16 v9; // ax

  v4 = (__int16 *)a1[5];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v4 < a1[4] )
    {
      while ( a3 != v4 )
      {
        v9 = *a3;
        *a3 = a2;
        LOWORD(a2) = v9;
        ++a3;
      }
      *v4 = a2;
      a1[5] = v4 + 1;
      if ( (__int16 *)a1[8] == v4 - 1 )
        a1[8] = v4;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v6 = (a2 - 0x10000) / 1024;
    v7 = 0;
    if ( (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216)) )
      return (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)(v6 - 10240)) != 0;
    return v7;
  }
}
