/*
 * XREFs of sub_180058124 @ 0x180058124
 * Callers:
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 * Callees:
 *     _vsnwprintf @ 0x1800975A0 (_vsnwprintf.c)
 */

__int64 sub_180058124(wchar_t *Buffer, __int64 a2, const wchar_t *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
