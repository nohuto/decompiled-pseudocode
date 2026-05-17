/*
 * XREFs of vsprintf_s @ 0x180096380
 * Callers:
 *     sprintf_s @ 0x180096350 (sprintf_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180097858 @ 0x180097858 (sub_180097858.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = sub_180097858(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    sub_18008B020();
  return -1;
}
