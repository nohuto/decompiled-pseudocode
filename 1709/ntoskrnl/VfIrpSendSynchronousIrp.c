/*
 * XREFs of VfIrpSendSynchronousIrp @ 0x1407B09A0
 * Callers:
 *     VfPnpTestStartedPdoStack @ 0x1407C0030 (VfPnpTestStartedPdoStack.c)
 *     VfPowerTestStartedPdoStack @ 0x1407C0960 (VfPowerTestStartedPdoStack.c)
 *     VfWmiTestStartedPdoStack @ 0x1407C0BA0 (VfWmiTestStartedPdoStack.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400DE644 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrpEx @ 0x1401108F0 (IoAllocateIrpEx.c)
 */

__int64 __fastcall VfIrpSendSynchronousIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        NTSTATUS a4,
        ULONG_PTR a5,
        ULONG_PTR *a6,
        NTSTATUS *a7)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 v11; // rdx
  IRP *Irp; // rax
  IRP *v13; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  struct _IO_STACK_LOCATION *v19; // rax
  NTSTATUS Status; // r14d
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  LOBYTE(v11) = AttachedDeviceReference->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)AttachedDeviceReference, v11, 0LL);
  v13 = Irp;
  if ( Irp )
  {
    if ( a3 )
      IovUtilWatermarkIrp((__int64)Irp, 2LL);
    v13->IoStatus.Status = a4;
    v13->IoStatus.Information = a5;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    v16 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v17 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v16;
    v18 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v17;
    *(_QWORD *)&v17 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v18;
    CurrentStackLocation[-1].Context = (PVOID)v17;
    v19 = v13->Tail.Overlay.CurrentStackLocation;
    v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&ViIrpSynchronousCompletionRoutine;
    v19[-1].Context = &Event;
    v19[-1].Control = -32;
    Status = IofCallDriver(AttachedDeviceReference, v13);
    ObfDereferenceObject(AttachedDeviceReference);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v13->IoStatus.Status;
    }
    if ( a7 )
      *a7 = Status;
    if ( a6 )
      *a6 = v13->IoStatus.Information;
    IoFreeIrp(v13);
    return 1LL;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 0LL;
  }
}
