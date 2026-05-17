/*
 * XREFs of vsprintf @ 0x18008C7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  return sub_18008C738(Buffer, (__int64)Format, 0LL, (__int64)ArgList);
}
