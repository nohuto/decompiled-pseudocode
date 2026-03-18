/*
 * XREFs of strtoul @ 0x14016C4FC
 * Callers:
 *     CmpGetBiosDate @ 0x1407F7AD0 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x140804FF0 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x14080571C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140806D4C (EmpParseRuleTermArgMapping.c)
 * Callees:
 *     strtoxlX @ 0x14016C27C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
