/*
 * XREFs of sub_1800F4430 @ 0x1800F4430
 * Callers:
 *     sub_180067ACC @ 0x180067ACC (sub_180067ACC.c)
 *     sub_180068274 @ 0x180068274 (sub_180068274.c)
 *     sub_180068ED0 @ 0x180068ED0 (sub_180068ED0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800F4430(unsigned __int16 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int16)(a1 - 97) <= 0x19u
        || (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned __int16)(a1 - 45)))
        || a1 >= 0x80u;
  return result;
}
