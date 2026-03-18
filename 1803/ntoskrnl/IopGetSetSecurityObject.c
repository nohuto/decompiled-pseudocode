/*
 * XREFs of IopGetSetSecurityObject @ 0x1404D2090
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopAcquireFastLock_1 @ 0x140061B6C (IopAcquireFastLock_1.c)
 *     IopGetDevicePDO @ 0x140065174 (IopGetDevicePDO.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404A5E30 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140602FC4 (IopSetDeviceSecurityDescriptors.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140603064 (IopSetDeviceSecurityDescriptor.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14078CE34 (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        char *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  _QWORD *p_Type; // r14
  struct _FILE_OBJECT *v13; // rbx
  struct _KTHREAD *v14; // r14
  char PreviousMode; // di
  char v16; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  IRP *v19; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v22; // rax
  PULONG v23; // r14
  struct _KTHREAD *v24; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // edi
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v29; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v31; // r8
  DWORD *v32; // rcx
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v34; // rdi
  NTSTATUS FinalStatus; // [rsp+30h] [rbp-68h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h] BYREF
  __int64 v39; // [rsp+50h] [rbp-48h]
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  char v42; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v43; // [rsp+B0h] [rbp+18h]

  v43 = a3;
  if ( Object->Type == 3 )
    p_Type = &Object->Type;
  else
    p_Type = &Object->DeviceObject->Type;
  v13 = 0LL;
  if ( Object->Type != 3 )
    v13 = Object;
  if ( !v13 || !v13->FileName.Length && !v13->RelatedFileObject || (v13->Flags & 0x800) != 0 )
  {
    switch ( a2 )
    {
      case 3:
        v26 = 0;
        if ( !v13 || (v13->Flags & 0x100) == 0 )
        {
          v26 = ObLogSecurityDescriptor(a4, &v37, 1u);
          if ( (v26 & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)&IopSecurityResource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = v37;
            ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
          }
        }
        return v26;
      case 0:
        DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
        v13 = DevicePDO;
        if ( !DevicePDO )
          return (unsigned int)IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
        v26 = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
LABEL_53:
        ObfDereferenceObject(v13);
        return v26;
      case 1:
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v29);
        v31 = Length;
        v32 = a3;
        goto LABEL_48;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v38 = 0LL;
  v39 = 0LL;
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  ObfReferenceObject(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_1((volatile __int32 *)&v13->Type) )
    {
      v26 = IopAcquireFileObjectLock((char *)v13, PreviousMode, (v13->Flags & 4) != 0, &v42);
      if ( v42 )
        goto LABEL_53;
    }
    v16 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v16 = 0;
  }
  if ( (v13->Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v16 ^ 1u,
          retaddr);
  v19 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v19->UserEvent = p_Event;
    v19->UserIosb = (PIO_STATUS_BLOCK)&v38;
    v19->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
    v22 = v43;
    v23 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v22;
      CurrentStackLocation[-1].Parameters.Create.Options = *v23;
      v19->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v22;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    IopQueueThreadIrp((__int64)v19);
    v24 = KeGetCurrentThread();
    ++v24->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v25 = IofCallDriver(RelatedDeviceObject, v19);
    v26 = v25;
    FinalStatus = v25;
    if ( v16 )
    {
      if ( v25 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      if ( v13->Waiters )
        KeSetEvent(&v13->Lock, 0, 0);
      ObfDereferenceObject(v13);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v26 = FinalStatus;
    }
    else if ( v25 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v26 = v38;
    }
    if ( v26 != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( v26 == -2147483643 )
          v26 = -1073741789;
        *v23 = v39;
      }
      return v26;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v23, v43);
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
      SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor = SecurityDescriptor;
      if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        __fastfail(0xEu);
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)v34);
      v31 = v23;
      v32 = v43;
LABEL_48:
      v26 = SeQuerySecurityDescriptorInfo(v32, a4, v31, &ObjectsSecurityDescriptor);
      if ( SecurityDescriptor )
        ObDereferenceSecurityDescriptor((__int64)ObjectsSecurityDescriptor, 1u);
      return v26;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
