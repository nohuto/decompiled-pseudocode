/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1405BA930
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x140519B48 (_PnpStringFromGuid.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1405BACF0 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405BB128 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpAllocateMultiSZ @ 0x1405BB930 (PnpAllocateMultiSZ.c)
 *     PiSwDestroyDeviceObject @ 0x1406CDAA0 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rsi
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
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  ULONG v31; // ecx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  void *v36; // rcx
  _QWORD *v37; // rax
  ULONG_PTR v38; // rbx
  struct _KTHREAD *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  struct _KTHREAD *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  wchar_t *v45; // rax

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
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) != 0 )
            Irp->IoStatus.Information |= 2uLL;
          else
            Irp->IoStatus.Information &= ~2uLL;
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
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v43 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v43;
          LOBYTE(v44) = (v43 & 8) != 0;
          PiSwProcessRemove(DeviceObject, v44);
LABEL_63:
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
          goto LABEL_66;
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
        v36 = (void *)v24[3];
        if ( !v36 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v36);
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
        v45 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v45;
        if ( !v45 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v45);
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
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v30 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_70;
    v31 = CurrentStackLocation->Parameters.Read.Length;
    if ( v31 )
    {
      if ( v31 != 1 )
        goto LABEL_25;
      v19 = *(const wchar_t **)(v30 + 56);
    }
    else
    {
      v19 = *(const wchar_t **)(v30 + 48);
    }
    if ( !v19 )
      goto LABEL_25;
    v20 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      LOBYTE(v33) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, v33);
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
    v39 = KeGetCurrentThread();
    --v39->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v40 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v40;
    LOBYTE(v41) = (v40 & 8) != 0;
    PiSwProcessRemove(DeviceObject, v41);
    if ( (DeviceExtension[2] & 8) == 0 )
      PiSwDestroyDeviceObject(DeviceObject);
    goto LABEL_63;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v37 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v38 = (ULONG_PTR)v37;
    if ( v37 )
    {
      *(_DWORD *)v37 = 1;
      v37[1] = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Irp->IoStatus.Information = v38;
      goto LABEL_20;
    }
LABEL_66:
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
      SecurityContext[1].DesiredAccess = 4;
      HIDWORD(SecurityContext->SecurityQos) |= 0x40u;
      SecurityContext[1].FullCreateOptions = 0;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v10 = HIDWORD(SecurityContext->SecurityQos) | 0x200;
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
