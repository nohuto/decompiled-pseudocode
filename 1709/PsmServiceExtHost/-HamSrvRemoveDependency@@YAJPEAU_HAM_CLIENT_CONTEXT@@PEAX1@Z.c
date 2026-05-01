/*
 * XREFs of ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180042654
 * Callers:
 *     HamRpcSrvRemoveDependency @ 0x180046550 (HamRpcSrvRemoveDependency.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FE5C (-RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z @ 0x180044EB0 (-HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z.c)
 */

__int64 __fastcall HamSrvRemoveDependency(struct _HAM_CLIENT_CONTEXT *a1, void *a2, void *a3)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // edx
  struct _RM_SERVICE_GLOBALS *v9; // rcx
  int HostByPid; // eax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  int v12; // eax
  DWORD v14; // ebx
  DWORD ProcessId; // eax
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  DWORD v22; // [rsp+44h] [rbp-BCh] BYREF
  char v23[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  DWORD *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  struct _RM_HAM_ACTIVITY_HOST **v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AE40, v6, v7, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  v8 = *((_DWORD *)a1 + 31);
  v20 = 0LL;
  HostByPid = RmHamFindHostByPid(v9, v8, &v20);
  v11 = v20;
  v19 = HostByPid;
  if ( HostByPid >= 0 )
  {
    v12 = HampDepGroupRemoveDependency(*((struct _HAM_DEPENDENCY_GROUP **)v20 + 80), a2, a3);
    if ( v12 >= 0 )
      v12 = 0;
    v19 = v12;
  }
  if ( v11 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v11 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v11 - 64));
    RmpReleaseGlobalLock();
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v26 = 4LL;
    v25 = &v19;
    v21 = *((_DWORD *)a1 + 31);
    v27 = &v21;
    v28 = 4LL;
    ProcessId = GetProcessId(a2);
    v30 = 4LL;
    v22 = ProcessId;
    v29 = &v22;
    LODWORD(v20) = GetProcessId(a3);
    v31 = &v20;
    v32 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B1C1, v16, v17, 6u, &v24);
  }
  return v19;
}
