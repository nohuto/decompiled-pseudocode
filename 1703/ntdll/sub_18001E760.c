/*
 * XREFs of sub_18001E760 @ 0x18001E760
 * Callers:
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E760(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r9

  v4 = a4 & 1 | 0x4000000;
  v5 = a4 & 1 | 0x4000004u;
  if ( a2 < 0x10000 )
    v5 = v4;
  return sub_18001EFB4(a1, a2, a2, v5);
}
