/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x140127C98
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x140127C60 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x140127C80 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x1401F9250 (IoAttachDeviceByPointer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400245FC (IopGetDeviceAttachmentBase.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     IoGetDiskDeviceObject @ 0x140156B50 (IoGetDiskDeviceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401FA17C (IopIsKnownGoodLegacyFsFilter.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x1405907A0 (ObQueryNameString.c)
 *     IovAttachDeviceToDeviceStack @ 0x1407A48BC (IovAttachDeviceToDeviceStack.c)
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
  PVOID *DeviceNode; // rcx
  char v15; // si
  unsigned int DeviceType; // eax
  int v17; // r8d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  int *v23; // r15
  NTSTATUS v24; // r14d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  bool v26; // sf
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // [rsp+40h] [rbp-C0h]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v35; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v36; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  struct _DEVICE_OBJECT *v38; // [rsp+60h] [rbp-A0h]
  int v39; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v40; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  __int16 *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
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
  v32 = 0;
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
          v32 = 1;
        }
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || AttachedDevice->StackSize >= 0x7Du
    || (_BYTE)v10 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = AttachedDevice;
    *(_BYTE *)(a1 + 76) = AttachedDevice->StackSize + 1;
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
      PnpRequestDeviceAction(DeviceNode[4], 8, 0, 1LL, 0LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v7);
  v15 = v32;
  if ( v32 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
      {
        v19 = *(_QWORD *)(a1 + 8);
        v34 = *(_WORD *)(v19 + 56) >> 1;
        UserData.Ptr = (ULONGLONG)&v34;
        *(_QWORD *)&UserData.Size = 2LL;
        v20 = *(_QWORD *)(v19 + 64);
        v43 = *(unsigned __int16 *)(v19 + 56);
        v42 = v20;
        v44 = 0;
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
      v21 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v39 = 1835034;
      v23 = &v39;
      v35 = *(_WORD *)(v21 + 56) >> 1;
      v40 = L"(Unavailable)";
      ReturnLength = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject(v11, &DiskDeviceObject) >= 0 )
      {
        v24 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, ReturnLength, &ReturnLength);
        if ( v24 == -1073741820 )
        {
          PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x6E4F6F49u);
          p_ObjectNameInfo = PoolWithTag;
          if ( PoolWithTag )
            v24 = ObQueryNameString(DiskDeviceObject, PoolWithTag, ReturnLength, &ReturnLength);
          else
            v24 = -1073741670;
        }
        ObfDereferenceObjectWithTag(DiskDeviceObject, 0x746C6644u);
        v26 = v24 < 0;
        v6 = v38;
        if ( !v26 )
          v23 = (int *)p_ObjectNameInfo;
      }
      v27 = *(_WORD *)v23;
      v45.Reserved = 0;
      v36 = v27 >> 1;
      v45.Ptr = (ULONGLONG)&v35;
      v28 = *(_QWORD *)(a1 + 8);
      v45.Size = 2;
      v29 = *(unsigned __int16 *)(v28 + 56);
      v30 = *(_QWORD *)(v28 + 64);
      v48 = 0;
      v51 = 0;
      v47 = v29;
      v46 = v30;
      v49 = &v36;
      v50 = 2;
      v31 = *((_QWORD *)v23 + 1);
      v53 = *(unsigned __int16 *)v23;
      v54 = 0;
      v52 = v31;
      EtwWriteEx(
        IoMgrTraceHandle,
        &IoMgr_LegacyFsFilterBlockedOnScm,
        0LL,
        0,
        (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
        0LL,
        4u,
        &v45);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
      v15 = v32;
    }
    if ( v15 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  }
  DeviceType = v6->DeviceType;
  if ( DeviceType <= 0x14 )
  {
    v17 = 1048840;
    if ( _bittest(&v17, DeviceType) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 32))(a1, v6);
    }
  }
  return AttachedDevice;
}
