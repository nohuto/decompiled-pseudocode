/*
 * XREFs of _vsnprintf @ 0x18008C900
 * Callers:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 *     sub_18005CDD8 @ 0x18005CDD8 (sub_18005CDD8.c)
 *     sub_1800CA80C @ 0x1800CA80C (sub_1800CA80C.c)
 * Callees:
 *     sub_18008C918 @ 0x18008C918 (sub_18008C918.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return sub_18008C918((_DWORD)Buffer, BufferCount, (_DWORD)Format, 0, (__int64)ArgList);
}
