/*
 * XREFs of ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180034364
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180031434 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18003F908 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180040148 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x1800689E0 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180040330 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_NtQueryWnfStateData(
        const struct __WIL__WNF_STATE_NAME *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3,
        unsigned int *a4,
        void *a5,
        unsigned int *a6)
{
  int (*v6)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *); // r10
  HMODULE NtDllModuleHandle; // rax

  v6 = g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, _QWORD, _QWORD, unsigned int *, void *, unsigned int *))v6)(
             a1,
             0LL,
             0LL,
             a4,
             a5,
             a6);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  g_wil_details_pfnNtQueryWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *))GetProcAddress(NtDllModuleHandle, "NtQueryWnfStateData");
  v6 = g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, _QWORD, _QWORD, unsigned int *, void *, unsigned int *))v6)(
             a1,
             0LL,
             0LL,
             a4,
             a5,
             a6);
  else
    return 3221225785LL;
}
