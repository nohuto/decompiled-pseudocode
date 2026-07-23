/*
 * XREFs of sub_1800F2DE4 @ 0x1800F2DE4
 * Callers:
 *     sub_18004FB50 @ 0x18004FB50 (sub_18004FB50.c)
 *     sub_1800F2E10 @ 0x1800F2E10 (sub_1800F2E10.c)
 * Callees:
 *     sub_18004FC74 @ 0x18004FC74 (sub_18004FC74.c)
 */

char __fastcall sub_1800F2DE4(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( sub_18004FC74(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
