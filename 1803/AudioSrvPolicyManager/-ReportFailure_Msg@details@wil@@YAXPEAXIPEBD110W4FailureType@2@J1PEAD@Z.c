/*
 * XREFs of ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180019960
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180019A6C (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001694 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002968 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _vsnwprintf @ 0x180035B60 (_vsnwprintf.c)
 *     _alloca_probe @ 0x180036250 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure_Msg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        va_list Args)
{
  int v13; // eax
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2038h] BYREF
  wchar_t Format[2048]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    StringCchPrintfW(Format, 2048LL, L"%hs");
    v13 = vsnwprintf(Buffer, 0x7FFuLL, Format, Args);
    if ( v13 < 0 || (unsigned __int64)v13 > 0x7FE )
      Buffer[2047] = 0;
  }
  else
  {
    Buffer[0] = 0;
  }
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 2, a8, Buffer, 0);
}
