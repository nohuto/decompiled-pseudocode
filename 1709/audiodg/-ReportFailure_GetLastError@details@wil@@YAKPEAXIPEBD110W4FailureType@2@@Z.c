/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x14003345C
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1400340C4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1400463FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x140032674 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x140033354 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        unsigned int a7)
{
  unsigned int v8; // r14d
  signed int LastErrorFail; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  const char *v14; // [rsp+20h] [rbp-48h]

  v8 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v12 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v12 = LastErrorFail;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(a7, v12);
  wil::details::ReportFailure((__int64)a1, v8, a3, 0LL, 0LL, (__int64)a6, a7, v12, 0LL);
  return v11;
}
