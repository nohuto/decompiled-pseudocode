/*
 * XREFs of sub_180001694 @ 0x180001694
 * Callers:
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     sub_1800F5B30 @ 0x1800F5B30 (sub_1800F5B30.c)
 * Callees:
 *     sub_1800016BC @ 0x1800016BC (sub_1800016BC.c)
 */

bool __fastcall sub_180001694(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)sub_1800016BC(a1) && (v2 & 3) == 2;
}
