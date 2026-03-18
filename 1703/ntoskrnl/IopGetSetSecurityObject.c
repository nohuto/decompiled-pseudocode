/*
 * XREFs of IopGetSetSecurityObject @ 0x140482710
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock_0 @ 0x140026998 (IopAcquireFastLock_0.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopGetDevicePDO @ 0x14007207C (IopGetDevicePDO.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14044E0A0 (IopSetDeviceSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404FC5B0 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptors @ 0x1405C9E68 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x1406F1024 (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        void *a4,
        PULONG Length,
        int a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8,
        char a9)
{
  struct _FILE_OBJECT *v12; // rbx
  _QWORD *p_Type; // r14
  struct _KTHREAD *v14; // r14
  char v15; // di
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v17; // r8
  __int64 Irp; // rax
  IRP *v19; // rdi
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  NTSTATUS v22; // eax
  unsigned int SecurityDescriptorInfo; // edi
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v26; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v29; // rdi
  char v30; // [rsp+30h] [rbp-68h]
  NTSTATUS FinalStatus; // [rsp+34h] [rbp-64h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h]
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  char v37; // [rsp+A0h] [rbp+8h]

  v12 = Object;
  if ( Object->Type == 3 )
  {
    p_Type = &Object->Type;
    v12 = 0LL;
    goto LABEL_33;
  }
  p_Type = &Object->DeviceObject->Type;
  if ( !Object->FileName.Length && !Object->RelatedFileObject || (Object->Flags & 0x800) != 0 )
  {
LABEL_33:
    switch ( a2 )
    {
      case 3:
        SecurityDescriptorInfo = 0;
        if ( !v12 || (v12->Flags & 0x100) == 0 )
        {
          SecurityDescriptorInfo = ObLogSecurityDescriptor(a4);
          if ( (SecurityDescriptorInfo & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)&IopSecurityResource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = ObjectsSecurityDescriptor[1];
            ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
        }
        return SecurityDescriptorInfo;
      case 0:
        DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
        v12 = DevicePDO;
        if ( DevicePDO )
        {
          SecurityDescriptorInfo = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
LABEL_49:
          ObfDereferenceObject(v12);
          return SecurityDescriptorInfo;
        }
        return (unsigned int)IopSetDeviceSecurityDescriptor((__int64)p_Type, a3, a4, a7, a8);
      case 1:
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor[0] = SecurityDescriptor;
        if ( SecurityDescriptor )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 2, 1uLL) <= 0 )
            __fastfail(0xEu);
          SecurityDescriptor = ObjectsSecurityDescriptor[0];
        }
        ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v26);
        SecurityDescriptorInfo = SeQuerySecurityDescriptorInfo(a3, a4, Length, ObjectsSecurityDescriptor);
        if ( !SecurityDescriptor )
          return SecurityDescriptorInfo;
LABEL_45:
        ObDereferenceSecurityDescriptor(SecurityDescriptor);
        return SecurityDescriptorInfo;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v33 = 0LL;
  v34 = 0LL;
  v14 = KeGetCurrentThread();
  ObfReferenceObject(Object);
  if ( (v12->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)&v12->Type) )
    {
      SecurityDescriptorInfo = IopAcquireFileObjectLock(v12);
      if ( v30 )
        goto LABEL_49;
    }
    v15 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = 0;
  }
  v37 = v15;
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  LOBYTE(v17) = v15 == 0;
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          v17,
          retaddr);
  v19 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v12;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v12->Flags & 2) != 0 )
    {
      *(_QWORD *)(Irp + 80) = 0LL;
      *(_BYTE *)(Irp + 71) |= 2u;
    }
    else
    {
      *(_QWORD *)(Irp + 80) = &Event;
      *(_DWORD *)(Irp + 16) = 4;
    }
    *(_QWORD *)(Irp + 72) = &v33;
    *(_QWORD *)(Irp + 88) = 0LL;
    v20 = *(_QWORD *)(Irp + 184);
    if ( a2 == 1 )
    {
      *(_BYTE *)(v20 - 72) = 20;
      *(_DWORD *)(v20 - 64) = *a3;
      *(_DWORD *)(v20 - 56) = *Length;
      *(_QWORD *)(Irp + 112) = a4;
    }
    else
    {
      *(_BYTE *)(v20 - 72) = 21;
      *(_DWORD *)(v20 - 64) = *a3;
      *(_QWORD *)(v20 - 56) = a4;
    }
    *(_QWORD *)(v20 - 24) = v12;
    IopQueueThreadIrp(Irp);
    v21 = KeGetCurrentThread();
    ++v21->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v22 = IofCallDriver(RelatedDeviceObject, v19);
    SecurityDescriptorInfo = v22;
    FinalStatus = v22;
    if ( v37 )
    {
      if ( v22 == 259 )
      {
        KeWaitForSingleObject(&v12->Event, Executive, 0, 0, 0LL);
        FinalStatus = v12->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      if ( v12->Waiters )
        KeSetEvent(&v12->Lock, 0, 0);
      ObfDereferenceObject(v12);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      SecurityDescriptorInfo = FinalStatus;
    }
    else if ( v22 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      SecurityDescriptorInfo = v33;
    }
    if ( SecurityDescriptorInfo != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( SecurityDescriptorInfo == -2147483643 )
          SecurityDescriptorInfo = -1073741789;
        *Length = v34;
      }
      return SecurityDescriptorInfo;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, Length, a3);
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
      SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor[0] = SecurityDescriptor;
      if ( SecurityDescriptor )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 2, 1uLL) <= 0 )
          __fastfail(0xEu);
        SecurityDescriptor = ObjectsSecurityDescriptor[0];
      }
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)v29);
      SecurityDescriptorInfo = SeQuerySecurityDescriptorInfo(a3, a4, Length, ObjectsSecurityDescriptor);
      if ( !SecurityDescriptor )
        return SecurityDescriptorInfo;
      goto LABEL_45;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v12, 0LL);
  return 3221225626LL;
}
