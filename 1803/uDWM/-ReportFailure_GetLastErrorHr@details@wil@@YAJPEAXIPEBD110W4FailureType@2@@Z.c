/*
 * XREFs of ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x18006E6B8
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006E7C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18006D81C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18006E52C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  unsigned int v7; // esi
  signed int LastErrorFail; // eax
  unsigned int v10; // ebx
  const char *v12; // [rsp+20h] [rbp-38h]

  v7 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v12, a6);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  wil::details::ReportFailure((__int64)a1, v7, a3, 0LL, 0LL, (__int64)a6, 1, v10);
  return v10;
}
