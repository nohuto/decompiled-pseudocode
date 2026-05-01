/*
 * XREFs of ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180003BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180003C4C (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpQoSWatchdogCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_QOS_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  DWORD v4; // ebx
  unsigned __int64 v5; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v6[80]; // [rsp+30h] [rbp-68h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  RmpAcquireGlobalLock();
  RtlQueryUnbiasedInterruptTime(&v5);
  RmpQoSCheckHostsSetTimer(a2, v5);
  RmpReleaseGlobalLock();
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
}
