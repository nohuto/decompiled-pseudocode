/*
 * XREFs of _stricmp_0 @ 0x1C002BCF6
 * Callers:
 *     OSInterface @ 0x1C0012CB0 (OSInterface.c)
 *     Debugger @ 0x1C005EAFC (Debugger.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp_0(const char *Str1, const char *Str2)
{
  return _stricmp(Str1, Str2);
}
