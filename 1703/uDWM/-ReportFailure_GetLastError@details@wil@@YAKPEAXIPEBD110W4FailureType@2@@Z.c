/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180071E64
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180072454 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180071544 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180071D5C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  unsigned int v7; // ebp
  signed int LastErrorFail; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  const char *v13; // [rsp+20h] [rbp-48h]

  v7 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v11 = LastErrorFail;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(3LL, v11);
  wil::details::ReportFailure((__int64)a1, v7, a3, 0LL, 0LL, (__int64)a6, 3, v11, 0LL);
  return v10;
}
