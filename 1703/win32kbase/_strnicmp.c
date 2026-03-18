/*
 * XREFs of _strnicmp @ 0x1C009D460
 * Callers:
 *     ldevLoadImage @ 0x1C005FB00 (ldevLoadImage.c)
 *     rimLoadImage @ 0x1C0106FB8 (rimLoadImage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
