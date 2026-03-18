/*
 * XREFs of ?GetFirstChild@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x1800CC800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetFirstChild(CInteraction *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 31);
}
