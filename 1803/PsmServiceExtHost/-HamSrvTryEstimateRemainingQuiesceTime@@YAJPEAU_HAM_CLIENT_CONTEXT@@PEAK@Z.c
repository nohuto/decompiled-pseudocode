/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180033B48
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x180033B40 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033D08 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  void *v4; // rdx
  struct _HOST_ACTIVITY_MANAGER *v5; // rcx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  int v9; // edx
  DWORD v10; // ebx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  char v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]
  int *v21; // [rsp+110h] [rbp+10h]
  int v22; // [rsp+118h] [rbp+18h]
  int v23; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v24; // [rsp+120h] [rbp+20h]
  int v25; // [rsp+128h] [rbp+28h]
  int v26; // [rsp+12Ch] [rbp+2Ch]
  struct _RM_HAM_ACTIVITY_HOST **v27; // [rsp+130h] [rbp+30h]
  int v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800823D3, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v4 = (void *)*((_QWORD *)a1 + 19);
  v5 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v13 = 0LL;
  v15 = -1LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v4, &v13);
  v7 = v13;
  v12 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v15 = *((_QWORD *)v13 - 4);
    v12 = 0;
    *a2 = HampHostTryEstimateRemainingQuiesceTime(v13);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v12;
    v14 = *((_DWORD *)a1 + 34);
    v21 = &v14;
    v24 = &v15;
    LODWORD(v13) = *a2;
    v27 = &v13;
    v19 = 4;
    v22 = 4;
    v25 = v9;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800822AB, 0LL, 0LL, 6u, &v17);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return v12;
}
