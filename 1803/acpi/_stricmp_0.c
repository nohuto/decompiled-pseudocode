/*
 * XREFs of _stricmp_0 @ 0x1C0004016
 * Callers:
 *     Debugger @ 0x1C0049678 (Debugger.c)
 *     OSInterface @ 0x1C0051FC0 (OSInterface.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp_0(const char *Str1, const char *Str2)
{
  return _stricmp(Str1, Str2);
}
