/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180003174
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x180003F20 (RmgrSrv_RmAccessCheck.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x18002FDE0 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x18003CFC0 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  DWORD v7; // ebx
  _BYTE v9[80]; // [rsp+20h] [rbp-78h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  RmpAcquireGlobalLock();
  v6 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(a1, a2, a3, 1);
  RmpReleaseGlobalLock();
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  return v6;
}
