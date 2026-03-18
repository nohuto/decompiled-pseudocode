/*
 * XREFs of iswalnum @ 0x14015F210
 * Callers:
 *     GetAttributeName @ 0x14073461C (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x140735E60 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x140161120 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
