/*
 * XREFs of RmCoreRpcSrvQueryHostMemoryLimitValues @ 0x180051EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x1800519FC (-RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST.c)
 */

__int64 __fastcall RmCoreRpcSrvQueryHostMemoryLimitValues(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        enum _RM_ACTIVITY_HOST_CALLBACK_TYPE *a4)
{
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  unsigned int HostMemoryLimitValues; // eax
  DWORD v9; // ebx
  unsigned int v10; // edi
  _BYTE v12[144]; // [rsp+20h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  HostMemoryLimitValues = RmpCoreApiQueryHostMemoryLimitValues(v7, a2, a3, a4);
  v9 = HampLockTrackerId;
  v10 = HostMemoryLimitValues;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  return v10;
}
