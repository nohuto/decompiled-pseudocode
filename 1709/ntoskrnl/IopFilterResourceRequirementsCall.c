/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x1405580F0
 * Callers:
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400DE644 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v9; // ebx
  int v11; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v12; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a2 )
    {
      v11 = 0;
      v7->IoStatus.Status = 0;
      v12 = a2;
      v7->IoStatus.Information = a2;
    }
    else
    {
      v11 = -1073741637;
      v7->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7->UserIosb = (PIO_STATUS_BLOCK)&v11;
    v7->UserEvent = &Event;
    v7->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v7);
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v9 = IofCallDriver(AttachedDeviceReference, v7);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v11;
    }
    *a3 = v12;
  }
  else
  {
    v9 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v9;
}
