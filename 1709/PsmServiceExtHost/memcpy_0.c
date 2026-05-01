/*
 * XREFs of memcpy_0 @ 0x180026AA5
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800021B8 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     CempGetProcessHostInfo @ 0x180006500 (CempGetProcessHostInfo.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B750 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000BCB0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000C090 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C400 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000DF60 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x1800126B0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z @ 0x180014EE0 (-RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z.c)
 *     PsmHostStateNotification2 @ 0x180015AD0 (PsmHostStateNotification2.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x1800179D4 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x180017F00 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001CDF4 (QueryTransientObjectSecurityDescriptor.c)
 *     PsmMemoryLimitNotification2 @ 0x18001E7E0 (PsmMemoryLimitNotification2.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18001F09C (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x18001F138 (RmpWnfPublishMessageToClientStateName.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180032930 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?HampRmHostInfoToPackageInfo@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800440D4 (-HampRmHostInfoToPackageInfo@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
