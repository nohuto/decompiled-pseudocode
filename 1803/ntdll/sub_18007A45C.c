/*
 * XREFs of sub_18007A45C @ 0x18007A45C
 * Callers:
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     sub_18007A318 @ 0x18007A318 (sub_18007A318.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CC088 @ 0x1800CC088 (sub_1800CC088.c)
 *     sub_1800CC2EC @ 0x1800CC2EC (sub_1800CC2EC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18007A45C(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
