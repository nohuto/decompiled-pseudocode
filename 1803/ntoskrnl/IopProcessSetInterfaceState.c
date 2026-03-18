/*
 * XREFs of IopProcessSetInterfaceState @ 0x1405F4C6C
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x1405CA86C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x1405F53C0 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401A8C00 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401A9980 (ZwOpenSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14050AE00 (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IoGetDeviceProperty @ 0x140525CB0 (IoGetDeviceProperty.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1405D24C8 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405F5140 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x1405F5C90 (PnpSetDeviceClassChange.c)
 *     PiDeferSetInterfaceState @ 0x1405F5D60 (PiDeferSetInterfaceState.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140605260 (PiRemoveDeferredSetInterfaceState.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(__int64 a1, unsigned __int8 a2, char a3)
{
  PVOID v5; // r15
  unsigned int *v6; // rsi
  struct _DEVICE_OBJECT *v7; // r13
  wchar_t *v8; // rdi
  __int16 v9; // kr00_2
  int v10; // eax
  __int64 v11; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v15; // rax
  _DWORD *DeviceNode; // r8
  int v17; // eax
  struct _KTHREAD *v18; // rax
  ULONG_PTR v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  GUID *v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v25; // rcx
  char NumberOfBytes; // [rsp+68h] [rbp-A0h]
  __int16 NumberOfBytes_1; // [rsp+69h] [rbp-9Fh]
  ULONG NumberOfBytes_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *v30; // [rsp+78h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  char v34[8]; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING Name; // [rsp+E8h] [rbp-20h] BYREF
  GUID v38; // [rsp+F8h] [rbp-10h] BYREF

  NumberOfBytes_1 = a2;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  SourceString = 0LL;
  UnicodeString.Buffer = 0LL;
  v5 = 0LL;
  BugCheckParameter2 = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  NumberOfBytes = 0;
  v9 = a2;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_38;
  }
  v10 = PnpUnicodeStringToWstr((__int16 **)&v30, 0LL, (unsigned __int16 *)a1);
  v8 = v30;
  DeviceInterfaceClassGuid = v10;
  if ( v10 < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v11, (__int64)v30, &v38);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  PoolWithTag = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
  SourceString = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_44;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v8,
                     3u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v31,
                     (__int64)PoolWithTag,
                     400,
                     (__int64)v34,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_64;
  if ( ObjectProperty < 0 )
    goto LABEL_44;
  if ( v31 != 18 )
    goto LABEL_64;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  v15 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x49706E50u);
  v7 = v15;
  if ( !v15 )
  {
    if ( !(_BYTE)NumberOfBytes_1 )
    {
      DeviceNode = 0LL;
      goto LABEL_14;
    }
LABEL_64:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_44;
  }
  DeviceNode = v15->DeviceObjectExtension->DeviceNode;
LABEL_14:
  if ( (_BYTE)NumberOfBytes_1 )
  {
    v17 = DeviceNode[75];
    if ( v17 <= 769 || v17 > 781 && v17 != 784 )
      goto LABEL_64;
  }
  if ( a3 && DeviceNode && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( (_BYTE)NumberOfBytes_1 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_44;
  }
  if ( !(_BYTE)NumberOfBytes_1 )
  {
    DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v8, (__int64 *)&BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v19 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v25 = *(void **)(v19 + 40);
      if ( !v25 )
      {
        DeviceInterfaceClassGuid = -1073741772;
        goto LABEL_37;
      }
      ZwClose(v25);
      *(_QWORD *)(v19 + 40) = 0LL;
      HIBYTE(NumberOfBytes_1) = 1;
LABEL_57:
      NumberOfBytes = 1;
LABEL_37:
      ExReleasePushLockEx(v19, 0LL, v20, v21);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v9 = NumberOfBytes_1;
      v6 = (unsigned int *)BugCheckParameter2;
      v8 = v30;
LABEL_38:
      if ( HIBYTE(v9) )
      {
        v22 = &GUID_DEVICE_INTERFACE_ARRIVAL;
        if ( !(_BYTE)v9 )
          v22 = &GUID_DEVICE_INTERFACE_REMOVAL;
        PnpSetDeviceClassChange(v22, &v38, a1);
        PnpObjectRaisePropertyChangeEvent(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)v8,
          3LL,
          0LL,
          0LL,
          (__int64)&DEVPKEY_DeviceInterface_Enabled);
      }
      if ( NumberOfBytes )
        PiDmRemoveCacheReferenceForObject(3, (__int64)v8, 0LL);
      goto LABEL_44;
    }
LABEL_60:
    v6 = (unsigned int *)BugCheckParameter2;
    goto LABEL_44;
  }
  NumberOfBytes_4 = 512;
  while ( 1 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    v5 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x20207050u);
    if ( !v5 )
      break;
    DeviceInterfaceClassGuid = IoGetDeviceProperty(
                                 v7,
                                 DevicePropertyPhysicalDeviceObjectName,
                                 NumberOfBytes_4,
                                 v5,
                                 &NumberOfBytes_4);
    if ( DeviceInterfaceClassGuid != -1073741789 )
      goto LABEL_28;
  }
  DeviceInterfaceClassGuid = -1073741670;
LABEL_28:
  if ( DeviceInterfaceClassGuid >= 0 && NumberOfBytes_4 )
  {
    RtlInitUnicodeString(&Name, (PCWSTR)v5);
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3, v8, (volatile signed __int32 **)&BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      v19 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      if ( (*(_DWORD *)(v19 + 32) & 1) != 0 )
      {
        if ( !*(_QWORD *)(v19 + 40) )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v19 + 40), 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         (PHANDLE)(v19 + 40),
                                         0xF0001u,
                                         &ObjectAttributes,
                                         &Name);
          if ( DeviceInterfaceClassGuid >= 0 )
            HIBYTE(NumberOfBytes_1) = 1;
          goto LABEL_37;
        }
        DeviceInterfaceClassGuid = 0x40000000;
      }
      else
      {
        DeviceInterfaceClassGuid = -1073741772;
      }
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_44:
  RtlFreeAnsiString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v8, a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v6 )
    PiDmObjectRelease(v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
