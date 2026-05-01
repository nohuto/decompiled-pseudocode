/*
 * XREFs of ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x180017514
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x1800200C0 (RmCoreRpcSrvRegisterActivityHostCallbacks.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001BCD4 (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationSubscribe(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // eax
  char *v8; // rbx
  const GUID *v9; // r8
  const GUID *v10; // r9
  DWORD v11; // ebx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[80]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+B0h] [rbp-50h] BYREF
  int *v20; // [rsp+D0h] [rbp-30h]
  int v21; // [rsp+D8h] [rbp-28h]
  int v22; // [rsp+DCh] [rbp-24h]
  PVOID *p_P; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+ECh] [rbp-14h]
  unsigned __int64 *v26; // [rsp+F0h] [rbp-10h]
  int v27; // [rsp+F8h] [rbp-8h]
  int v28; // [rsp+FCh] [rbp-4h]
  unsigned __int64 *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  int v31; // [rsp+10Ch] [rbp+Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF

  v17 = a2;
  RmpUtilCheckStartLockTracking(&v15, (struct _CEM_LOCK_TRACKER *)v18);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056865, v5, v6, 2u, &pData);
  P = 0LL;
  v16 = -1LL;
  RmpAcquireGlobalLock();
  v7 = RmpActivityHostFindByHostId(*a1, v17, (struct _RM_ACTIVITY_HOST **)&P);
  v8 = (char *)P;
  v13 = v7;
  if ( v7 >= 0 )
  {
    v13 = RmpActivatorSubscribeForNotifications((struct _RM_ACTIVATOR *)a1, (struct _RM_ACTIVITY_HOST *)P, &v16);
    if ( v13 >= 0 )
    {
      v13 = 0;
      *a3 = v16;
    }
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v20 = &v13;
    LODWORD(P) = *((_DWORD *)a1 + 14);
    p_P = &P;
    v26 = &v17;
    v29 = &v16;
    v21 = 4;
    v24 = 4;
    v27 = 8;
    v30 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800563CE, v9, v10, 6u, &v19);
  }
  if ( v8 )
    RmpObjectRelease(v8);
  if ( v15 )
  {
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v11, 0LL);
    }
  }
  return (unsigned int)v13;
}
