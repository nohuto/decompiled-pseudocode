/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180042120
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x180046540 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FE5C (-RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampExtendedExecutionComputePolicy@@YAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180046FB0 (-HampExtendedExecutionComputePolicy@@YAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 *a4)
{
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  struct _RM_SERVICE_GLOBALS *v11; // rcx
  int HostByPid; // eax
  __int64 v13; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rbx
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  DWORD v25; // ebx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  char v35[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[384]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  unsigned int *v38; // [rsp+240h] [rbp+140h]
  int v39; // [rsp+248h] [rbp+148h]
  int v40; // [rsp+24Ch] [rbp+14Ch]
  __int64 *v41; // [rsp+250h] [rbp+150h]
  int v42; // [rsp+258h] [rbp+158h]
  int v43; // [rsp+25Ch] [rbp+15Ch]
  char *v44; // [rsp+260h] [rbp+160h]
  int v45; // [rsp+268h] [rbp+168h]
  int v46; // [rsp+26Ch] [rbp+16Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+270h] [rbp+170h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite(v8, &unk_18005B2B1, v9, v10, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v35);
  v33 = 0LL;
  v32 = 0LL;
  v34 = -1LL;
  if ( a2 )
  {
    HostByPid = RmHamFindHostByPid(v11, *(_DWORD *)(a1 + 124), &v32);
    v14 = v32;
    v31 = HostByPid;
    if ( HostByPid >= 0 )
    {
      HampExtendedExecutionComputePolicy(v13, a2, a3, v36);
      LOBYTE(cData) = 0;
      v18 = HampActCreate(a1, *(_QWORD *)a1, v14, v36, cData, &v33);
      v22 = v33;
      v31 = v18;
      if ( v18 >= 0 )
      {
        v23 = *(_QWORD *)(v33 + 40);
        v31 = 0;
        v34 = v23;
        *a4 = v23;
      }
      if ( v22 )
        CemRcObjectDereference(v22, v19, v20, v21);
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v40 = 0;
      v38 = &v31;
      v39 = 4;
      TlgWrite(v15, &unk_18005AD20, v16, v17, 3u, &pData);
    }
    if ( v14 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v14 + 72))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v14 - 64));
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    v31 = -1073741584;
  }
  v25 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v25, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v38 = &v31;
    v41 = &v34;
    v44 = &v30;
    v39 = 4;
    v42 = 8;
    v30 = a2;
    v45 = 1;
    TlgCreateWsz(&pDesc, a3);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AFDA, v26, v27, 6u, &pData);
  }
  return v31;
}
