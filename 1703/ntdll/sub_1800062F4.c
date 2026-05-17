/*
 * XREFs of sub_1800062F4 @ 0x1800062F4
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_1800FF8DC @ 0x1800FF8DC (sub_1800FF8DC.c)
 *     sub_1800FF98C @ 0x1800FF98C (sub_1800FF98C.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800062F4(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v2 = *(_QWORD *)(a1 + 376);
  else
    v2 = 0LL;
  if ( v2 )
    v1 -= *(_QWORD *)(v2 + 72);
  return v1;
}
