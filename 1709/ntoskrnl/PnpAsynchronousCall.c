/*
 * XREFs of PnpAsynchronousCall @ 0x1405532A4
 * Callers:
 *     PnpSendIrp @ 0x1400FBD5C (PnpSendIrp.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilWatermarkIrp @ 0x1400DE644 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 */

__int64 __fastcall PnpAsynchronousCall(struct _DEVICE_OBJECT *a1, __int128 *a2, IO_COMPLETION_ROUTINE *a3, void *a4)
{
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rsi
  PIRP Irp; // rax
  IRP *v10; // rbx
  _QWORD *DeviceNode; // rax
  __int128 v12; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int128 v14; // xmm1
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct _IO_STACK_LOCATION *v18; // rax
  unsigned int v19; // ebx

  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
  v10 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a1 )
      DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( DeviceNode )
      DeviceNode[9] = v10;
    v10->IoStatus.Information = 0LL;
    v12 = *a2;
    v10->IoStatus.Status = -1073741637;
    CurrentThread = KeGetCurrentThread();
    v10->UserIosb = 0LL;
    v10->UserEvent = 0LL;
    v14 = a2[1];
    v10->Tail.Overlay.Thread = CurrentThread;
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    v10->RequestorMode = 0;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = v12;
    v16 = a2[2];
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v17 = a2[3];
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v16;
    *(_QWORD *)&v16 = *((_QWORD *)a2 + 8);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v17;
    CurrentStackLocation[-1].Context = (PVOID)v16;
    v18 = v10->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = a3;
    v18[-1].Context = a4;
    v18[-1].Control = -32;
    v19 = IofCallDriver(AttachedDeviceReferenceWithTag, v10);
  }
  else
  {
    v19 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
  return v19;
}
