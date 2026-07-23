/*
 * XREFs of IopFreeCompletionListPackets @ 0x1405166EC
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400DB35C (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1404A39C0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_SLIST_ENTRY *P)
{
  _SLIST_ENTRY *v1; // rbx
  _SLIST_ENTRY *v2; // rcx
  IRP *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = v1->Next;
      if ( LOBYTE(v2[1].Next) )
      {
        IopFreeMiniCompletionPacket(v2);
      }
      else
      {
        v3 = (IRP *)(&v2[-11].Next + 1);
        if ( (v3->Flags & 0x2000) != 0 )
          IopDropIrp(v3, (ULONG_PTR)v3->Tail.Overlay.OriginalFileObject);
        else
          IoFreeIrp(v3);
      }
    }
    while ( v1 );
  }
}
