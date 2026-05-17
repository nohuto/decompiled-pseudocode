/*
 * XREFs of iswxdigit @ 0x1800944E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswxdigit(wint_t C)
{
  return iswctype(C, 0x80u);
}
