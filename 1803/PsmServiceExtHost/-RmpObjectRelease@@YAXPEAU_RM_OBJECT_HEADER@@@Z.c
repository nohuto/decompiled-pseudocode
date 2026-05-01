/*
 * XREFs of ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001240 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002538 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002930 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180003320 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DB8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800073E8 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x18000B78C (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010DC0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACT.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800124B0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180014FA0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001C0A0 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001C730 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001CBEC (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAU_RM_ACTIVITY_HOST@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180021570 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180022948 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180023600 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x1800256B0 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18002D478 (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002EF70 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x180031F70 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 *     RmpTracingControlCallback @ 0x180034100 (RmpTracingControlCallback.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BAE4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x18004DF70 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18004EEA4 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x18004FCE4 (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18004FF38 (-RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x1800500E4 (-RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180050EB4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 *     ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x1800519FC (-RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST.c)
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051BB8 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180052228 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052C6C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053564 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 *     ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18005381C (-RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 *     ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180053880 (-RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800548F8 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180054C74 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180056664 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800567B0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180056834 (-RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180056990 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005959C (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180059760 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005BDA0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18005C148 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x18005CA94 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18005D380 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005EF30 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800229A4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003217C (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18003222C (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 */

void __fastcall RmpObjectRelease(char *P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  int v5; // ecx
  void *v6; // r8
  void *v7; // r8
  void *v8; // rcx
  HANDLE *v9; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *((_DWORD *)P + 10);
    if ( v5 == 1 )
    {
      v6 = (void *)*((_QWORD *)P + 13);
      if ( v6 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      v7 = (void *)*((_QWORD *)P + 10);
      if ( v7 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      RmpPartitionRelease(*((HANDLE **)P + 15));
      v8 = (void *)*((_QWORD *)P + 16);
      if ( v8 )
        NtClose(v8);
    }
    else if ( v5 )
    {
      if ( v5 == 2 && !*((_DWORD *)P + 24) && !*((_DWORD *)P + 25) )
        NtDeleteWnfStateName(P + 96);
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(P + 1224));
      v9 = (HANDLE *)*((_QWORD *)P + 7);
      if ( v9 )
        RmpPartitionRelease(v9);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(P + 64));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
