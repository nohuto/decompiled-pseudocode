/*
 * XREFs of IopDropIrp @ 0x1400DD9D0
 * Callers:
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IopFreeCompletionListPackets @ 0x1405166EC (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x1400DDAB8 (IopDequeueIrpFromFileObject.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     IopInterlockedAdd @ 0x140127694 (IopInterlockedAdd.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR BugCheckParameter2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  signed __int64 v7; // rax
  bool v8; // cc
  ULONG_PTR BugCheckParameter4; // rax

  if ( (Irp->Flags & 0x20) != 0 )
    ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
  }
  UserEvent = Irp->UserEvent;
  if ( UserEvent && BugCheckParameter2 && (Irp->Flags & 4) == 0 )
    ObfDereferenceObject(UserEvent);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(Irp, BugCheckParameter2);
  if ( BugCheckParameter2 )
  {
    if ( (Irp->Flags & 0x80u) == 0 )
    {
      ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48);
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v8 = v7 <= 1;
      BugCheckParameter4 = v7 - 1;
      if ( v8 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(BugCheckParameter2 - 48);
      }
    }
  }
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(&Irp->Overlay, 0xFFFFFFFFLL) )
    IoFreeIrp(Irp);
}
