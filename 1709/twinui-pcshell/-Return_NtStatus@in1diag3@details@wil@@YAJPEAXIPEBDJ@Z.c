/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007A1EC
 * Callers:
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180078914 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096684 (-OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800CDAD4 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1800DC170 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x1800DC64C (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 *     ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x180104AFC (--$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YA.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180199E28 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1801C3070 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18007A14C (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_NtStatus(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v5,
           retaddr,
           1u,
           (unsigned int)a4);
}
