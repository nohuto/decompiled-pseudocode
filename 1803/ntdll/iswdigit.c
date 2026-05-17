/*
 * XREFs of iswdigit @ 0x18008E9F0
 * Callers:
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
