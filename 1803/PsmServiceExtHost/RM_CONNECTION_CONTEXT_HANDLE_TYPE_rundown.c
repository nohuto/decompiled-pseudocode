/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180051D70
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180053A94 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

void __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(struct _RM_ACTIVATOR *P)
{
  DWORD v2; // ebx
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

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
