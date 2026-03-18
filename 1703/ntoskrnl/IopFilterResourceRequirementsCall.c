/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x14055BFFC
 * Callers:
 *     IopQueryDeviceResources @ 0x14055BA24 (IopQueryDeviceResources.c)
 * Callees:
 *     IovUtilWatermarkIrp @ 0x140081414 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x140091AB0 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v11; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a2 )
    {
      v10 = 0;
      Irp->IoStatus.Status = 0;
      v11 = a2;
      Irp->IoStatus.Information = a2;
    }
    else
    {
      v10 = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v10;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v8 = IofCallDriver(AttachedDeviceReference, Irp);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8 = v10;
    }
    *a3 = v11;
  }
  else
  {
    v8 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v8;
}
