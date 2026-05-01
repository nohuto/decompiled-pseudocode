/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x180037530
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180036FF0 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     SystemStateTrackerCreate @ 0x1800372F4 (SystemStateTrackerCreate.c)
 *     SystemStateTrackerStart @ 0x18003740C (SystemStateTrackerStart.c)
 *     TraceLoggingRegisterEx @ 0x1800376E4 (TraceLoggingRegisterEx.c)
 *     RmpLaunchAllRpcServers @ 0x180037774 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180037C64 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     RmpCreateResourceManagerServer @ 0x180038440 (RmpCreateResourceManagerServer.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     IsQueryUserTokenPresent @ 0x18003F138 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18003F20C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E120 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E354 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct ModernResourceEnforcer *v1; // rbx
  int v3; // edi
  int ResourceManagerServer; // edi
  struct _RM_SERVICE_GLOBALS *v5; // rcx
  int v6; // edi
  int v7; // eax
  struct _RM_SERVICE_GLOBALS *v8; // rsi
  DWORD v9; // edi
  struct _RM_SERVICE_GLOBALS *v10; // rdi
  struct ModernResourceEnforcer *v11; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v13[144]; // [rsp+58h] [rbp-49h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  RmSvcGlobals = 0LL;
  if ( !(unsigned __int8)IsPsmQueryBackgroundActivationTypePresent() || !(unsigned __int8)IsQueryUserTokenPresent() )
  {
    v6 = -2147467263;
    goto LABEL_11;
  }
  if ( (int)CreateModernResourceEnforcer(a1, &v11) < 0 )
  {
    v1 = v11;
  }
  else
  {
    v3 = SystemStateTrackerCreate();
    if ( v3 < 0 || (v3 = SystemStateTrackerStart(), v3 < 0) )
    {
      v1 = v11;
      v6 = v3 | 0x10000000;
      goto LABEL_11;
    }
    RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
    TraceLoggingRegisterEx(
      (TraceLoggingHProvider)&hProvider,
      (TLG_PENABLECALLBACK)RmpTracingControlCallback,
      &RmpSvcGlobals);
    TraceLoggingRegisterEx(
      (TraceLoggingHProvider)&_volatile_metadata,
      (TLG_PENABLECALLBACK)HampManagerTracingControlCallback,
      (char *)RmSvcGlobals + 1312);
    v1 = v11;
    ResourceManagerServer = RmpCreateResourceManagerServer(v11);
    if ( ResourceManagerServer < 0 )
      goto LABEL_21;
    g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 279);
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
    v6 = InitializeResourceManagerServerProxy(v5, &g_pProxy);
    if ( v6 >= 0 )
    {
      v7 = RmpLaunchAllRpcServers();
      if ( v7 >= 0 )
      {
        v8 = RmSvcGlobals;
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
        {
          v12[0] = RmGameModeCpuSetManagerCreateClientContext;
          v12[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
          v12[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
          v12[3] = RmGameModeCpuSetManagerReleaseAllocation;
          v12[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
          InitializeGameModeExtension(v12, v8);
        }
LABEL_11:
        if ( v6 >= 0 )
          goto LABEL_12;
        goto LABEL_23;
      }
      ResourceManagerServer = v7;
LABEL_21:
      v6 = ResourceManagerServer | 0x10000000;
      goto LABEL_11;
    }
  }
LABEL_23:
  v10 = RmSvcGlobals;
  if ( RmSvcGlobals )
  {
    RmpRundownAllModules(RmSvcGlobals);
    RmpCleanupAllModules(v10);
    RmSvcGlobals = 0LL;
  }
LABEL_12:
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( v1 )
    (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v1 + 16LL))(v1);
}
