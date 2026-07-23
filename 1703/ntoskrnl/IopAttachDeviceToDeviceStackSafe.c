/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x140071B54
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x140072B90 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x140165010 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x1401F3820 (IoAttachDeviceByPointer.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400720DC (IopGetDeviceAttachmentBase.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IoGetDiskDeviceObject @ 0x1401F3A10 (IoGetDiskDeviceObject.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401F45FC (IopIsKnownGoodLegacyFsFilter.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQueryNameString @ 0x14044D030 (ObQueryNameString.c)
 *     IovAttachDeviceToDeviceStack @ 0x140762C2C (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r12
  struct _DEVICE_OBJECT *v6; // r13
  PDEVICE_OBJECT AttachedDevice; // rbx
  struct _DEVICE_OBJECT *v8; // r14
  char v9; // r15
  unsigned __int64 DeviceType; // rax
  __int64 v11; // rcx
  PVOID *DeviceNode; // rcx
  unsigned int v13; // eax
  int v14; // r8d
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  int *v22; // r15
  PDEVICE_OBJECT v23; // r13
  NTSTATUS v24; // r14d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  bool v26; // sf
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  char v33; // [rsp+40h] [rbp-C0h]
  KIRQL OldIrql; // [rsp+41h] [rbp-BFh]
  ULONG Length; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v37; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v38; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // [rsp+60h] [rbp-A0h]
  struct _DEVICE_OBJECT *v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v43; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  __int16 *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+100h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v41 = a2;
  v6 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, v6);
  AttachedDevice = IoGetAttachedDevice(v6);
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(v6);
  v8 = DeviceAttachmentBase;
  v33 = 0;
  v9 = 0;
  DeviceType = DeviceAttachmentBase->DeviceType;
  if ( (unsigned int)DeviceType <= 0x35 )
  {
    v11 = 0x20000100100108LL;
    if ( _bittest64(&v11, DeviceType) )
    {
      if ( (DeviceAttachmentBase->Flags & 0x10000000) != 0 || IopBlockLegacyFsFilters )
      {
        v9 = 1;
        if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL) )
        {
          v9 = 0;
        }
        else
        {
          ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
          v33 = 1;
        }
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || AttachedDevice->StackSize >= 0x7Du
    || v9 )
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
    DeviceNode = (PVOID *)v8->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && *((int *)DeviceNode + 99) < 0 )
      PnpRequestDeviceAction(DeviceNode[4], 8, 0, 1LL, 0LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v9 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *(_WORD *)(v16 + 56);
        UserData.Reserved = 0;
        v36 = v17 >> 1;
        UserData.Ptr = (ULONGLONG)&v36;
        UserData.Size = 2;
        v18 = *(unsigned __int16 *)(v16 + 56);
        v19 = *(_QWORD *)(v16 + 64);
        v47 = 0;
        v46 = v18;
        v45 = v19;
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
      v20 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v42 = 1835034;
      v22 = &v42;
      v37 = *(_WORD *)(v20 + 56) >> 1;
      v43 = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject(v8, &DiskDeviceObject) >= 0 )
      {
        v23 = DiskDeviceObject;
        v24 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
        if ( v24 == -1073741820 )
        {
          PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, Length, 0x6E4F6F49u);
          p_ObjectNameInfo = PoolWithTag;
          if ( PoolWithTag )
            v24 = ObQueryNameString(v23, PoolWithTag, Length, &Length);
          else
            v24 = -1073741670;
        }
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
        v6 = v41;
        v26 = v24 < 0;
        v8 = DeviceAttachmentBase;
        if ( !v26 )
          v22 = (int *)p_ObjectNameInfo;
      }
      v27 = *(_WORD *)v22;
      v48.Reserved = 0;
      v38 = v27 >> 1;
      v48.Ptr = (ULONGLONG)&v37;
      v28 = *(_QWORD *)(a1 + 8);
      v48.Size = 2;
      v29 = *(unsigned __int16 *)(v28 + 56);
      v30 = *(_QWORD *)(v28 + 64);
      v51 = 0;
      v54 = 0;
      v50 = v29;
      v49 = v30;
      v52 = &v38;
      v53 = 2;
      v31 = *(unsigned __int16 *)v22;
      v32 = *((_QWORD *)v22 + 1);
      v57 = 0;
      v56 = v31;
      v55 = v32;
      EtwWriteEx(
        IoMgrTraceHandle,
        &IoMgr_LegacyFsFilterBlockedOnScm,
        0LL,
        0,
        (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
        0LL,
        4u,
        &v48);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
    }
  }
  if ( v33 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  v13 = v6->DeviceType;
  if ( v13 <= 0x14 )
  {
    v14 = 1048840;
    if ( _bittest(&v14, v13) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 32))(a1, v6);
    }
  }
  return AttachedDevice;
}
