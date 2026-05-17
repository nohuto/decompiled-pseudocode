/*
 * XREFs of vswprintf_s @ 0x1800A1560
 * Callers:
 *     swprintf_s @ 0x1800A1530 (swprintf_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A3190 @ 0x1800A3190 (sub_1800A3190.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = sub_1800A3190(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    sub_180095DE0();
  return -1;
}
