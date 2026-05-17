/*
 * XREFs of towlower @ 0x18009B8C0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 *     sub_18010DDF0 @ 0x18010DDF0 (sub_18010DDF0.c)
 * Callees:
 *     iswctype @ 0x180099620 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
