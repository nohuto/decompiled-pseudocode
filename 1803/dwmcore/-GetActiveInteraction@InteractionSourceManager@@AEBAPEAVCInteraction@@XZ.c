/*
 * XREFs of ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1801C9AE8
 * Callers:
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801CA2A4 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801CA304 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x1801CA964 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

struct CInteraction *__fastcall InteractionSourceManager::GetActiveInteraction(InteractionSourceManager *this)
{
  struct CChainingHelper *ActiveChainingHelper; // rcx
  struct CInteraction *result; // rax

  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper(this);
  result = 0LL;
  if ( ActiveChainingHelper )
    return (struct CInteraction *)*((_QWORD *)ActiveChainingHelper + 5);
  return result;
}
