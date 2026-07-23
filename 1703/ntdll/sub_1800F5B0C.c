/*
 * XREFs of sub_1800F5B0C @ 0x1800F5B0C
 * Callers:
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     sub_1800F5B30 @ 0x1800F5B30 (sub_1800F5B30.c)
 * Callees:
 *     sub_1800016BC @ 0x1800016BC (sub_1800016BC.c)
 */

char __fastcall sub_1800F5B0C(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( sub_1800016BC(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
