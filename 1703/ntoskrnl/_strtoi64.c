/*
 * XREFs of _strtoi64 @ 0x140169FD4
 * Callers:
 *     _atoi64 @ 0x140169830 (_atoi64.c)
 * Callees:
 *     strtoxq @ 0x140169DB8 (strtoxq.c)
 */

__int64 __cdecl strtoi64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq((__int64)&_initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0);
}
