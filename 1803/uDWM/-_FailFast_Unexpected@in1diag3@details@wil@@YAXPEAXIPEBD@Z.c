/*
 * XREFs of ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006ED20
 * Callers:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180036148 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006E740 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Unexpected(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    0xC47u,
    (__int64)"internal\\sdk\\inc\\wil/Staging.h",
    0LL,
    0LL,
    retaddr,
    3,
    0x8000FFFF);
}
