/*
 * XREFs of IopRegisterDeviceInterface @ 0x1405F5474
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405DAAA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     IoRegisterDeviceInterface @ 0x1405F5A00 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 *     PiCMRegisterDeviceInterface @ 0x14073823C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404905D8 (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     _PnpStringFromGuid @ 0x14050B138 (_PnpStringFromGuid.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 *     _CmGetDeviceInterfaceName @ 0x1405DEBB0 (_CmGetDeviceInterfaceName.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1405EA250 (PiDmListAddObject.c)
 *     _CmCreateDeviceInterface @ 0x1405F187C (_CmCreateDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x1405F58F0 (PipCheckForDenyExecute.c)
 *     _CmDeleteDeviceInterface @ 0x1407E76B0 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(wchar_t *a1, int *a2, const wchar_t *a3, char a4, PVOID *a5, _DWORD *a6)
{
  PVOID v7; // rdi
  PVOID v8; // rsi
  PVOID v9; // r14
  int DeviceInterfaceName; // ebx
  unsigned int *v11; // r8
  wchar_t *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rsi
  char v15; // di
  int ObjectProperty; // eax
  ULONG_PTR v17; // rdi
  char v18; // r14
  __int64 v19; // rcx
  struct _KTHREAD *v21; // rax
  ULONG_PTR v22; // rbx
  int v23; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  wchar_t *v27; // rax
  size_t v28; // [rsp+30h] [rbp-D0h]
  size_t v29; // [rsp+30h] [rbp-D0h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+61h] [rbp-9Fh]
  unsigned int v32; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID v35; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v39; // [rsp+98h] [rbp-68h]
  PVOID v40; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v42[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v45[40]; // [rsp+110h] [rbp+10h] BYREF

  v34 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  LOBYTE(v37) = 0;
  v9 = 0LL;
  v40 = 0LL;
  v30 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  v31 = a4;
  v39 = a3;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v32 = 512;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  LODWORD(v28) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v32, Str2, a1, v39, 0, PoolWithTag, v28, &v32);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v26 = v32;
  v27 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v32, 0x20207050u);
  *a5 = v27;
  if ( !v27 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v29) = v26;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v32, Str2, a1, v39, 0, v27, v29, &v32);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v14 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2) >= 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v23 = *(_DWORD *)(v22 + 32);
    ExReleasePushLockEx(v22, 0LL, v24, v25);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v15 = v23 & 1;
  }
  else
  {
    v15 = v37;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4, Str2, (volatile signed __int32 **)&P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1, a1, (volatile signed __int32 **)&v35);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v42,
                     (__int64)Source2,
                     16,
                     (__int64)v41,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2[0] = 0LL;
    Source2[1] = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
    goto LABEL_27;
  }
  if ( PnpIsNullGuid(Source2)
    || (DeviceInterfaceName = PnpStringFromGuid((int *)Source2, v45), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5, v45, (volatile signed __int32 **)&v34),
        DeviceInterfaceName >= 0) )
  {
    if ( v15
      || (DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&v40), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(*(__int64 *)&PiPnpRtlCtx, (__int64)*a5, 2, &Handle, &v30, 0),
          DeviceInterfaceName >= 0) )
    {
      v17 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_22:
        PiDmListAddObject(0, (ULONG_PTR)P, v17, 0LL);
        v18 = v30;
        do
          ++v14;
        while ( a1[v14] );
        DeviceInterfaceName = PnpSetObjectProperty(
                                *(__int64 *)&PiPnpRtlCtx,
                                (__int64)*a5,
                                3u,
                                (__int64)Handle,
                                0LL,
                                (__int64)&DEVPKEY_Device_InstanceId,
                                18,
                                (__int64)a1,
                                2 * (int)v14 + 2,
                                v30 != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v18 )
            CmDeleteDeviceInterface(PiPnpRtlCtx, (unsigned int)*a5);
        }
        else
        {
          PiDmListAddObject(1u, (ULONG_PTR)v35, v17, 0LL);
          if ( v34 )
            PiDmListAddObject(2u, (ULONG_PTR)v34, v17, 0LL);
        }
        goto LABEL_27;
      }
      DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2);
      if ( DeviceInterfaceName >= 0 )
      {
        v17 = BugCheckParameter2;
        goto LABEL_22;
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v31 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v19, *a5, 1);
    v7 = v34;
    v8 = v35;
    v9 = P;
    goto LABEL_31;
  }
  v7 = v34;
  v8 = v35;
  v9 = P;
LABEL_46:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( v40 )
    PiPnpRtlEndOperation((PVOID **)v40);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v9 + 7), *((_QWORD *)v9 + 2), v11);
    PiDmObjectRelease((unsigned int *)v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v8 + 7), *((_QWORD *)v8 + 2), v11);
    PiDmObjectRelease((unsigned int *)v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v7 + 7), *((_QWORD *)v7 + 2), v11);
    PiDmObjectRelease((unsigned int *)v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
