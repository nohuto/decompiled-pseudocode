/*
 * XREFs of ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180074124
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007459C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180018B20 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180071D5C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v9; // ebx

  v9 = wil::details::NtStatusToHr((wil::details *)a8);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(1LL, v9);
  wil::details::ReportFailure(a1, 0x13B6u, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", 0LL, 0LL, a6, 1, v9, 0LL);
  return v9;
}
