/*
 * XREFs of ?ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z @ 0x1800260B8
 * Callers:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180026184 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 * Callees:
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180002B04 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32Msg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        char *a10)
{
  unsigned int v12; // ebx
  __int64 v15; // [rsp+20h] [rbp-38h]

  v12 = (unsigned __int16)a8 | 0x80070000;
  if ( a8 <= 0 )
    v12 = a8;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(1LL, v12);
  wil::details::ReportFailure_Msg(a1, a2, a3, a4, v15, a6, 1, v12, a9, a10);
  return v12;
}
