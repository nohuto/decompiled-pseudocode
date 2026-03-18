/*
 * XREFs of iswalnum @ 0x140188F60
 * Callers:
 *     GetAttributeName @ 0x140797E80 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1407996AC (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x14018B2C0 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
