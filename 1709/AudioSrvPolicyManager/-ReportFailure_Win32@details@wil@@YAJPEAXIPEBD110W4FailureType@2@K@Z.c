/*
 * XREFs of ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180020B94
 * Callers:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180020C20 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800026C0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned int v9; // ebx

  v9 = (unsigned __int16)a8 | 0x80070000;
  if ( a8 <= 0 )
    v9 = a8;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(1LL, v9);
  wil::details::ReportFailure(
    a1,
    0xAFu,
    (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
    0LL,
    0LL,
    a6,
    1,
    v9,
    0LL,
    0);
  return v9;
}
