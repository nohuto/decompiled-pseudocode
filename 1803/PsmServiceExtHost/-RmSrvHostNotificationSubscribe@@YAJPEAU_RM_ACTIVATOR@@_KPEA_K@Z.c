/*
 * XREFs of ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x1800256B0
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x180027CF0 (RmCoreRpcSrvRegisterActivityHostCallbacks.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180027B30 (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationSubscribe(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  int v5; // eax
  char *v6; // rbx
  DWORD v7; // ebx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+F0h] [rbp-10h] BYREF
  int *v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+118h] [rbp+18h]
  int v18; // [rsp+11Ch] [rbp+1Ch]
  PVOID *p_P; // [rsp+120h] [rbp+20h]
  int v20; // [rsp+128h] [rbp+28h]
  int v21; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v22; // [rsp+130h] [rbp+30h]
  int v23; // [rsp+138h] [rbp+38h]
  int v24; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 *v25; // [rsp+140h] [rbp+40h]
  int v26; // [rsp+148h] [rbp+48h]
  int v27; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v13 = a2;
  RmpUtilCheckStartLockTracking(&v11, (struct _CEM_LOCK_TRACKER *)v14);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CED4, 0LL, 0LL, 2u, &pData);
  P = 0LL;
  v12 = -1LL;
  RmpAcquireGlobalLock();
  v5 = RmpActivityHostFindByHostId(*a1, v13, (struct _RM_ACTIVITY_HOST **)&P);
  v6 = (char *)P;
  v9 = v5;
  if ( v5 >= 0 )
  {
    v9 = RmpActivatorSubscribeForNotifications((struct _RM_ACTIVATOR *)a1, (struct _RM_ACTIVITY_HOST *)P, &v12);
    if ( v9 >= 0 )
    {
      v9 = 0;
      *a3 = v12;
    }
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v9;
    LODWORD(P) = *((_DWORD *)a1 + 14);
    p_P = &P;
    v22 = &v13;
    v25 = &v12;
    v17 = 4;
    v20 = 4;
    v23 = 8;
    v26 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007C9B7, 0LL, 0LL, 6u, &v15);
  }
  if ( v6 )
    RmpObjectRelease(v6);
  if ( v11 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  return (unsigned int)v9;
}
