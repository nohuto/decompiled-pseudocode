/*
 * XREFs of vswprintf_s @ 0x180096930
 * Callers:
 *     swprintf_s @ 0x180096900 (swprintf_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180098760 @ 0x180098760 (sub_180098760.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = sub_180098760(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    sub_18008B020();
  return -1;
}
