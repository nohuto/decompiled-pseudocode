/*
 * XREFs of _iswctype_l @ 0x1800944EC
 * Callers:
 *     wcstoxq @ 0x18009286C (wcstoxq.c)
 *     wcstoxlX @ 0x180096AB8 (wcstoxlX.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
