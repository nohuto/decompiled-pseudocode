/*
 * XREFs of sub_1800F7744 @ 0x1800F7744
 * Callers:
 *     sub_1800F7C1C @ 0x1800F7C1C (sub_1800F7C1C.c)
 *     sub_1800F7C8C @ 0x1800F7C8C (sub_1800F7C8C.c)
 * Callees:
 *     sub_18006BB70 @ 0x18006BB70 (sub_18006BB70.c)
 *     sub_1800F78BC @ 0x1800F78BC (sub_1800F78BC.c)
 *     sub_1800F7D84 @ 0x1800F7D84 (sub_1800F7D84.c)
 */

char __fastcall sub_1800F7744(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // bp

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((__int64)(*(unsigned __int8 *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1[14] + 32LL)) - 1) << 7)
                + *(_QWORD *)(a1[14] + 40LL)) & 0x3F;
  LOBYTE(a2) = v4;
  sub_1800F7D84(a1, a2);
  if ( a1[13] == a1[5] )
    return sub_18006BB70((__int64)a1, v3, v4);
  else
    return sub_1800F78BC(a1, v3);
}
