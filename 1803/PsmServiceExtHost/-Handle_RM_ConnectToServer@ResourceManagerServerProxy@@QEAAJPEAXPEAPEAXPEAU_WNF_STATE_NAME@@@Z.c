/*
 * XREFs of ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18003D7A0
 * Callers:
 *     RmtSrv_RM_ConnectToServer @ 0x18003D790 (RmtSrv_RM_ConnectToServer.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempRpcQueryClientInformation @ 0x18002B3B0 (CempRpcQueryClientInformation.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18003D910 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180053A94 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
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
  PVOID P; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-110h] BYREF
  _BYTE v15[80]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v16[144]; // [rsp+90h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  P = 0LL;
  v7 = CempRpcQueryClientInformation(a2, (__int64)v15, 0LL, &v14, 0LL, 0LL);
  if ( v7 >= 0 )
  {
    RmpAcquireGlobalLock();
    v9 = RmpActivatorRegister(v8, (union _RM_SID *)v15, v14, (struct _RM_ACTIVATOR **)&P);
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
