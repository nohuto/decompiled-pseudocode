/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000792C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140004DB8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007800 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned int v3; // ebx
  int v5; // r9d
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 result; // rax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = 0;
  v5 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    result = (unsigned int)v5;
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v6 = a2 - 1;
    v7 = _vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
    return v3;
  }
  return result;
}
