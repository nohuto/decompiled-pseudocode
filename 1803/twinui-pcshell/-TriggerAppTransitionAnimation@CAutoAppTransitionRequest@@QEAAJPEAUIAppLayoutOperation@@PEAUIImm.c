/*
 * XREFs of ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802CEB4C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x1802C8FB0 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
        CAutoAppTransitionRequest *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 16) )
    return 2147500037LL;
  result = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutOperation *, struct IImmersiveMonitor *, _QWORD))(**((_QWORD **)this + 1) + 32LL))(
             *((_QWORD *)this + 1),
             a2,
             a3,
             0LL);
  *((_BYTE *)this + 16) = (int)result >= 0;
  return result;
}
