/*
 * XREFs of towlower @ 0x1800966D0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18004DF70 (RtlCanonicalizeDomainName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x180111238 (_CopyLowerCaseAndSubstitute.c)
 * Callees:
 *     iswctype @ 0x180094520 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
