/*
 * XREFs of CmpGetVolumeClusterSize @ 0x1404E4280
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryVolumeInformationFile @ 0x14017E1E0 (ZwQueryVolumeInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCreateEvent @ 0x1404E0BA8 (CmpCreateEvent.c)
 */

NTSTATUS __fastcall CmpGetVolumeClusterSize(HANDLE FileHandle, int *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // eax
  PVOID v6; // r15
  NTSTATUS v7; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PVOID v9; // rsi
  struct _DEVICE_OBJECT *v10; // r14
  PIRP Irp; // rax
  IRP *v12; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v14; // rdx
  struct _IO_STACK_LOCATION *v15; // rax
  NTSTATUS Status; // ebx
  unsigned int v17; // ecx
  int v18; // ecx
  PVOID v19; // [rsp+30h] [rbp-49h] BYREF
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  int v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 v24; // [rsp+5Ch] [rbp-1Dh]
  __int64 v25; // [rsp+64h] [rbp-15h]
  __int64 v26; // [rsp+6Ch] [rbp-Dh]
  _BYTE FsInformation[20]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v28; // [rsp+8Ch] [rbp+13h]

  v19 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 6;
  result = ObReferenceObjectByHandle(FileHandle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  v5 = CmpCreateEvent(NotificationEvent, &Handle, &v19);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    v9 = v19;
    v10 = AttachedDeviceReference;
    if ( AttachedDeviceReference )
    {
      Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
      v12 = Irp;
      if ( !Irp )
      {
LABEL_29:
        v7 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
        if ( v7 < 0 )
          goto LABEL_18;
        v17 = v28;
LABEL_13:
        if ( v17 > 0x1000 )
          v17 = 4096;
        v7 = 0;
        if ( v17 < 0x200 )
        {
          v18 = 1;
          goto LABEL_17;
        }
        v18 = v17 >> 9;
        if ( ((v18 - 1) & v18) == 0 )
        {
LABEL_17:
          *a2 = v18;
          goto LABEL_18;
        }
        v7 = -1073741288;
LABEL_18:
        if ( v10 )
          ObfDereferenceObject(v10);
        goto LABEL_20;
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v14 = Irp;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].DeviceObject = v10;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2954240;
      CurrentStackLocation[-1].Parameters.Read.Length = 28;
      CurrentStackLocation[-1].Parameters.Create.Options = 12;
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v23;
      Irp->UserBuffer = &v23;
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      v12->Flags = 80;
      v12->IoStatus.Status = -1073741637;
      v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpGetVolumeClusterSizeCompletion;
      v15[-1].Context = v9;
      v15[-1].Control = -32;
      Status = IofCallDriver(v10, v14);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
        Status = v12->IoStatus.Status;
      }
      IoFreeIrp(v12);
    }
    else
    {
      Status = -1073741811;
    }
    v17 = 0;
    if ( Status >= 0 )
    {
      if ( (unsigned int)v24 < 0x18 || !(_DWORD)v26 || (v17 = v26, (((_DWORD)v26 - 1) & (unsigned int)v26) != 0) )
        Status = -1073741288;
      if ( Status >= 0 )
        goto LABEL_13;
    }
    goto LABEL_29;
  }
  v9 = 0LL;
LABEL_20:
  ObfDereferenceObject(v6);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    ZwClose(Handle);
  }
  return v7;
}
