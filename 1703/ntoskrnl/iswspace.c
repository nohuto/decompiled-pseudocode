/*
 * XREFs of iswspace @ 0x14016A7F0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1406FD08C (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406FEC78 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
