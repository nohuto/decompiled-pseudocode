/*
 * XREFs of _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x1800B291C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>(a2 + 96);
}
