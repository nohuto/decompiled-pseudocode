/*
 * XREFs of CmpFileFlushAndPurge @ 0x14049968C
 * Callers:
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140493B34 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140498210 (HvWriteHivePrimaryFile.c)
 *     HvWriteLogFile @ 0x140499A0C (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1406FB6C0 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     CmpFileFlush @ 0x140498590 (CmpFileFlush.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpFileFlushAndPurge(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PIRP v4; // rdi
  void *v5; // rcx
  NTSTATUS v6; // eax
  struct _FILE_OBJECT *v7; // rsi
  unsigned int Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  PIRP Irp; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 && !(_DWORD)v2 )
  {
    return (unsigned int)CmpFileFlush(a1, 0);
  }
  else
  {
    v5 = *(void **)(a1 + 8 * v2 + 1536);
    if ( !v5 || CmpNoWrite )
    {
      return 0;
    }
    else
    {
      v6 = ObReferenceObjectByHandle(v5, 2u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
      v7 = (struct _FILE_OBJECT *)Object;
      Status = v6;
      if ( v6 >= 0 )
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
        v4 = Irp;
        if ( Irp )
        {
          Irp->Tail.Overlay.OriginalFileObject = v7;
          CurrentThread = KeGetCurrentThread();
          v4->Tail.Overlay.AuxiliaryBuffer = 0LL;
          *(_WORD *)&v4->RequestorMode = 0;
          v4->Overlay.AllocationSize.QuadPart = 0LL;
          v4->CancelRoutine = 0LL;
          v7 = (struct _FILE_OBJECT *)Object;
          v4->Tail.Overlay.Thread = CurrentThread;
          CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
          v4->Cancel = 0;
          *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 265;
          CurrentStackLocation[-1].FileObject = v7;
          CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
          v13 = v4->Tail.Overlay.CurrentStackLocation;
          v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
          v13[-1].Context = &Event;
          v13[-1].Control = -32;
          Status = IofCallDriver(RelatedDeviceObject, v4);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = v4->IoStatus.Status;
          }
        }
        else
        {
          Status = -1073741670;
        }
      }
      if ( v7 )
        ObfDereferenceObject(v7);
      if ( v4 )
        IoFreeIrp(v4);
    }
  }
  return Status;
}
