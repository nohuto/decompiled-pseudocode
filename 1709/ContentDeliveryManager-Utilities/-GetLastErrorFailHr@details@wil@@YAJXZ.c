/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001EF4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180015084 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180015644 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002BF8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::GetLastErrorFailHr(wil::details *this)
{
  signed int LastError; // ecx
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  LastError = GetLastError();
  if ( !LastError )
  {
    wil::details::ReportFailure_Hr(0LL, 0LL, 0LL, 0LL, 0LL, retaddr, 2, -2147024228);
    LastError = 668;
  }
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
