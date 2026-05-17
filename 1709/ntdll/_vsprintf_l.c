/*
 * XREFs of _vsprintf_l @ 0x180092208
 * Callers:
 *     vsprintf @ 0x180092290 (vsprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     _output_l @ 0x180097180 (_output_l.c)
 *     _flsbuf @ 0x18009F85C (_flsbuf.c)
 */

int __cdecl vsprintf_l(char *const Buffer, const char *const Format, const _locale_t Locale, va_list ArgList)
{
  int v5; // eax
  bool v6; // sf
  int v7; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && Buffer )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v5 = output_l(&File, Format, Locale, ArgList);
    v6 = --File._cnt < 0;
    v7 = v5;
    if ( v6 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v7;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
