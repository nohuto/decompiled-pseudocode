/*
 * XREFs of ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18008487C
 * Callers:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180084938 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001CF0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800099E4 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180063724 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CC2F0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionMsg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int16 *a8,
        va_list a9)
{
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-1058h]
  __int64 v15; // [rsp+40h] [rbp-1038h]
  char v16; // [rsp+48h] [rbp-1030h]
  unsigned __int16 v17[2048]; // [rsp+50h] [rbp-1028h] BYREF

  if ( a8 )
    wil::details::PrintLoggingMessage(v17, a8, a9, a4);
  else
    v17[0] = 0;
  StringCchCatW(v17, 2048LL, (char *)L" -- ");
  return wil::details::ReportFailure_CaughtExceptionCommon(a1, a2, a3, v12, v14, a6, 2, v17, v15, v16);
}
