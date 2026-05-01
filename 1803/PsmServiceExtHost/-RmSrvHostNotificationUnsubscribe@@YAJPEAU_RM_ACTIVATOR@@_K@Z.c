/*
 * XREFs of ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180031D48
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHostCallbacks @ 0x180031D40 (RmCoreRpcSrvUnregisterActivityHostCallbacks.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180031EBC (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationUnsubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2)
{
  int v3; // eax
  DWORD v4; // ebx
  unsigned int v6; // [rsp+38h] [rbp-D0h] BYREF
  int v7; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v8; // [rsp+40h] [rbp-C8h] BYREF
  char v9[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v10; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v11; // [rsp+F8h] [rbp-10h]
  __int64 v12; // [rsp+100h] [rbp-8h]
  int *v13; // [rsp+108h] [rbp+0h]
  __int64 v14; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v15; // [rsp+118h] [rbp+10h]
  __int64 v16; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v18; // [rsp+170h] [rbp+68h] BYREF

  v18 = a2;
  RmpUtilCheckStartLockTracking(&v8, (struct _CEM_LOCK_TRACKER *)v9);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CE9E, 0LL, 0LL, 2u, &pData);
  RmpAcquireGlobalLock();
  v3 = RmpActivatorUnsubscribeFromNotifications(a1, v18);
  if ( v3 >= 0 )
    v3 = 0;
  v6 = v3;
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v12 = 4LL;
    v11 = &v6;
    v7 = *((_DWORD *)a1 + 14);
    v13 = &v7;
    v15 = &v18;
    v14 = 4LL;
    v16 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D162, 0LL, 0LL, 5u, &v10);
  }
  if ( v8 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v4, 0LL);
    }
  }
  return v6;
}
