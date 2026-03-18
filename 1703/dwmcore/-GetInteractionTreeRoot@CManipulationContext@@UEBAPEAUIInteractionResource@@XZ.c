/*
 * XREFs of ?GetInteractionTreeRoot@CManipulationContext@@UEBAPEAUIInteractionResource@@XZ @ 0x1800CCE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionTreeRoot(CManipulationContext *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 7);
}
