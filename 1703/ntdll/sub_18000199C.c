/*
 * XREFs of sub_18000199C @ 0x18000199C
 * Callers:
 *     sub_1800018C4 @ 0x1800018C4 (sub_1800018C4.c)
 *     sub_180109568 @ 0x180109568 (sub_180109568.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000199C(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v4; // r9

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-(a2 != 0LL);
  if ( !a2 || *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v4 = a2[1];
  if ( a1[1] > v4 )
    return 1LL;
  if ( a1[1] < v4 )
    return (unsigned int)-1;
  return v2;
}
