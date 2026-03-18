/*
 * XREFs of IopProcessSetInterfaceState @ 0x1404E49E8
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x14044FA88 (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140461410 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14017F640 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x140180380 (ZwOpenSymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpSetDeviceClassChange @ 0x14045628C (PnpSetDeviceClassChange.c)
 *     PiDeferSetInterfaceState @ 0x1404572B4 (PiDeferSetInterfaceState.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404DE868 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404E16A4 (_CmGetDeviceInterfaceClassGuid.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E47B4 (IopBuildGlobalSymbolicLinkString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1405D1394 (PiRemoveDeferredSetInterfaceState.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(UNICODE_STRING *a1, char a2, unsigned int *a3)
{
  char v3; // al
  char v5; // r13
  PVOID v7; // r15
  unsigned int *v8; // r14
  _WORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v15; // rax
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  __int64 DeviceNode; // rcx
  int v18; // eax
  struct _DEVICE_OBJECT *v19; // r13
  struct _KTHREAD *v20; // rax
  ULONG_PTR v21; // rdi
  GUID *v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v25; // rcx
  __int16 NumberOfBytes; // [rsp+68h] [rbp-A0h]
  ULONG NumberOfBytes_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  _WORD *v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h]
  PCWSTR SourceString; // [rsp+90h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v34[8]; // [rsp+A8h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING Name; // [rsp+F0h] [rbp-18h] BYREF
  GUID v38; // [rsp+100h] [rbp-8h] BYREF

  v3 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  SourceString = 0LL;
  v5 = (char)a3;
  UnicodeString.Buffer = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = 0LL;
  DeviceObject = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  NumberOfBytes = 0;
  if ( !a1 || !a1->Buffer || !a1->Length )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_36;
  }
  v10 = PnpUnicodeStringToWstr(&v29, 0LL, &a1->Length);
  v9 = v29;
  DeviceInterfaceClassGuid = v10;
  if ( v10 < 0 )
    goto LABEL_42;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v11, (__int64)v29, &v38);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(&a1->Length, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  PoolWithTag = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
  SourceString = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_42;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v9,
                     3u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v30,
                     (__int64)PoolWithTag,
                     400,
                     (__int64)v34,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_61;
  if ( ObjectProperty < 0 )
    goto LABEL_42;
  if ( v30 != 18 )
    goto LABEL_61;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  v15 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x49706E50u);
  DeviceObject = v15;
  if ( !v15 )
  {
    if ( !a2 )
      goto LABEL_42;
    goto LABEL_61;
  }
  DeviceObjectExtension = v15->DeviceObjectExtension;
  DeviceNode = (__int64)DeviceObjectExtension->DeviceNode;
  if ( a2 )
  {
    v18 = *(_DWORD *)(DeviceNode + 300);
    if ( v18 <= 769 || v18 > 781 && v18 != 784 )
    {
LABEL_61:
      DeviceInterfaceClassGuid = -1073741808;
      goto LABEL_42;
    }
  }
  if ( v5 && (DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( a2 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_42;
  }
  if ( !a2 )
  {
    DeviceInterfaceClassGuid = PiDmGetObject(3, v9, (__int64 *)&BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v21 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v25 = *(void **)(v21 + 40);
      if ( !v25 )
      {
        DeviceInterfaceClassGuid = -1073741772;
        goto LABEL_35;
      }
      ZwClose(v25);
      *(_QWORD *)(v21 + 40) = 0LL;
      HIBYTE(NumberOfBytes) = 1;
LABEL_55:
      LOBYTE(NumberOfBytes) = 1;
LABEL_35:
      ExReleasePushLockEx(v21, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v3 = HIBYTE(NumberOfBytes);
      v8 = (unsigned int *)BugCheckParameter2;
      v9 = v29;
LABEL_36:
      if ( v3 )
      {
        v22 = &GUID_DEVICE_INTERFACE_ARRIVAL;
        if ( !a2 )
          v22 = &GUID_DEVICE_INTERFACE_REMOVAL;
        PnpSetDeviceClassChange(v22, &v38, (const void **)a1);
        PnpObjectRaisePropertyChangeEvent(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)v9,
          3LL,
          0LL,
          0LL,
          (__int64)&DEVPKEY_DeviceInterface_Enabled);
      }
      if ( (_BYTE)NumberOfBytes )
        PiDmRemoveCacheReferenceForObject(3, v9, a3);
      goto LABEL_42;
    }
LABEL_58:
    v8 = (unsigned int *)BugCheckParameter2;
    goto LABEL_42;
  }
  v19 = DeviceObject;
  NumberOfBytes_4 = 512;
  while ( 1 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v7 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x20207050u);
    if ( !v7 )
      break;
    DeviceInterfaceClassGuid = IoGetDeviceProperty(
                                 v19,
                                 DevicePropertyPhysicalDeviceObjectName,
                                 NumberOfBytes_4,
                                 v7,
                                 &NumberOfBytes_4);
    if ( DeviceInterfaceClassGuid != -1073741789 )
      goto LABEL_26;
  }
  DeviceInterfaceClassGuid = -1073741670;
LABEL_26:
  if ( DeviceInterfaceClassGuid >= 0 && NumberOfBytes_4 )
  {
    RtlInitUnicodeString(&Name, (PCWSTR)v7);
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3u, v9, (volatile signed __int32 **)&BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      if ( (*(_DWORD *)(v21 + 32) & 1) != 0 )
      {
        if ( !*(_QWORD *)(v21 + 40) )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v21 + 40), 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         (PHANDLE)(v21 + 40),
                                         0xF0001u,
                                         &ObjectAttributes,
                                         &Name);
          if ( DeviceInterfaceClassGuid >= 0 )
            HIBYTE(NumberOfBytes) = 1;
          goto LABEL_35;
        }
        DeviceInterfaceClassGuid = 0x40000000;
      }
      else
      {
        DeviceInterfaceClassGuid = -1073741772;
      }
      goto LABEL_55;
    }
    goto LABEL_58;
  }
LABEL_42:
  RtlFreeUnicodeString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v9, (__int64)a1);
  if ( DeviceObject )
    ObfDereferenceObjectWithTag(DeviceObject, 0x49706E50u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)DeviceInterfaceClassGuid;
}
