/*
 * XREFs of memset @ 0x1800275FE
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001180 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800012C0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001340 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     memcpy_s @ 0x1800013B0 (memcpy_s.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x18000241C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800039C0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004EB4 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000AD88 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000B168 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000EDF8 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800116F8 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B684 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18001BA34 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180020A2C (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ??0CVolumeLimitTrackerImpl@@QEAA@XZ @ 0x180021DA0 (--0CVolumeLimitTrackerImpl@@QEAA@XZ.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800233B8 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ??0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z @ 0x180023888 (--0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180024178 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180024240 (-Rehash@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAAXI@Z.c)
 *     __scrt_fastfail @ 0x1800271DC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return _o_memset(a1, Val, Size);
}
