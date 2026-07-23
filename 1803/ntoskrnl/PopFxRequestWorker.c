/*
 * XREFs of PopFxRequestWorker @ 0x140079D50
 * Callers:
 *     PopPepRequestWork @ 0x14007915C (PopPepRequestWork.c)
 * Callees:
 *     PopFxQueueWorkOrder @ 0x140079DC0 (PopFxQueueWorkOrder.c)
 */

__int64 __fastcall PopFxRequestWorker(__int64 a1)
{
  _LIST_ENTRY *v1; // rdx
  unsigned int v2; // r8d
  struct _KQUEUE *v3; // r10
  unsigned int v4; // ebx
  _LIST_ENTRY *v5; // r9
  int Flink; // r11d
  _LIST_ENTRY *v8; // rax

  if ( a1 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
      v2 = *(_DWORD *)(a1 + 120);
    else
      v2 = 1;
    v1 = (_LIST_ENTRY *)(a1 + 128);
    v3 = (struct _KQUEUE *)(a1 + 32);
  }
  else
  {
    v1 = &PopFxSystemWorkOrders;
    v2 = 4;
    v3 = &PopFxSystemWorkQueue;
  }
  v4 = 0;
  v5 = v1;
  if ( v2 )
  {
    while ( 1 )
    {
      Flink = (int)v5[2].Flink;
      if ( !Flink )
        break;
      v8 = v5;
      if ( Flink >= SLODWORD(v1[2].Flink) )
        v8 = v1;
      v5 = (_LIST_ENTRY *)((char *)v5 + 56);
      ++v4;
      v1 = v8;
      if ( v4 >= v2 )
        return PopFxQueueWorkOrder(v3, v1, 0LL);
    }
    v1 = v5;
  }
  return PopFxQueueWorkOrder(v3, v1, 0LL);
}
