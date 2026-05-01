/*
 * XREFs of ?RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x18005CA94 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::TerminalResourceSetCallback::RevokeWorkerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::TerminalResourceSetCallback *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  ExecutionModel::TerminalResourceSetCallback::RevokeWorker(a2);
  (*(void (__fastcall **)(ExecutionModel::TerminalResourceSetCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
}
