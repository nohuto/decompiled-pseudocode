/*
 * XREFs of sub_180004624 @ 0x180004624
 * Callers:
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_18008A3C0 @ 0x18008A3C0 (sub_18008A3C0.c)
 *     sub_18010C9B4 @ 0x18010C9B4 (sub_18010C9B4.c)
 * Callees:
 *     _vsnwprintf @ 0x18008C9D0 (_vsnwprintf.c)
 */

__int64 sub_180004624(wchar_t *Buffer, unsigned __int64 a2, const wchar_t *a3, ...)
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
