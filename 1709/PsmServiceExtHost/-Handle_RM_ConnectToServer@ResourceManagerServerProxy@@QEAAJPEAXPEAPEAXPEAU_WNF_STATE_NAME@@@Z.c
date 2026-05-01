/*
 * XREFs of ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x1800250A0
 * Callers:
 *     RmtSrv_RM_ConnectToServer @ 0x180025090 (RmtSrv_RM_ConnectToServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempRpcQueryClientInformation @ 0x18001DD00 (CempRpcQueryClientInformation.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180025208 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180035454 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_ConnectToServer(
        ResourceManagerServerProxy *this,
        void *a2,
        void **a3,
        struct _WNF_STATE_NAME *a4)
{
  int v7; // ebx
  struct _RM_SERVICE_GLOBALS *v8; // rcx
  int v9; // eax
  PVOID v10; // rcx
  DWORD v11; // edi
  PVOID P; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)&v16);
  P = 0LL;
  v7 = CempRpcQueryClientInformation(a2, DestinationSid, 0LL, &v14, 0LL);
  if ( v7 >= 0 )
  {
    RmpAcquireGlobalLock();
    v9 = RmpActivatorRegister(v8, (union _RM_SID *)DestinationSid, v14, (struct _RM_ACTIVATOR **)&P);
    v10 = P;
    v7 = v9;
    if ( v9 >= 0 )
    {
      *a4 = *(struct _WNF_STATE_NAME *)((char *)P + 24);
      *a3 = v10;
      v10 = 0LL;
      P = 0LL;
      v7 = 0;
    }
    if ( v10 )
    {
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)v10);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
    RmpReleaseGlobalLock();
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  return v7 | 0x10000000u;
}
