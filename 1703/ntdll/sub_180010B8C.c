/*
 * XREFs of sub_180010B8C @ 0x180010B8C
 * Callers:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 *     sub_180010BC4 @ 0x180010BC4 (sub_180010BC4.c)
 *     sub_180010C00 @ 0x180010C00 (sub_180010C00.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180010B8C(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *a1;
  v4 = a2 + a3;
  v5 = *a1 + a1[1];
  return v5 >= v3 && v4 >= a2 && a2 <= v5 && v4 <= v5 && a2 >= v3 && v4 >= v3;
}
