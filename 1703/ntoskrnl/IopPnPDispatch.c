/*
 * XREFs of IopPnPDispatch @ 0x14055A4F0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IopPnPCompleteRequest @ 0x14012289C (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     IopGetRootDevices @ 0x14055973C (IopGetRootDevices.c)
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14055BDB4 (PnpGetDeviceResourcesFromRegistry.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  PVOID Information; // r14
  unsigned int MinorFunction; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  NTSTATUS RootDevices; // ebx
  _QWORD *PoolWithTag; // rax
  PVOID v16; // rbx
  _QWORD *v17; // rdx
  PIO_SECURITY_CONTEXT v18; // rbx
  PVOID v19; // rcx
  GUID *SecurityContext; // rcx
  GUID *v21; // rcx
  LARGE_INTEGER ByteOffset; // rax
  int Length; // eax
  int v24; // edx
  char *Src; // rdi
  char *v26; // rcx
  int v27; // r8d
  char *v28; // rdx
  unsigned __int16 v29; // ax
  LARGE_INTEGER v30; // rdx
  void *v31; // rax
  _DWORD *DeviceNode; // rcx
  wchar_t *v33; // rax
  _WORD *v34; // rdi
  int v35; // r12d
  __int16 *v36; // rcx
  __int16 v37; // ax
  _QWORD *v38; // rbx
  int v39; // edx
  int v40; // edx
  int v41; // r8d
  int v42[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v44; // [rsp+A0h] [rbp+50h] BYREF
  int v45; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  *(_QWORD *)v42 = 0LL;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 8 )
  {
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction < 2 )
        goto LABEL_26;
      if ( MinorFunction == 2 )
      {
        if ( DeviceObject )
          DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( !DeviceNode || (DeviceNode[99] & 0x10000) != 0 )
          IoDeleteDevice(DeviceObject);
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(IopRootDeviceNode + 32), SingleBusRelations);
        goto LABEL_26;
      }
      if ( MinorFunction == 3 )
      {
LABEL_26:
        RootDevices = 0;
        goto LABEL_9;
      }
      if ( MinorFunction <= 5 )
        goto LABEL_77;
      if ( MinorFunction == 6 )
        goto LABEL_26;
      if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v42);
        goto LABEL_62;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
        goto LABEL_8;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
      v16 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_76;
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Information = v16;
LABEL_35:
      RootDevices = 0;
      goto LABEL_9;
    }
    RootDevices = a2->IoStatus.Status;
    if ( DeviceObject )
      v19 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v19 = 0LL;
    if ( v19 != (PVOID)IopRootDeviceNode )
      goto LABEL_9;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v21 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v21 != &GUID_TRANSLATOR_INTERFACE_STANDARD
        && RtlCompareMemory(v21, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
      {
        goto LABEL_9;
      }
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
      goto LABEL_35;
    }
    v30 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v30.QuadPart + 32) = ArbArbiterHandler;
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
    {
      v31 = &IopRootPortArbiter;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
    {
      v31 = &IopRootIrqArbiter;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
    {
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
      {
        v31 = &IopRootDmaArbiter;
LABEL_71:
        *(_QWORD *)(v30.QuadPart + 8) = v31;
        goto LABEL_9;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
      {
        v31 = &IopRootBusNumberArbiter;
        goto LABEL_71;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
      {
        RootDevices = -1073741811;
        goto LABEL_9;
      }
    }
    v31 = &IopRootMemArbiter;
    goto LABEL_71;
  }
  v8 = MinorFunction - 9;
  if ( !v8 )
  {
    if ( DeviceObject )
      v17 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v17 = 0LL;
    v18 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v18->SecurityQos) = 65600;
    if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) )
    {
      HIDWORD(v18->SecurityQos) |= 0x1C0u;
      HIDWORD(v18->AccessState) = 0;
    }
    v18->DesiredAccess = 0;
    v18->FullCreateOptions = 1;
    v18[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
    v18[1].AccessState = (PACCESS_STATE)0x400000004LL;
    v18[1].DesiredAccess = 4;
    if ( HIDWORD(v18->AccessState) == -1 )
    {
      LODWORD(NumberOfBytes) = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v17[6],
                  0LL,
                  17,
                  (__int64)&v44,
                  (__int64)&v45,
                  (__int64)&NumberOfBytes,
                  0) >= 0
        && v44 == 4
        && (_DWORD)NumberOfBytes == 4 )
      {
        HIDWORD(v18->AccessState) = v45;
      }
    }
    goto LABEL_26;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v40 = 0;
    v41 = 4;
LABEL_125:
    RootDevices = PnpGetDeviceResourcesFromRegistry((int)DeviceObject, v40, v41, (int)v42, &NumberOfBytes);
    if ( RootDevices == -1073741772 )
      goto LABEL_26;
LABEL_62:
    Information = *(PVOID *)v42;
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v40 = 1;
    v41 = 2;
    goto LABEL_125;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_8;
    if ( DeviceObject )
      v38 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v38 = 0LL;
    LODWORD(NumberOfBytes) = 0;
    PiGetDeviceRegProperty(v38[6], (int)a2, 1, 14, 0LL, (PULONG)&NumberOfBytes);
    if ( (_DWORD)NumberOfBytes )
    {
      Information = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
      if ( Information )
      {
        RootDevices = PiGetDeviceRegProperty(v38[6], v39, 1, 14, Information, (PULONG)&NumberOfBytes);
        if ( RootDevices < 0 )
        {
          if ( RootDevices == -1073741275 )
            RootDevices = -1073741772;
          ExFreePoolWithTag(Information, 0);
          Information = 0LL;
        }
        goto LABEL_9;
      }
      goto LABEL_76;
    }
LABEL_77:
    RootDevices = -1073741823;
    goto LABEL_9;
  }
  v12 = v11 - 7;
  if ( v12 )
  {
    if ( v12 != 3 )
    {
LABEL_8:
      Information = (PVOID)a2->IoStatus.Information;
      RootDevices = a2->IoStatus.Status;
      goto LABEL_9;
    }
    goto LABEL_26;
  }
  if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) )
    goto LABEL_8;
  RootDevices = a2->IoStatus.Status;
  if ( RootDevices >= 0 )
  {
    if ( a2->IoStatus.Information )
      goto LABEL_8;
  }
  if ( DeviceObject )
    v3 = DeviceObject->DeviceObjectExtension->DeviceNode;
  Length = CurrentStackLocation->Parameters.Read.Length;
  *(_QWORD *)v42 = v3;
  if ( Length )
  {
    if ( Length <= 0 )
      goto LABEL_95;
    if ( Length <= 2 )
    {
      if ( RootDevices == -1073741637 )
      {
        LODWORD(NumberOfBytes) = 0;
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        (int)a2,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        0LL,
                        (PULONG)&NumberOfBytes);
        if ( RootDevices == -1073741789 )
        {
          Src = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
          if ( Src )
          {
            RootDevices = PiGetDeviceRegProperty(
                            v3[6],
                            v24,
                            7,
                            (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                            Src,
                            (PULONG)&NumberOfBytes);
            v26 = Src;
            if ( RootDevices < 0 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v27 = NumberOfBytes;
              v28 = 0LL;
              if ( Src < &Src[NumberOfBytes & 0xFFFFFFFE] )
              {
                do
                {
                  v29 = *(_WORD *)v26;
                  if ( *(_WORD *)v26 )
                  {
                    if ( v29 < 0x20u || v29 > 0x7Fu || v29 == 44 )
                    {
                      *(_WORD *)v26 = 63;
                      v27 = NumberOfBytes;
                    }
                  }
                  else
                  {
                    if ( v28 && v26 == v28 + 2 )
                      break;
                    v28 = v26;
                  }
                  v26 += 2;
                }
                while ( v26 < &Src[v27 & 0xFFFFFFFE] );
              }
              Information = Src;
            }
          }
          else
          {
            RootDevices = -1073741670;
          }
        }
        if ( RootDevices == -1073741275 )
        {
          Information = (PVOID)a2->IoStatus.Information;
          RootDevices = a2->IoStatus.Status;
        }
      }
      goto LABEL_9;
    }
    if ( Length != 3 )
    {
      if ( Length == 5 )
      {
        v33 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
        if ( v33 )
        {
          Information = v33;
          wcscpy(v33, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
          RootDevices = 0;
          goto LABEL_9;
        }
        goto LABEL_76;
      }
LABEL_95:
      Information = (PVOID)a2->IoStatus.Information;
      goto LABEL_9;
    }
  }
  v34 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v3 + 20), 0x64647050u);
  if ( !v34 )
  {
LABEL_76:
    RootDevices = -1073741670;
    goto LABEL_9;
  }
  v35 = 0;
  memset(v34, 0, *(unsigned __int16 *)(*(_QWORD *)v42 + 40LL));
  Information = v34;
  RootDevices = 0;
  v36 = *(__int16 **)(*(_QWORD *)v42 + 48LL);
  v37 = *v36;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( v37 )
    {
      while ( v37 != 92 || ++v35 != 2 )
      {
        v37 = *++v36;
        if ( !*v36 )
          goto LABEL_110;
      }
      ++v36;
LABEL_110:
      while ( *v36 )
        *v34++ = *v36++;
    }
  }
  else
  {
    while ( v37 )
    {
      if ( v37 == 92 && ++v35 == 2 )
        break;
      *v34++ = v37;
      v37 = *++v36;
    }
  }
LABEL_9:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
