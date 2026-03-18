/*
 * XREFs of IopRegisterDeviceInterface @ 0x1404E3CE0
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140593178 (PiDevCfgConfigureDeviceInterfaces.c)
 *     IoRegisterDeviceInterface @ 0x1405C2650 (IoRegisterDeviceInterface.c)
 *     PiCMRegisterDeviceInterface @ 0x1406A595C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404E0960 (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1404E44B8 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E60A4 (_CmGetDeviceInterfaceName.c)
 *     PipCheckForDenyExecute @ 0x14055624C (PipCheckForDenyExecute.c)
 *     _CmCreateDeviceInterface @ 0x1405961B4 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x14073A3B4 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, int *a2, __int64 a3, char a4, PVOID *a5, _DWORD *a6)
{
  unsigned int *v7; // rdi
  unsigned int *v8; // rsi
  unsigned int *v9; // r14
  int DeviceInterfaceName; // ebx
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rsi
  struct _KTHREAD *v14; // rax
  ULONG_PTR v15; // rbx
  int v16; // edi
  char v17; // di
  int ObjectProperty; // eax
  ULONG_PTR v19; // rdi
  char v20; // r14
  __int64 v21; // rcx
  unsigned int v23; // ebx
  PVOID v24; // rax
  int v25; // [rsp+20h] [rbp-E0h]
  char v26; // [rsp+60h] [rbp-A0h] BYREF
  char v27; // [rsp+61h] [rbp-9Fh]
  unsigned int v28; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v30; // [rsp+70h] [rbp-90h] BYREF
  PVOID v31; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h]
  PVOID v36; // [rsp+A0h] [rbp-60h] BYREF
  char v37[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v38[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v41[40]; // [rsp+110h] [rbp+10h] BYREF

  v30 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  LOBYTE(v33) = 0;
  v9 = 0LL;
  v36 = 0LL;
  v26 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  v27 = a4;
  v35 = a3;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  v28 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v28, Str2, a1, v35, 0, PoolWithTag, 512, &v28);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v23 = v28;
  v24 = ExAllocatePoolWithTag(PagedPool, 2LL * v28, 0x20207050u);
  *a5 = v24;
  if ( !v24 )
  {
LABEL_46:
    DeviceInterfaceName = -1073741670;
    goto LABEL_47;
  }
  LOBYTE(v25) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v28, Str2, a1, v35, v25, v24, v23, &v28);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v13 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3, *a5, (__int64 *)&BugCheckParameter2) < 0 )
  {
    v17 = v33;
  }
  else
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v16 = *(_DWORD *)(v15 + 32);
    ExReleasePushLockEx(v15, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = v16 & 1;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_23;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, a1, &v31);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_23;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v38,
                     (__int64)Source2,
                     16,
                     (__int64)v37,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2[0] = 0LL;
    Source2[1] = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
    goto LABEL_23;
  }
  if ( !PnpIsNullGuid(Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid((int *)Source2, v41);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v41, &v30);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
  }
  if ( !v17 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&v36);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v26,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
  }
  v19 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
LABEL_18:
    PiDmListAddObject(0LL, P, v19, 0LL);
    v20 = v26;
    do
      ++v13;
    while ( *(_WORD *)(a1 + 2 * v13) );
    DeviceInterfaceName = PnpSetObjectProperty(
                            *(__int64 **)&PiPnpRtlCtx,
                            (__int64)*a5,
                            3u,
                            (__int64)Handle,
                            0LL,
                            (__int64)&DEVPKEY_Device_InstanceId,
                            18,
                            a1,
                            2 * (int)v13 + 2,
                            v26 != 0 ? 0x20000 : 0);
    if ( DeviceInterfaceName < 0 )
    {
      if ( v20 )
        CmDeleteDeviceInterface(PiPnpRtlCtx, (unsigned int)*a5);
    }
    else
    {
      PiDmListAddObject(1LL, v31, v19, 0LL);
      if ( v30 )
        PiDmListAddObject(2LL, v30, v19, 0LL);
    }
    goto LABEL_23;
  }
  DeviceInterfaceName = PiDmGetObject(3, *a5, (__int64 *)&BugCheckParameter2);
  if ( DeviceInterfaceName >= 0 )
  {
    v19 = BugCheckParameter2;
    goto LABEL_18;
  }
LABEL_23:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v27 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v21, *a5, 1);
    v7 = (unsigned int *)v30;
    v8 = (unsigned int *)v31;
    v9 = (unsigned int *)P;
    goto LABEL_27;
  }
  v7 = (unsigned int *)v30;
  v8 = (unsigned int *)v31;
  v9 = (unsigned int *)P;
LABEL_47:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  if ( v36 )
    PiPnpRtlEndOperation((char *)v36);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(v9[7], *((_QWORD *)v9 + 2));
    PiDmObjectRelease(v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(v8[7], *((_QWORD *)v8 + 2));
    PiDmObjectRelease(v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(v7[7], *((_QWORD *)v7 + 2));
    PiDmObjectRelease(v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
