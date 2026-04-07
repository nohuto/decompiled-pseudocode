/*
 * XREFs of ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180074038
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180074030 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180018C4C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18004DF90 (_alloca_probe.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180071D5C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180072404 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
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
        char *a10)
{
  unsigned __int16 v13[2048]; // [rsp+50h] [rbp-2038h] BYREF
  size_t v14[512]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    StringCchPrintfW((unsigned __int16 *)v14, 0x800uLL, (size_t *)L"%hs");
    StringCchVPrintfW(v13, 0x800uLL, v14, a10);
  }
  else
  {
    v13[0] = 0;
  }
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 2, a8, v13);
}
