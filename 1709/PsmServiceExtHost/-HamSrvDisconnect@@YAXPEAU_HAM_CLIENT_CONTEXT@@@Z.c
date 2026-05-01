/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F3E8
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x18001DAC0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18001DF50 (HamRpcSrvConnect.c)
 *     HamRpcSrvDisconnectStateChangeNotifications @ 0x18001F3C0 (HamRpcSrvDisconnectStateChangeNotifications.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18001F3E0 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800256D0 (HamRpcSrvConnectStateChangeNotifications.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  DWORD v4; // ebx
  const GUID *v5; // r8
  const GUID *v6; // r9
  _BYTE v7[80]; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-38h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005ACFE, v2, v3, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  HampClientDestroy(a1);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B11C, v5, v6, 2u, &pData);
  }
}
