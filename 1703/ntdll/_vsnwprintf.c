/*
 * XREFs of _vsnwprintf @ 0x1800975A0
 * Callers:
 *     sub_180058124 @ 0x180058124 (sub_180058124.c)
 *     sub_180060E98 @ 0x180060E98 (sub_180060E98.c)
 *     sub_180061E14 @ 0x180061E14 (sub_180061E14.c)
 *     sub_18007D6CC @ 0x18007D6CC (sub_18007D6CC.c)
 *     sub_1800D442C @ 0x1800D442C (sub_1800D442C.c)
 *     sub_1800DEA5C @ 0x1800DEA5C (sub_1800DEA5C.c)
 * Callees:
 *     sub_1800975B8 @ 0x1800975B8 (sub_1800975B8.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return sub_1800975B8((_DWORD)Buffer, BufferCount, (_DWORD)Format, 0, (__int64)Args);
}
