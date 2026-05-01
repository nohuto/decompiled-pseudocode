/*
 * XREFs of ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180045780
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044E68 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampHostDepProcessExitCallback(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WAIT *a3)
{
  struct _HAM_DEPENDENCY_GROUP *v4; // rbx
  DWORD v5; // ebx
  _BYTE v6[80]; // [rsp+20h] [rbp-68h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  v4 = *(struct _HAM_DEPENDENCY_GROUP **)(*(_QWORD *)a2 + 640LL);
  HampDepGroupAcquireLockExclusive(v4);
  a2[21] |= 1u;
  HampDepGroupQueueWorker(v4);
  HampDepGroupReleaseLockExclusive(v4);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
}
