/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350
 * Callers:
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003468 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180003630 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000377C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180051620 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18006A1F0 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?EnsureFileHandle@SpatialInteractionDevice@@UEAAJXZ @ 0x180075340 (-EnsureFileHandle@SpatialInteractionDevice@@UEAAJXZ.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18007819C (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x18007BFEC (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180090350 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180092294 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800B3EC0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1800B5350 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800031C8 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}
