/*
 * XREFs of iswdigit @ 0x140188F80
 * Callers:
 *     PfSnParsePrefetchParam @ 0x14055D518 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x14018B2C0 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
