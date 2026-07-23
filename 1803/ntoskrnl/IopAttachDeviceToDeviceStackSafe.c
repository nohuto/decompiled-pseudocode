/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x1400C8670
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x1400C8650 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x140163D90 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x140236610 (IoAttachDeviceByPointer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x140065144 (IopGetDeviceAttachmentBase.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1400C8880 (IopIsKnownGoodLegacyFsFilter.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     IoGetDiskDeviceObject @ 0x14015E430 (IoGetDiskDeviceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x1405747E0 (ObQueryNameString.c)
 *     IovAttachDeviceToDeviceStack @ 0x14081189C (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r15
  struct _DEVICE_OBJECT *v6; // r14
  KIRQL v7; // r12
  PDEVICE_OBJECT AttachedDevice; // rbx
  __int64 DeviceAttachmentBase; // rax
  __int64 v10; // rdx
  struct _DEVICE_OBJECT *v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  CCHAR StackSize; // al
  PVOID *DeviceNode; // rcx
  char v16; // si
  unsigned int DeviceType; // eax
  int v18; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  int *v24; // r15
  unsigned __int16 v25; // r14
  PDEVICE_OBJECT v26; // r14
  NTSTATUS v27; // r15d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // [rsp+40h] [rbp-C0h]
  ULONG Length; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v36; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v37; // [rsp+50h] [rbp-B0h] BYREF
  struct _DEVICE_OBJECT *v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v40; // [rsp+68h] [rbp-98h]
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+94h] [rbp-6Ch]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  __int16 *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v38 = a2;
  v6 = a2;
  v7 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, v6);
  AttachedDevice = IoGetAttachedDevice(v6);
  DeviceAttachmentBase = IopGetDeviceAttachmentBase((__int64)v6);
  LOBYTE(v10) = 0;
  v11 = (struct _DEVICE_OBJECT *)DeviceAttachmentBase;
  v33 = 0;
  v12 = *(unsigned int *)(DeviceAttachmentBase + 72);
  if ( (unsigned int)v12 <= 0x35 )
  {
    v13 = 0x20000100100108LL;
    if ( _bittest64(&v13, v12) )
    {
      if ( (v11->Flags & 0x10000000) != 0 || IopBlockLegacyFsFilters )
      {
        if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL, v10, 1LL) )
        {
          LOBYTE(v10) = 0;
        }
        else
        {
          ObfReferenceObjectWithTag(v11, 0x746C6644u);
          LOBYTE(v10) = 1;
          v33 = 1;
        }
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || (StackSize = AttachedDevice->StackSize, (unsigned __int8)StackSize >= 0x7Du)
    || (_BYTE)v10 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      *a3 = AttachedDevice;
      StackSize = AttachedDevice->StackSize;
    }
    *(_BYTE *)(a1 + 76) = StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    ++AttachedDevice->Spare1;
    *(_QWORD *)(v3 + 48) = AttachedDevice;
    DeviceNode = (PVOID *)v11->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && *((int *)DeviceNode + 99) < 0 )
      PnpRequestDeviceAction(DeviceNode[4], 0LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v7);
  v16 = v33;
  if ( v33 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
      {
        v20 = *(_QWORD *)(a1 + 8);
        v35 = *(_WORD *)(v20 + 56) >> 1;
        UserData.Ptr = (ULONGLONG)&v35;
        *(_QWORD *)&UserData.Size = 2LL;
        v21 = *(_QWORD *)(v20 + 64);
        v44 = *(unsigned __int16 *)(v20 + 56);
        v43 = v21;
        v45 = 0;
        EtwWriteEx(
          IoMgrTraceHandle,
          &IoMgr_LegacyFsFilterBlockedByPolicy,
          0LL,
          0,
          (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
          0LL,
          2u,
          &UserData);
      }
    }
    else if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedOnScm) )
    {
      v22 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v39 = 1835034;
      v24 = &v39;
      v36 = *(_WORD *)(v22 + 56) >> 1;
      v25 = 26;
      v40 = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u )
      {
        v25 = 26;
        if ( IoGetDiskDeviceObject(v11, &DiskDeviceObject) >= 0 )
        {
          v26 = DiskDeviceObject;
          v27 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
          if ( v27 == -1073741820 )
          {
            PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, Length, 0x6E4F6F49u);
            p_ObjectNameInfo = PoolWithTag;
            if ( PoolWithTag )
              v27 = ObQueryNameString(v26, PoolWithTag, Length, &Length);
            else
              v27 = -1073741670;
          }
          ObfDereferenceObjectWithTag(v26, 0x746C6644u);
          v25 = 26;
          if ( v27 < 0 )
          {
            v24 = &v39;
          }
          else
          {
            v25 = p_ObjectNameInfo->Name.Length;
            v24 = (int *)p_ObjectNameInfo;
          }
        }
      }
      *(_QWORD *)&v46.Size = 2LL;
      v46.Ptr = (ULONGLONG)&v36;
      v29 = *(_QWORD *)(a1 + 8);
      v37 = v25 >> 1;
      v30 = *(unsigned __int16 *)(v29 + 56);
      v31 = *(_QWORD *)(v29 + 64);
      v48 = v30;
      v47 = v31;
      v50 = &v37;
      v49 = 0;
      v51 = 2LL;
      v32 = *((_QWORD *)v24 + 1);
      v53 = *(unsigned __int16 *)v24;
      v54 = 0;
      v52 = v32;
      EtwWriteEx(
        IoMgrTraceHandle,
        &IoMgr_LegacyFsFilterBlockedOnScm,
        0LL,
        0,
        (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
        0LL,
        4u,
        &v46);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
      v6 = v38;
      v16 = v33;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  }
  DeviceType = v6->DeviceType;
  if ( DeviceType <= 0x14 )
  {
    v18 = 1048840;
    if ( _bittest(&v18, DeviceType) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 32))(a1, v6);
    }
  }
  return AttachedDevice;
}
