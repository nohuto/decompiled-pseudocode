/*
 * XREFs of ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180050EB4
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x18004D200 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007E80 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180011D50 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180054C2C (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilStopLockTracking@@YAXXZ @ 0x180064740 (-HampUtilStopLockTracking@@YAXXZ.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180065930 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmSrvHostTrySetCommitTargetForPple(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v6; // rsi
  int v7; // eax
  char *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  const WCHAR *v12; // rdx
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  char v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v20; // [rsp+100h] [rbp+0h]
  __int64 v21; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 *v23; // [rsp+120h] [rbp+20h]
  __int64 v24; // [rsp+128h] [rbp+28h]
  PVOID *p_P; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v27; // [rsp+140h] [rbp+40h]
  __int64 v28; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v4 = RmSvcGlobals;
  v17 = a2;
  v16 = a4;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v6 = 0LL;
  P = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D1BB, 0LL, 0LL, 2u, &pData);
  RmpAcquireGlobalLock();
  v7 = RmpActivityHostFindByHostId(v4, v17, (struct _RM_ACTIVITY_HOST **)&P);
  v8 = (char *)P;
  if ( v7 < 0 )
  {
    v9 = v7 | 0x10000000;
LABEL_12:
    v14 = v9;
    RmpReleaseGlobalLock();
    goto LABEL_13;
  }
  if ( (*((_BYTE *)P + 804) & 1) == 0 )
  {
    v9 = RmpActivityHostTrySetCommitTargetForPple((struct _RM_ACTIVITY_HOST *)P, v16);
    if ( v9 >= 0 )
      v9 = 0;
    goto LABEL_12;
  }
  v6 = RmHamHostReference((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64));
  RmpReleaseGlobalLock();
  v10 = HampHostTrySetPpleCommitTarget((struct _RM_HAM_ACTIVITY_HOST *)(v8 + 64), v16);
  v11 = 0;
  if ( v10 < 0 )
    v11 = v10;
  v14 = v11;
LABEL_13:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
  {
    v21 = 4LL;
    v20 = &v14;
    v12 = (const WCHAR *)(v8 + 88);
    if ( !v8 )
      v12 = 0LL;
    TlgCreateWsz(&pDesc, v12);
    v24 = 8LL;
    p_P = &P;
    v23 = &v17;
    v27 = &v16;
    LODWORD(P) = a3;
    v26 = 4LL;
    v28 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007C8FE, 0LL, 0LL, 7u, &v19);
  }
  if ( v8 )
    RmpObjectRelease(v8);
  if ( v6 )
    RmHamHostDereference(v6);
  HampUtilStopLockTracking();
  return v14;
}
