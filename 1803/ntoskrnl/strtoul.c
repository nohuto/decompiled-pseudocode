/*
 * XREFs of strtoul @ 0x14018AF80
 * Callers:
 *     EmpCacheBiosDate @ 0x1408A95A4 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1408A9CB4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1408AA4CC (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1408AB2D8 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x1408AFBF8 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x14018ACFC (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
