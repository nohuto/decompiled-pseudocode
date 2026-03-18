/*
 * XREFs of ?GetParent@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x1800C16A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetParent(CInteraction *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 30);
}
