/*
 * XREFs of ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A620
 * Callers:
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C009A2B8 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01323E8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     <none>
 */

void __fastcall InputExtensibilityCallout::CallUserModeLockFree(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  __int64 v2; // rdi
  bool v5; // bl

  v2 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v2 + 40);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    KeBugCheck(0x164u);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, (__int64)a2);
}
