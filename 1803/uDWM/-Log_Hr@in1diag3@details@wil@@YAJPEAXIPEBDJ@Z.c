/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007B5D4
 * Callers:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B120 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006E740 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr(
    (__int64)this,
    0x3B1u,
    (__int64)"internal\\sdk\\inc\\wil\\Result.h",
    0LL,
    0LL,
    retaddr,
    2,
    (unsigned int)a4);
  return v4;
}
