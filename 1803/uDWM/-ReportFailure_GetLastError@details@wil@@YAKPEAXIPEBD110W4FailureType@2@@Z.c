/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x18006E630
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006ED08 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18006D81C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18006E52C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  unsigned int v6; // edi
  signed int LastErrorFail; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  const char *v12; // [rsp+20h] [rbp-38h]

  v6 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, (__int64)"internal\\sdk\\inc\\wil\\resource.h", a4, v12, a6);
  v9 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v10 = LastErrorFail;
  wil::details::ReportFailure(
    (__int64)a1,
    v6,
    (__int64)"internal\\sdk\\inc\\wil\\resource.h",
    0LL,
    0LL,
    (__int64)a6,
    3,
    v10);
  return v9;
}
