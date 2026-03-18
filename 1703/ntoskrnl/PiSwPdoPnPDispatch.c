/*
 * XREFs of PiSwPdoPnPDispatch @ 0x14045F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14045F680 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045FAB8 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpAllocateMultiSZ @ 0x140460720 (PnpAllocateMultiSZ.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14056D64C (PiSwDestroyDeviceObject.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(_QWORD *Object, PIRP Irp)
{
  _DWORD *v2; // rsi
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
  signed int MultiSZ; // eax
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // r10
  ULONG Length; // ecx
  ULONG v25; // ecx
  ULONG v26; // ecx
  ULONG v27; // ecx
  PVOID v28; // rax
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  ULONG v31; // ecx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  void *v36; // rcx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  struct _KTHREAD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  ULONG_PTR v42; // rbx

  v2 = (_DWORD *)Object[8];
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (v2[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_25;
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
        if ( *(_QWORD *)v2 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v2 + 64LL) & 4) != 0 )
            Irp->IoStatus.Information |= 2uLL;
          else
            Irp->IoStatus.Information &= ~2uLL;
          goto LABEL_12;
        }
LABEL_68:
        Status = -1073741810;
        goto LABEL_24;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_25;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v37 = KeGetCurrentThread();
          --v37->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v38 = ((unsigned __int8)(*((_BYTE *)v2 + 8) | 4) >> 3) & 1;
          v2[2] |= 4u;
          PiSwProcessRemove(Object, v38);
LABEL_58:
          ExReleaseResourceLite(&PiSwLockObj);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( v18 != 2 )
          goto LABEL_25;
        PiSwCompleteCreate(Object);
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
      goto LABEL_25;
    }
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v23 = *(_QWORD **)v2;
    if ( !*(_QWORD *)v2 )
      goto LABEL_68;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v25 = Length - 1;
      if ( !v25 )
      {
        v36 = (void *)v23[3];
        if ( !v36 )
          goto LABEL_24;
        MultiSZ = PnpAllocateMultiSZ(v36);
        goto LABEL_23;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)v2, &Irp->IoStatus.Information);
        goto LABEL_23;
      }
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 != 2 || !v23[5] )
          goto LABEL_24;
        v28 = ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v28;
        if ( !v28 )
        {
          Status = -1073741670;
          goto LABEL_24;
        }
        MultiSZ = PnpStringFromGuid(*(_QWORD *)(*(_QWORD *)v2 + 40LL), v28);
        goto LABEL_23;
      }
      v19 = (const wchar_t *)v23[2];
    }
    else
    {
      v19 = (const wchar_t *)v23[1];
    }
LABEL_22:
    MultiSZ = PnpAllocatePWSTR(v19);
LABEL_23:
    Status = MultiSZ;
    goto LABEL_24;
  }
  if ( MinorFunction == 12 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v30 = *(_QWORD *)v2;
    if ( !*(_QWORD *)v2 )
      goto LABEL_68;
    v31 = CurrentStackLocation->Parameters.Read.Length;
    if ( v31 )
    {
      if ( v31 != 1 )
        goto LABEL_24;
      v19 = *(const wchar_t **)(v30 + 56);
    }
    else
    {
      v19 = *(const wchar_t **)(v30 + 48);
    }
    if ( !v19 )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (v2[2] & 1) == 0 )
    {
      LOBYTE(v33) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)v2, v33);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)v2, 0LL);
      else
        v2[2] |= 1u;
      goto LABEL_24;
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
    v40 = ((unsigned __int8)(*((_BYTE *)v2 + 8) | 2) >> 3) & 1;
    v2[2] |= 2u;
    PiSwProcessRemove(Object, v40);
    if ( (v2[2] & 8) == 0 )
      PiSwDestroyDeviceObject(Object);
    goto LABEL_58;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_25;
    v41 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v42 = (ULONG_PTR)v41;
    if ( v41 )
    {
      *(_DWORD *)v41 = 1;
      v41[1] = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v42;
      goto LABEL_20;
    }
LABEL_66:
    Status = -1073741670;
    goto LABEL_25;
  }
  if ( MinorFunction == 9 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *(_QWORD *)v2 )
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
      v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * *(_DWORD *)(*(_QWORD *)v2 + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*(_QWORD *)v2 + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      v13 = v12 ^ (v12 ^ (*(_DWORD *)(*(_QWORD *)v2 + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v13;
      HIDWORD(SecurityContext->SecurityQos) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*(_QWORD *)v2 + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_24:
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_25;
    }
    goto LABEL_68;
  }
LABEL_25:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
