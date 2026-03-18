/*
 * XREFs of ?GetInteractionDropTarget@CManipulationContext@@UEBAPEAUIInteractionResource@@XZ @ 0x1800C1E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionDropTarget(CManipulationContext *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 18);
}
