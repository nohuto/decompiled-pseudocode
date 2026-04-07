/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180085DDC
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000C8B0 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A789C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180085D14 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_NtStatus(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v5,
           retaddr,
           v6,
           (unsigned int)a4);
}
