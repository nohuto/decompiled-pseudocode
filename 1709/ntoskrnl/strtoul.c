/*
 * XREFs of strtoul @ 0x140160DDC
 * Callers:
 *     EmpCacheBiosDate @ 0x14083336C (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x140833A88 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1408342C0 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1408350C8 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x14083B9BC (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x140160B5C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
