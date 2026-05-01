/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800348C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180035454 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

void __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(struct _RM_ACTIVATOR *P)
{
  DWORD v2; // ebx
  _BYTE v3[80]; // [rsp+20h] [rbp-68h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v3);
  RmpAcquireGlobalLock();
  RmpActivatorCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  RmpReleaseGlobalLock();
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v2, 0LL);
  }
}
