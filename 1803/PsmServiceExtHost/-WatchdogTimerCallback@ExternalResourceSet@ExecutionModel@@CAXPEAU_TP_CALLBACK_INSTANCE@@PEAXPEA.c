/*
 * XREFs of ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18005C800
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18005C618 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::WatchdogTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::ExternalResourceSet *a2,
        struct _TP_TIMER *a3)
{
  __int64 v4; // rax
  DWORD v5; // ebx
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  RmpAcquireGlobalLock();
  ExecutionModel::ExternalResourceSet::RunWatchdog(a2);
  v4 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 368) &= ~8u;
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v4 + 16))(a2);
  RmpReleaseGlobalLock();
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
}
