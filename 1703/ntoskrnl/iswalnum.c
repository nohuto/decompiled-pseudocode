/*
 * XREFs of iswalnum @ 0x14016A7D0
 * Callers:
 *     GetAttributeName @ 0x1406FCC24 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1406FE440 (IsEncodedAttributeChar.c)
 * Callees:
 *     <none>
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
