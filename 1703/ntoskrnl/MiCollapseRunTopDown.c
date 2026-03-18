/*
 * XREFs of MiCollapseRunTopDown @ 0x1400B6A50
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x140223E98 (MiFindRebuildCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  __int64 v8; // r11
  __int64 v9; // rdx

  v1 = a1[3];
  if ( a1[1] - 1 > v1 )
    a1[1] = v1 + 1;
  v2 = a1[2];
  if ( *a1 < v2 )
    *a1 = v2;
  v3 = *a1;
  v4 = a1[1];
  if ( *a1 < v4 )
  {
    v5 = a1[5];
    while ( v5 <= v4 - v3 )
    {
      v6 = a1[4];
      if ( !v6 )
        return 1LL;
      v8 = ~(v6 - 1);
      if ( (((v4 - 1) ^ (v4 - v5)) & v8) == 0 )
        return 1LL;
      if ( (v8 & v4) != v4 )
        a1[1] = v4 & v8;
      v9 = *a1;
      if ( (v8 & *a1) == *a1 || (*a1 = v8 & (v6 + v9 - 1), (v8 & (v6 + v9 - 1)) != 0) )
      {
        v3 = *a1;
        v4 = a1[1];
        if ( *a1 < v4 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
