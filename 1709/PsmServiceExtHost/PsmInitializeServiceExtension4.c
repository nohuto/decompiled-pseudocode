/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x1800211B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180020AA4 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     SystemStateTrackerStart @ 0x180020D58 (SystemStateTrackerStart.c)
 *     TraceLoggingRegisterEx @ 0x180021110 (TraceLoggingRegisterEx.c)
 *     RmpLaunchAllRpcServers @ 0x180021334 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180021714 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     RmpCreateResourceManagerServer @ 0x180021774 (RmpCreateResourceManagerServer.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     IsQueryUserTokenPresent @ 0x1800266A8 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18002677C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18002695C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 */

int __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct ModernResourceEnforcer *v1; // rbx
  int result; // eax
  int v4; // edi
  struct _RM_SERVICE_GLOBALS *v5; // rcx
  int v6; // edi
  struct _RM_SERVICE_GLOBALS *v7; // rsi
  DWORD v8; // edi
  struct ModernResourceEnforcer *v9; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-31h] BYREF
  _BYTE v11[80]; // [rsp+58h] [rbp-9h] BYREF

  v1 = 0LL;
  v9 = 0LL;
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  RmSvcGlobals = 0LL;
  result = IsPsmQueryBackgroundActivationTypePresent();
  if ( !(_BYTE)result || (result = IsQueryUserTokenPresent(), !(_BYTE)result) )
  {
    v6 = -2147467263;
    goto LABEL_10;
  }
  result = CreateModernResourceEnforcer(a1, &v9);
  if ( result < 0 )
  {
    v1 = v9;
  }
  else
  {
    result = SystemStateTrackerStart();
    if ( result < 0 )
    {
      v1 = v9;
      v6 = result | 0x10000000;
      goto LABEL_10;
    }
    RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
    TraceLoggingRegisterEx(
      (TraceLoggingHProvider)&hProvider,
      (TLG_PENABLECALLBACK)RmpTracingControlCallback,
      &RmpSvcGlobals);
    v1 = v9;
    result = RmpCreateResourceManagerServer(v9);
    v4 = result;
    if ( result < 0 )
      goto LABEL_20;
    g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 237);
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
    result = InitializeResourceManagerServerProxy(v5, &g_pProxy);
    v6 = result;
    if ( result >= 0 )
    {
      result = RmpLaunchAllRpcServers();
      if ( result >= 0 )
      {
        v7 = RmSvcGlobals;
        result = IsNotifyGameModeExtensionRecipientsPresentPresent();
        if ( (_BYTE)result )
        {
          v10[0] = RmGameModeCpuSetManagerCreateClientContext;
          v10[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
          v10[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
          v10[3] = RmGameModeCpuSetManagerReleaseAllocation;
          v10[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
          result = InitializeGameModeExtension(v10, v7);
        }
LABEL_10:
        if ( v6 >= 0 )
          goto LABEL_11;
        goto LABEL_22;
      }
      v4 = result;
LABEL_20:
      v6 = v4 | 0x10000000;
      goto LABEL_10;
    }
  }
LABEL_22:
  if ( RmSvcGlobals )
  {
    result = RmpDestroyResourceManagerServer();
    RmSvcGlobals = 0LL;
  }
LABEL_11:
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    result = TlsSetValue(v8, 0LL);
  }
  if ( v1 )
    return (*(__int64 (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
