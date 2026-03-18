/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1405C53E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405045F0 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x14050B138 (_PnpStringFromGuid.c)
 *     PiSwProcessRemove @ 0x1405C3D0C (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x1405C3E28 (PiSwDestroyDeviceObject.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1405C5870 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405C5C8C (PiSwDeviceInterfacesUpdateState.c)
 *     PnpAllocateMultiSZ @ 0x1405C7038 (PnpAllocateMultiSZ.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  const wchar_t *v19; // rcx
  size_t v20; // rdx
  signed int MultiSZ; // eax
  struct _KTHREAD *v23; // rax
  _QWORD *v24; // r10
  ULONG Length; // ecx
  ULONG v26; // ecx
  ULONG v27; // ecx
  ULONG v28; // ecx
  wchar_t *v29; // rax
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  ULONG v32; // ecx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rdx
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rcx
  ULONG_PTR v38; // rcx
  void *v39; // rcx
  struct _KTHREAD *v40; // rax
  int v41; // eax
  struct _KTHREAD *v42; // rax
  int v43; // eax
  _QWORD *v44; // rax
  ULONG_PTR v45; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_26;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v14 = MinorFunction - 19;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( *(_QWORD *)DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) != 0 )
            v38 = Information | 2;
          else
            v38 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          Irp->IoStatus.Information = v38;
          goto LABEL_12;
        }
LABEL_70:
        Status = -1073741810;
        goto LABEL_25;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_26;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v41 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v41;
          PiSwProcessRemove((__int64)DeviceObject, (v41 & 8) != 0);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( v18 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(DeviceObject);
      }
      else
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !PoolWithTag )
          goto LABEL_68;
        *(_DWORD *)&PoolWithTag[1].Data2 = 0;
        PoolWithTag[1].Data1 = 15;
        *PoolWithTag = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      }
LABEL_20:
      Status = 0;
      goto LABEL_26;
    }
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v24 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_70;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v26 = Length - 1;
      if ( !v26 )
      {
        v39 = (void *)v24[3];
        if ( !v39 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v39);
        goto LABEL_24;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 2 || !v24[5] )
          goto LABEL_25;
        v29 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v29;
        if ( !v29 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v29);
        goto LABEL_24;
      }
      v19 = (const wchar_t *)v24[2];
    }
    else
    {
      v19 = (const wchar_t *)v24[1];
    }
    v20 = 200LL;
LABEL_23:
    MultiSZ = PnpAllocatePWSTR(v19, v20, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_24:
    Status = MultiSZ;
    goto LABEL_25;
  }
  if ( MinorFunction == 12 )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v31 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_70;
    v32 = CurrentStackLocation->Parameters.Read.Length;
    if ( v32 )
    {
      if ( v32 != 1 )
        goto LABEL_25;
      v19 = *(const wchar_t **)(v31 + 56);
    }
    else
    {
      v19 = *(const wchar_t **)(v31 + 48);
    }
    if ( !v19 )
      goto LABEL_25;
    v20 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      LOBYTE(v34) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, v34);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 0LL);
      else
        DeviceExtension[2] |= 1u;
      goto LABEL_25;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_20;
  if ( MinorFunction == 2 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v43 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v43;
    PiSwProcessRemove((__int64)DeviceObject, (v43 & 8) != 0);
    if ( (DeviceExtension[2] & 8) == 0 )
      PiSwDestroyDeviceObject(DeviceObject);
    goto LABEL_59;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v44 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v45 = (ULONG_PTR)v44;
    if ( v44 )
    {
      *(_DWORD *)v44 = 1;
      v44[1] = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Irp->IoStatus.Information = v45;
      goto LABEL_20;
    }
LABEL_68:
    Status = -1073741670;
    goto LABEL_26;
  }
  if ( MinorFunction == 9 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *(_QWORD *)DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
      SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
      *(_QWORD *)&SecurityContext[1].DesiredAccess = 4LL;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v10 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v10;
      v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*(_QWORD *)DeviceExtension
                                                                                       + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      v13 = v12 ^ (v12 ^ (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v13;
      HIDWORD(SecurityContext->SecurityQos) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_25:
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_26;
    }
    goto LABEL_70;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
