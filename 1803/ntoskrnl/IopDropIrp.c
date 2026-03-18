/*
 * XREFs of IopDropIrp @ 0x14013FD64
 * Callers:
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopFreeCompletionListPackets @ 0x1405BD024 (IopFreeCompletionListPackets.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     IopInterlockedAdd @ 0x1400C6EDC (IopInterlockedAdd.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x14013FE58 (IopDequeueIrpFromFileObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR BugCheckParameter2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int64 v11; // rax
  bool v12; // cc
  signed __int64 BugCheckParameter4; // rax

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
      v7 = BugCheckParameter2 - 48;
      ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48);
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v12 = v11 <= 1;
      BugCheckParameter4 = v11 - 1;
      if ( v12 )
      {
        if ( *(_QWORD *)(v7 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)],
            BugCheckParameter2,
            6uLL,
            *(_QWORD *)(v7 + 8));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(BugCheckParameter2 - 48, v8, v9, v10);
      }
    }
  }
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)&Irp->Overlay, -1) )
    IoFreeIrp(Irp);
}
