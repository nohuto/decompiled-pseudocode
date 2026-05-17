/*
 * XREFs of sub_1800F52E0 @ 0x1800F52E0
 * Callers:
 *     sub_1800F5798 @ 0x1800F5798 (sub_1800F5798.c)
 *     sub_1800F5808 @ 0x1800F5808 (sub_1800F5808.c)
 * Callees:
 *     sub_1800697A0 @ 0x1800697A0 (sub_1800697A0.c)
 *     sub_1800F5450 @ 0x1800F5450 (sub_1800F5450.c)
 *     sub_1800F5904 @ 0x1800F5904 (sub_1800F5904.c)
 */

char __fastcall sub_1800F52E0(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // di

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1[14] + 32LL)) << 7)
                + *(_QWORD *)(a1[14] + 40LL)
                - 128);
  LOBYTE(a2) = v4 & 0x3F;
  sub_1800F5904(a1, a2);
  if ( a1[13] == a1[5] )
    return sub_1800697A0((__int64)a1, v3, v4 & 0x3F, v4 & 0xC0);
  else
    return sub_1800F5450(a1, v3);
}
