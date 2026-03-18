/*
 * XREFs of ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801CA2A4
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x180196ED0 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180191DB0 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1801C9AE8 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ @ 0x1801CAAA8 (-TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ.c)
 */

CInteraction *__fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  CInteraction *result; // rax
  struct CManipulation *ActiveManipulation; // rax
  __int64 v6; // r9

  result = InteractionSourceManager::GetActiveInteraction(a1);
  if ( !a2 && result )
  {
    result = CInteraction::GetTelemetryDataNoRef(result);
    if ( result )
    {
      ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
      return (CInteraction *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 16LL))(
                               v6,
                               ((unsigned __int64)ActiveManipulation + 64) & -(__int64)(ActiveManipulation != 0LL));
    }
  }
  return result;
}
