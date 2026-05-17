/*
 * XREFs of sub_1800A40C8 @ 0x1800A40C8
 * Callers:
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 * Callees:
 *     iswctype @ 0x180099620 (iswctype.c)
 *     sub_1800A4AD0 @ 0x1800A4AD0 (sub_1800A4AD0.c)
 */

__int64 __fastcall sub_1800A40C8(_DWORD *a1, __int64 a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = sub_1800A4AD0(a2, a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
