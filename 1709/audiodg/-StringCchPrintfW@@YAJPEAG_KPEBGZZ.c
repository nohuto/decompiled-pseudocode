/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140017110
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140017058 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x14001A07C (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140031BF4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x14003B344 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x14001D9CC (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
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
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
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
