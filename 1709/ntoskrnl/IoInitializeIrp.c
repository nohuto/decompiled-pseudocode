/*
 * XREFs of IoInitializeIrp @ 0x140113A70
 * Callers:
 *     IoInitializeIrpEx @ 0x14014BD70 (IoInitializeIrpEx.c)
 *     IopAllocateBackpocketIrp @ 0x1401F4878 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F4B5C (IopAllocateReserveIrp.c)
 *     SmStorePhysicalRequestIssue @ 0x14073921C (SmStorePhysicalRequestIssue.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ViIrpAllocateLockedPacket @ 0x1407B0BD4 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     IovInitializeIrp @ 0x1407A5084 (IovInitializeIrp.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(Irp, PacketSize, StackSize, retaddr);
  memset(Irp, 0, PacketSize);
  Irp->Size = PacketSize;
  Irp->Type = 6;
  Irp->CurrentLocation = StackSize + 1;
  Irp->StackCount = StackSize;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackSize);
}
