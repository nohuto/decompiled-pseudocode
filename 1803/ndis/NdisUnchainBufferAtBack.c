/*
 * XREFs of NdisUnchainBufferAtBack @ 0x1C0051A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisUnchainBufferAtBack(PNDIS_PACKET Packet, PNDIS_BUFFER *Buffer)
{
  _MDL *Head; // r9
  _MDL *Tail; // r8
  _MDL *i; // rdx

  Head = Packet->Private.Head;
  if ( Head )
  {
    Tail = Packet->Private.Tail;
    if ( Head == Tail )
    {
      Packet->Private.Head = 0LL;
    }
    else
    {
      for ( i = Head->Next; i != Tail; i = i->Next )
        Head = i;
      Packet->Private.Tail = Head;
      Head->Next = 0LL;
    }
    Tail->Next = 0LL;
    Packet->Private.ValidCounts = 0;
  }
  else
  {
    Tail = 0LL;
  }
  *Buffer = Tail;
}
