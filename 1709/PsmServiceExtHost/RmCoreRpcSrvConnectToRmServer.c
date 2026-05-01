/*
 * XREFs of RmCoreRpcSrvConnectToRmServer @ 0x180024FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempRpcQueryClientInformation @ 0x18001DD00 (CempRpcQueryClientInformation.c)
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x180025188 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmCoreRpcSrvConnectToRmServer(
        RPC_BINDING_HANDLE ClientBinding,
        struct _RM_ACTIVATOR **a2,
        struct _WNF_STATE_NAME *a3)
{
  int v6; // edi
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D8h] BYREF
  struct _RM_ACTIVATOR *v10; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+90h] [rbp-78h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)&v12);
  v6 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, 0LL, &v9, 0LL);
  if ( v6 >= 0 )
  {
    v6 = RmpCoreApiConnectToRmServer((union _RM_SID *)DestinationSid, v9, &v10, a3);
    if ( v6 >= 0 )
      *a2 = v10;
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  return (unsigned int)v6;
}
