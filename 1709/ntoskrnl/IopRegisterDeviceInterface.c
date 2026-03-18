/*
 * XREFs of IopRegisterDeviceInterface @ 0x140517BAC
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140589748 (PiDevCfgConfigureDeviceInterfaces.c)
 *     IoRegisterDeviceInterface @ 0x140590360 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiCMRegisterDeviceInterface @ 0x1406D0A14 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x140518388 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     _PnpStringFromGuid @ 0x140519B48 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14051AE6C (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     _CmGetDeviceInterfaceName @ 0x14057FAF4 (_CmGetDeviceInterfaceName.c)
 *     PipCheckForDenyExecute @ 0x140592C58 (PipCheckForDenyExecute.c)
 *     _CmCreateDeviceInterface @ 0x1405D776C (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x14077EAA0 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, __int64 a2, __int64 a3, char a4, PVOID *a5, _DWORD *a6)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
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
  __int64 v22; // r8
  unsigned int v24; // ebx
  PVOID v25; // rax
  int v26; // [rsp+20h] [rbp-E0h]
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+61h] [rbp-9Fh]
  unsigned int v29; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v31; // [rsp+70h] [rbp-90h] BYREF
  PVOID v32; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  PVOID v37; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v38[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v39[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v42[80]; // [rsp+110h] [rbp+10h] BYREF

  v31 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  v32 = 0LL;
  LOBYTE(v34) = 0;
  v9 = 0LL;
  v37 = 0LL;
  v27 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  v28 = a4;
  v36 = a3;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  v29 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v29, Str2, a1, v36, 0, PoolWithTag, 512, &v29);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v24 = v29;
  v25 = ExAllocatePoolWithTag(PagedPool, 2LL * v29, 0x20207050u);
  *a5 = v25;
  if ( !v25 )
  {
LABEL_46:
    DeviceInterfaceName = -1073741670;
    goto LABEL_47;
  }
  LOBYTE(v26) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v29, Str2, a1, v36, v26, v25, v24, &v29);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v13 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, *a5, &BugCheckParameter2) < 0 )
  {
    v17 = v34;
  }
  else
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v16 = *(_DWORD *)(v15 + 32);
    ExReleasePushLockEx(v15, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = v16 & 1;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_23;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, a1, &v32);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_23;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     a1,
                     1,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v39,
                     (__int64)Source2,
                     16,
                     (__int64)v38,
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
  if ( !(unsigned __int8)PnpIsNullGuid(Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid(Source2, v42);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v42, &v31);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
  }
  if ( !v17 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation(&v37);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v27,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_23;
  }
  v19 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
LABEL_18:
    PiDmListAddObject(0LL, P, v19, 0LL);
    v20 = v27;
    do
      ++v13;
    while ( *(_WORD *)(a1 + 2 * v13) );
    DeviceInterfaceName = PnpSetObjectProperty(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            3,
                            0LL,
                            (__int64)&DEVPKEY_Device_InstanceId,
                            18,
                            a1,
                            2 * (int)v13 + 2,
                            v27 != 0 ? 0x20000 : 0);
    if ( DeviceInterfaceName < 0 )
    {
      if ( v20 )
        CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    }
    else
    {
      PiDmListAddObject(1LL, v32, v19, 0LL);
      if ( v31 )
        PiDmListAddObject(2LL, v31, v19, 0LL);
    }
    goto LABEL_23;
  }
  DeviceInterfaceName = PiDmGetObject(3LL, *a5, &BugCheckParameter2);
  if ( DeviceInterfaceName >= 0 )
  {
    v19 = BugCheckParameter2;
    goto LABEL_18;
  }
LABEL_23:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v28 )
    {
      LOBYTE(v22) = 1;
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v21, *a5, v22);
    }
    v7 = v31;
    v8 = v32;
    v9 = P;
    goto LABEL_27;
  }
  v7 = v31;
  v8 = v32;
  v9 = P;
LABEL_47:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  if ( v37 )
    PiPnpRtlEndOperation(v37);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((PVOID)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v9 + 7), v9[2]);
    PiDmObjectRelease(v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v8 + 7), v8[2]);
    PiDmObjectRelease(v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v7 + 7), v7[2]);
    PiDmObjectRelease(v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
