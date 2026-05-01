/*
 * XREFs of ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051BB8
 * Callers:
 *     ?RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18004D9D0 (-RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     RmCoreRpcSrvSetHostLimits @ 0x180051F40 (RmCoreRpcSrvSetHostLimits.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x18000F9C4 (RmpResourceLimitsAreLegal.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025A60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
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
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // r9
  unsigned int v12; // [rsp+30h] [rbp-79h] BYREF
  PVOID P; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  __int64 v15; // [rsp+48h] [rbp-61h] BYREF
  __int64 v16; // [rsp+50h] [rbp-59h] BYREF
  __int128 v17; // [rsp+58h] [rbp-51h] BYREF
  __int128 v18; // [rsp+68h] [rbp-41h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  unsigned int *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  char *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  PVOID *p_P; // [rsp+D0h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+2Fh]

  v14 = a2;
  v16 = 264LL;
  P = 0LL;
  v15 = 8LL;
  if ( RmpResourceLimitsAreLegal((__int64)a3, &v16, &v15) )
  {
    RmpAcquireGlobalLock();
    v4 = RmpActivityHostFindByHostId(RmSvcGlobals, v14, (struct _RM_ACTIVITY_HOST **)&P);
    v5 = (char *)P;
    v12 = v4;
    if ( v4 >= 0 )
    {
      if ( (*((_BYTE *)P + 804) & 1) != 0 )
      {
        v12 = -1073741584;
      }
      else
      {
        v6 = *((_QWORD *)a3 + 4);
        if ( (*((_BYTE *)a3 + 44) & 0x10) != 0 )
          *((_QWORD *)P + 157) = v6;
        else
          *((_QWORD *)P + 158) = v6;
        v7 = *(_OWORD *)(v5 + 1080);
        v17 = *(_OWORD *)(v5 + 1064);
        v19 = *((_QWORD *)v5 + 137);
        v18 = v7;
        *(_QWORD *)&v18 = RmpActivityHostComputeCommitLimit((struct _RM_ACTIVITY_HOST *)v5);
        v8 = RmpActivityHostApplyEnforcementSettings(
               (struct _RM_ACTIVITY_HOST *)v5,
               (struct _RM_ENFORCEMENT_SETTINGS *)&v17,
               0);
        if ( v8 >= 0 )
          v8 = 0;
        v12 = v8;
      }
    }
    if ( v5 )
      RmpObjectRelease(v5);
    RmpReleaseGlobalLock();
  }
  else
  {
    v12 = -1073741583;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v22 = 8LL;
    v21 = &v14;
    v23 = &v12;
    v25 = (char *)a3 + 32;
    LODWORD(P) = *((_DWORD *)a3 + 11);
    p_P = &P;
    v24 = v10;
    v26 = 8LL;
    v28 = v10;
    TlgWrite(v9, &unk_18007D671, 0LL, 0LL, 6u, &pData);
  }
  return v12;
}
