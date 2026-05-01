/*
 * XREFs of ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18001B29C
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHostCallbacks @ 0x18001BE80 (RmCoreRpcSrvUnregisterActivityHostCallbacks.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18001BC40 (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationUnsubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  DWORD v8; // ebx
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C8h] BYREF
  char v13[80]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v15; // [rsp+B8h] [rbp-50h]
  __int64 v16; // [rsp+C0h] [rbp-48h]
  int *v17; // [rsp+C8h] [rbp-40h]
  __int64 v18; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v19; // [rsp+D8h] [rbp-30h]
  __int64 v20; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+130h] [rbp+28h] BYREF

  v22 = a2;
  RmpUtilCheckStartLockTracking(&v12, (struct _CEM_LOCK_TRACKER *)v13);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005682F, v3, v4, 2u, &pData);
  RmpAcquireGlobalLock();
  v5 = RmpActivatorUnsubscribeFromNotifications(a1, v22);
  if ( v5 >= 0 )
    v5 = 0;
  v10 = v5;
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v16 = 4LL;
    v15 = &v10;
    v11 = *((_DWORD *)a1 + 14);
    v17 = &v11;
    v19 = &v22;
    v18 = 4LL;
    v20 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056C21, v6, v7, 5u, &v14);
  }
  if ( v12 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v8, 0LL);
    }
  }
  return v10;
}
