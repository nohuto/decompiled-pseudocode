/*
 * XREFs of sub_18007D6CC @ 0x18007D6CC
 * Callers:
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     sub_18007D4C0 @ 0x18007D4C0 (sub_18007D4C0.c)
 *     sub_18008CEF0 @ 0x18008CEF0 (sub_18008CEF0.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 * Callees:
 *     _vsnwprintf @ 0x1800975A0 (_vsnwprintf.c)
 */

__int64 sub_18007D6CC(wchar_t *Buffer, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Buffer = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(Buffer, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
