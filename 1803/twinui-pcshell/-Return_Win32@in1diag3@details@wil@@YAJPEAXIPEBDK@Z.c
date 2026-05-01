/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000C7EC (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18001BEA0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180024B30 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800413D0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18008E7FC (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800F9A78 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___ @ 0x180138FC8 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_996cccf22044f7b06fef9.c)
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x1801E24EC (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18024549C (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801427D4 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v5, retaddr, 1, (int)a4);
}
