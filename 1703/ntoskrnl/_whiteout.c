/*
 * XREFs of _whiteout @ 0x140172E50
 * Callers:
 *     _winput_s @ 0x140172EA8 (_winput_s.c)
 * Callees:
 *     iswctype @ 0x14016C840 (iswctype.c)
 *     _fgetwc_nolock @ 0x140173904 (_fgetwc_nolock.c)
 */

__int64 __fastcall whiteout(_DWORD *a1, FILE *a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = fgetwc_nolock(a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
