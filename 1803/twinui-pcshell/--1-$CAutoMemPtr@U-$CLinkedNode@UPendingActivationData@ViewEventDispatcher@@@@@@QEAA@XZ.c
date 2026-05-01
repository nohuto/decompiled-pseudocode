/*
 * XREFs of ??1?$CAutoMemPtr@U?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ @ 0x1800FAE64
 * Callers:
 *     _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x1800B291C (_ViewEventDispatcher--_FlushRemovedPendingActivations_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$0 @ 0x1800B294C (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$0.c)
 * Callees:
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1800FACCC (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

__int64 *__fastcall CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>(
        __int64 **a1)
{
  __int64 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(result);
  return result;
}
