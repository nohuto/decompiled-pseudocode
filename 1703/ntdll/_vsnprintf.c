/*
 * XREFs of _vsnprintf @ 0x1800974D0
 * Callers:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 *     sub_1800854A8 @ 0x1800854A8 (sub_1800854A8.c)
 *     sub_1800D5530 @ 0x1800D5530 (sub_1800D5530.c)
 * Callees:
 *     sub_1800974E8 @ 0x1800974E8 (sub_1800974E8.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return sub_1800974E8((_DWORD)Buffer, BufferCount, (_DWORD)Format, 0, (__int64)ArgList);
}
