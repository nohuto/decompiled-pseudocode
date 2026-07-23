/*
 * XREFs of sub_18004FC4C @ 0x18004FC4C
 * Callers:
 *     sub_18004FB50 @ 0x18004FB50 (sub_18004FB50.c)
 *     sub_1800F2E10 @ 0x1800F2E10 (sub_1800F2E10.c)
 * Callees:
 *     sub_18004FC74 @ 0x18004FC74 (sub_18004FC74.c)
 */

bool __fastcall sub_18004FC4C(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)sub_18004FC74(a1) && (v2 & 3) == 2;
}
