/*
 * XREFs of ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800058A4
 * Callers:
 *     ?RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180005820 (-RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     RmCoreRpcSrvSetHostLimits @ 0x180034A70 (RmCoreRpcSrvSetHostLimits.c)
 * Callees:
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007F60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpResourceLimitsAreLegal @ 0x18001B01C (RmpResourceLimitsAreLegal.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCoreApiSetHostLimits(
        struct _RM_ACTIVATOR *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v4; // eax
  char *v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int128 v20; // [rsp+70h] [rbp-19h]
  __int128 v21; // [rsp+80h] [rbp-9h]
  unsigned int *v22; // [rsp+90h] [rbp+7h]
  const GUID *v23; // [rsp+98h] [rbp+Fh]
  char *v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A8h] [rbp+1Fh]
  PVOID *p_P; // [rsp+B0h] [rbp+27h]
  const GUID *v27; // [rsp+B8h] [rbp+2Fh]

  v16 = a2;
  v18 = 264LL;
  P = 0LL;
  v17 = 8LL;
  if ( (unsigned int)RmpResourceLimitsAreLegal(a3, &v18, &v17) )
  {
    RmpAcquireGlobalLock();
    v4 = RmpActivityHostFindByHostId(RmSvcGlobals, v16, (struct _RM_ACTIVITY_HOST **)&P);
    v5 = (char *)P;
    v14 = v4;
    if ( v4 >= 0 )
    {
      v6 = *((_QWORD *)a3 + 4);
      if ( (*((_BYTE *)a3 + 56) & 0x10) != 0 )
        *((_QWORD *)P + 139) = v6;
      else
        *((_QWORD *)P + 140) = v6;
      v7 = *(_OWORD *)(v5 + 888);
      pData = *(EVENT_DATA_DESCRIPTOR *)(v5 + 872);
      v8 = *(_OWORD *)(v5 + 904);
      v20 = v7;
      *(_QWORD *)&v7 = *((_QWORD *)v5 + 115);
      v21 = v8;
      v22 = (unsigned int *)v7;
      *(_QWORD *)&v20 = RmpActivityHostComputeCommitLimit((struct _RM_ACTIVITY_HOST *)v5);
      v9 = RmpActivityHostApplyEnforcementSettings(
             (struct _RM_ACTIVITY_HOST *)v5,
             (struct _RM_ENFORCEMENT_SETTINGS *)&pData,
             0);
      if ( v9 >= 0 )
        v9 = 0;
      v14 = v9;
    }
    if ( v5 )
      RmpObjectRelease(v5);
    RmpReleaseGlobalLock();
  }
  else
  {
    v14 = -1073741583;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    *((_QWORD *)&v21 + 1) = 8LL;
    *(_QWORD *)&v21 = &v16;
    v22 = &v14;
    v24 = (char *)a3 + 32;
    LODWORD(P) = *((_DWORD *)a3 + 14);
    p_P = &P;
    v23 = v12;
    v25 = 8LL;
    v27 = v12;
    TlgWrite(v10, &unk_1800571EE, v11, v12, 6u, &pData);
  }
  return v14;
}
