/*
 * XREFs of sub_18010B820 @ 0x18010B820
 * Callers:
 *     sub_180094C58 @ 0x180094C58 (sub_180094C58.c)
 *     sub_18010BD78 @ 0x18010BD78 (sub_18010BD78.c)
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 *     sub_18010DD48 @ 0x18010DD48 (sub_18010DD48.c)
 * Callees:
 *     _vsnwprintf_s @ 0x1800A0630 (_vsnwprintf_s.c)
 */

__int64 sub_18010B820(wchar_t *Buffer, size_t a2, const wchar_t *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf_s(Buffer, a2, a2 - 1, a3, va);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
