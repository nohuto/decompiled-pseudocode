/*
 * XREFs of sub_180070F28 @ 0x180070F28
 * Callers:
 *     sub_180070DBC @ 0x180070DBC (sub_180070DBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180070F28(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx

  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 16 * (v3 + 3LL)) - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(a2 + 16 * (v3 + 3LL) + 8) - a1[1];
    if ( !v4 )
      break;
    if ( ++v3 >= 4 )
      return 0LL;
  }
  return 1LL;
}
