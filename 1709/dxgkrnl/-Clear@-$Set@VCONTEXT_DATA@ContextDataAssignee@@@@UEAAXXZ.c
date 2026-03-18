/*
 * XREFs of ?Clear@?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ @ 0x1C00368D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@QEAAXXZ @ 0x1C0036848 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U-$DoubleLinkedListElementDeleter@V.c)
 */

void __fastcall Set<ContextDataAssignee::CONTEXT_DATA>::Clear(__int64 a1)
{
  DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::Clear(a1 + 8);
}
