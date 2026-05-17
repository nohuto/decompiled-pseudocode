/*
 * XREFs of sub_180047A28 @ 0x180047A28
 * Callers:
 *     sub_1800477B0 @ 0x1800477B0 (sub_1800477B0.c)
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 *     sub_180047A60 @ 0x180047A60 (sub_180047A60.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180047A28(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *a1;
  v4 = a2 + a3;
  v5 = *a1 + a1[1];
  return v5 >= v3 && v4 >= a2 && a2 <= v5 && v4 <= v5 && a2 >= v3 && v4 >= v3;
}
