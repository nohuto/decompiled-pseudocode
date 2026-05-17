/*
 * XREFs of sub_180099698 @ 0x180099698
 * Callers:
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 * Callees:
 *     iswctype @ 0x18008EA80 (iswctype.c)
 *     sub_18009A10C @ 0x18009A10C (sub_18009A10C.c)
 */

__int64 __fastcall sub_180099698(_DWORD *a1, __int64 a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = sub_18009A10C(a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
