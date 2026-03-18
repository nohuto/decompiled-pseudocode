/*
 * XREFs of MiCollapseRunTopDown @ 0x140216A58
 * Callers:
 *     MiFindRebuildCandidate @ 0x140232BE4 (MiFindRebuildCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  char v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rcx

  v2 = a1[3];
  if ( a1[1] - 1 > v2 )
    a1[1] = v2 + 1;
  v3 = a1[2];
  if ( *a1 < v3 )
    *a1 = v3;
  v4 = *a1;
  v5 = a1[1];
  if ( *a1 < v5 )
  {
    v6 = *((_BYTE *)a1 + 48);
    while ( v6 || a1[5] <= v5 - v4 )
    {
      v7 = a1[4];
      if ( !v7 )
        return 1LL;
      v8 = ~(v7 - 1);
      if ( (((v5 - 1) ^ (v5 - a1[5])) & v8) == 0 )
        return 1LL;
      if ( (v8 & v5) != v5 )
        a1[1] = v8 & v5;
      v9 = *a1;
      if ( (v8 & *a1) == *a1 || (*a1 = v8 & (v7 + v9 - 1), (v8 & (v7 + v9 - 1)) != 0) )
      {
        v4 = *a1;
        v5 = a1[1];
        if ( *a1 < v5 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
