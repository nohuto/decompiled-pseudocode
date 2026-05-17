/*
 * XREFs of iswlower @ 0x1800944B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswlower(wint_t C)
{
  return iswctype(C, 2u);
}
