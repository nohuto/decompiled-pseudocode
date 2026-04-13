/*
 * XREFs of ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003054
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800031FC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068D64 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002030 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002B50 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  unsigned int v11; // ebx

  v11 = wil::details::NtStatusToHr((wil::details *)a8);
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, a7, v11, 0LL, 0);
  return v11;
}
