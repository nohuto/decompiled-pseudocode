/*
 * XREFs of _vsnwprintf @ 0x18008C9D0
 * Callers:
 *     sub_180004624 @ 0x180004624 (sub_180004624.c)
 *     sub_1800091F4 @ 0x1800091F4 (sub_1800091F4.c)
 *     sub_18004373C @ 0x18004373C (sub_18004373C.c)
 *     sub_18006D7BC @ 0x18006D7BC (sub_18006D7BC.c)
 *     sub_1800C8ACC @ 0x1800C8ACC (sub_1800C8ACC.c)
 *     sub_1800D82C8 @ 0x1800D82C8 (sub_1800D82C8.c)
 * Callees:
 *     sub_18008C9E8 @ 0x18008C9E8 (sub_18008C9E8.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return sub_18008C9E8((_DWORD)Buffer, BufferCount, (_DWORD)Format, 0, (__int64)Args);
}
