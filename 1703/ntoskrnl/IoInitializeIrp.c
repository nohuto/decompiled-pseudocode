/*
 * XREFs of IoInitializeIrp @ 0x14001FF80
 * Callers:
 *     IopAllocateBackpocketIrp @ 0x1401EF168 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401EF44C (IopAllocateReserveIrp.c)
 *     IoInitializeIrpEx @ 0x1401F3B20 (IoInitializeIrpEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14043C110 (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x140701150 (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x14076EDB4 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     IovInitializeIrp @ 0x1407633B0 (IovInitializeIrp.c)
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
