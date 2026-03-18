/*
 * XREFs of IopGetSetSecurityObject @ 0x140491160
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_1 @ 0x1400242A8 (IopAcquireFastLock_1.c)
 *     IopGetDevicePDO @ 0x14002459C (IopGetDevicePDO.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140483530 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14058E694 (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x1405DBFC0 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140728AA4 (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        void *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  struct _FILE_OBJECT *v12; // rbx
  _QWORD *p_Type; // r14
  struct _KTHREAD *v14; // r14
  char v15; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v18; // rdi
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rax
  NTSTATUS v21; // eax
  unsigned int SecurityDescriptorInfo; // edi
  struct _KTHREAD *CurrentThread; // rbx
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v26; // rsi
  PSECURITY_DESCRIPTOR v27; // rbx
  struct _KTHREAD *v28; // rdi
  NTSTATUS FinalStatus; // [rsp+30h] [rbp-78h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h]
  struct _KEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  char v34; // [rsp+B0h] [rbp+8h]

  v12 = Object;
  if ( Object->Type == 3 )
  {
    p_Type = &Object->Type;
    v12 = 0LL;
    goto LABEL_32;
  }
  p_Type = &Object->DeviceObject->Type;
  if ( !Object->FileName.Length && !Object->RelatedFileObject || (Object->Flags & 0x800) != 0 )
  {
LABEL_32:
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
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = ObjectsSecurityDescriptor[1];
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
        return (unsigned int)IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
      case 1:
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v27 = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor[0] = v27;
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 - 2, 1uLL) <= 0 )
            __fastfail(0xEu);
          v27 = ObjectsSecurityDescriptor[0];
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v26);
        SecurityDescriptorInfo = SeQuerySecurityDescriptorInfo(a3, a4, Length, ObjectsSecurityDescriptor);
        if ( !v27 )
          return SecurityDescriptorInfo;
LABEL_47:
        ObDereferenceSecurityDescriptor((__int64)v27, 1u);
        return SecurityDescriptorInfo;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v31 = 0LL;
  v32 = 0LL;
  v14 = KeGetCurrentThread();
  ObfReferenceObject(Object);
  if ( (v12->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_1((volatile __int32 *)&v12->Type) )
    {
      SecurityDescriptorInfo = IopAcquireFileObjectLock(v12);
      if ( v34 )
        goto LABEL_49;
    }
    v15 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = 0;
  }
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  Irp = IopAllocateIrpExReturn();
  v18 = (IRP *)Irp;
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
    *(_QWORD *)(Irp + 72) = &v31;
    *(_QWORD *)(Irp + 88) = 0LL;
    v19 = *(_QWORD *)(Irp + 184);
    if ( a2 == 1 )
    {
      *(_BYTE *)(v19 - 72) = 20;
      *(_DWORD *)(v19 - 64) = *a3;
      *(_DWORD *)(v19 - 56) = *Length;
      *(_QWORD *)(Irp + 112) = a4;
    }
    else
    {
      *(_BYTE *)(v19 - 72) = 21;
      *(_DWORD *)(v19 - 64) = *a3;
      *(_QWORD *)(v19 - 56) = a4;
    }
    *(_QWORD *)(v19 - 24) = v12;
    IopQueueThreadIrp(Irp);
    v20 = KeGetCurrentThread();
    ++v20->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v21 = IofCallDriver(RelatedDeviceObject, v18);
    SecurityDescriptorInfo = v21;
    FinalStatus = v21;
    if ( v15 )
    {
      if ( v21 == 259 )
      {
        KeWaitForSingleObject(&v12->Event, Executive, 0, 0, 0LL);
        FinalStatus = v12->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      if ( v12->Waiters )
        KeSetEvent(&v12->Lock, 0, 0);
      ObfDereferenceObject(v12);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      SecurityDescriptorInfo = FinalStatus;
    }
    else if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      SecurityDescriptorInfo = v31;
    }
    if ( SecurityDescriptorInfo != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( SecurityDescriptorInfo == -2147483643 )
          SecurityDescriptorInfo = -1073741789;
        *Length = v32;
      }
      return SecurityDescriptorInfo;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, Length, a3);
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v27 = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor[0] = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 - 2, 1uLL) <= 0 )
          __fastfail(0xEu);
        v27 = ObjectsSecurityDescriptor[0];
      }
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)v28);
      SecurityDescriptorInfo = SeQuerySecurityDescriptorInfo(a3, a4, Length, ObjectsSecurityDescriptor);
      if ( !v27 )
        return SecurityDescriptorInfo;
      goto LABEL_47;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v12, 0LL);
  return 3221225626LL;
}
