/*
 * XREFs of _stricmp @ 0x1C009D9A4
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00A25FC (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
