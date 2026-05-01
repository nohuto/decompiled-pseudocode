/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034610
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x1800296D0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18002B600 (HamRpcSrvConnect.c)
 *     HamRpcSrvDisconnectServicing @ 0x1800345F0 (HamRpcSrvDisconnectServicing.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180035410 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectDebugging @ 0x180036AE0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180036BE0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectServicing @ 0x180036CE0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180036DD0 (HamRpcSrvConnectSessionState.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034704 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  DWORD v2; // ebx
  _BYTE v3[144]; // [rsp+30h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-38h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080FD9, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v3);
  HampClientDestroy(a1);
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v2, 0LL);
  }
  if ( _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081F6D, 0LL, 0LL, 2u, &pData);
  }
}
