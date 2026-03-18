/*
 * XREFs of _vsnwprintf_l @ 0x1C00A7228
 * Callers:
 *     _vsnwprintf @ 0x1C00A720C (_vsnwprintf.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C001AB40 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     _flsbuf @ 0x1C00A79CC (_flsbuf.c)
 *     _woutput_l @ 0x1C00A79DC (_woutput_l.c)
 */

int __cdecl vsnwprintf_l(wchar_t *DstBuf, size_t MaxCount, const wchar_t *Format, _locale_t Locale, va_list ArgList)
{
  int result; // eax
  int v7; // edi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = (char *)DstBuf;
    File._ptr = (char *)DstBuf;
    if ( MaxCount <= 0x3FFFFFFF )
      File._cnt = 2 * MaxCount;
    else
      File._cnt = 0x7FFFFFFF;
    result = woutput_l(&File, Format, Locale, ArgList);
    v7 = result;
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
      return v7;
    }
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers(0LL);
    return -1;
  }
  return result;
}
