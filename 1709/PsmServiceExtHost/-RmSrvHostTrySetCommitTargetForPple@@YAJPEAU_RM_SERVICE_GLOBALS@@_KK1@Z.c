/*
 * XREFs of ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180033FF0
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180030210 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180036654 (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmSrvHostTrySetCommitTargetForPple(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // eax
  UCHAR v11; // dl
  struct _RM_ACTIVITY_HOST *v12; // rbx
  int v13; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  DWORD v16; // ebx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  char v22[80]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pwsz[272]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v25; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR v26; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int *v27; // [rsp+2F0h] [rbp+1F0h]
  __int64 v28; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int64 *v30; // [rsp+310h] [rbp+210h]
  __int64 v31; // [rsp+318h] [rbp+218h]
  PVOID *p_P; // [rsp+320h] [rbp+220h]
  __int64 v33; // [rsp+328h] [rbp+228h]
  unsigned __int64 *v34; // [rsp+330h] [rbp+230h]
  __int64 v35; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+340h] [rbp+240h] BYREF

  v4 = RmSvcGlobals;
  v21 = a4;
  RmpUtilCheckStartLockTracking(&v20, (struct _CEM_LOCK_TRACKER *)v22);
  P = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v7, &unk_180056CA2, v8, v9, 2u, &pData);
  RmpAcquireGlobalLock();
  v10 = RmpActivityHostFindByHostId(v4, a2, (struct _RM_ACTIVITY_HOST **)&P);
  v12 = (struct _RM_ACTIVITY_HOST *)P;
  if ( v10 >= 0 )
  {
    v13 = RmpActivityHostTrySetCommitTargetForPple((struct _RM_ACTIVITY_HOST *)P, v21);
    if ( v13 >= 0 )
      v13 = 0;
  }
  else
  {
    v13 = v10 | 0x10000000;
  }
  v18 = v13;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v11, 0LL) )
  {
    if ( v12 )
    {
      RmpActivityHostGetTracingId(v12, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
    }
    else
    {
      memset_0(pwsz, 0, 0x230uLL);
      v24 = a2;
    }
    v25 = a3;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
  {
    v28 = 4LL;
    v27 = &v18;
    TlgCreateWsz(&pDesc, pwsz);
    LODWORD(P) = v25;
    p_P = &P;
    v34 = &v21;
    v30 = &v24;
    v31 = 8LL;
    v33 = 4LL;
    v35 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056F66, v14, v15, 7u, &v26);
  }
  if ( v12 )
    RmpObjectRelease((char *)v12);
  if ( v20 )
  {
    v16 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v16, 0LL);
    }
  }
  return v18;
}
