/*
 * XREFs of ??_E?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@UEAAPEAXI@Z @ 0x1C0035DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x1C0036048 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
