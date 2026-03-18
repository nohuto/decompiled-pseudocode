/*
 * XREFs of iswspace @ 0x140188FA0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1407982CC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140799754 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140799EA8 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x14018B2C0 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
