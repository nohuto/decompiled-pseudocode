/*
 * XREFs of sub_1800D9D68 @ 0x1800D9D68
 * Callers:
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800D9D68(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 * (unsigned __int64)a2;
  return v4 <= 0xFFFFFFFF && (unsigned int)v4 + a1 >= (unsigned int)v4 && a1 < a4 && (unsigned int)v4 + a1 <= a4;
}
