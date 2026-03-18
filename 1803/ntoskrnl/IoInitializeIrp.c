/*
 * XREFs of IoInitializeIrp @ 0x1400B7210
 * Callers:
 *     IoInitializeIrpEx @ 0x14015B010 (IoInitializeIrpEx.c)
 *     IopAllocateBackpocketIrp @ 0x140231DA8 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14023208C (IopAllocateReserveIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1406464B0 (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x14079C468 (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x14081DD80 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     IovInitializeIrp @ 0x140812050 (IovInitializeIrp.c)
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
