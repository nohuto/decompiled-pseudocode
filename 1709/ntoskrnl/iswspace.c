/*
 * XREFs of iswspace @ 0x14015F250
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140734A84 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140735F08 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140736660 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x140161120 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
