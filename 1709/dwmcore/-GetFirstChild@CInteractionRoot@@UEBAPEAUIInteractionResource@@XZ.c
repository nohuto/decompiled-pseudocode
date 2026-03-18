/*
 * XREFs of ?GetFirstChild@CInteractionRoot@@UEBAPEAUIInteractionResource@@XZ @ 0x180169390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteractionRoot::GetFirstChild(CInteractionRoot *this)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 147) + 16LL))(*((_QWORD *)this + 147));
}
