/*
 * XREFs of IopPnPDispatch @ 0x1405B9E90
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     IopPnPCompleteRequest @ 0x14013A680 (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140557EA8 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRootDevices @ 0x1405BA328 (IopGetRootDevices.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  WCHAR *Information; // r14
  unsigned int MinorFunction; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  NTSTATUS RootDevices; // ebx
  _QWORD *v15; // rdx
  PIO_SECURITY_CONTEXT v16; // rbx
  PVOID v17; // rcx
  GUID *SecurityContext; // rcx
  GUID *v19; // rcx
  LARGE_INTEGER ByteOffset; // rax
  int Length; // eax
  __int64 v22; // rdx
  WCHAR *Src; // rdi
  WCHAR *v24; // rcx
  int v25; // r9d
  WCHAR *v26; // r8
  WCHAR v27; // dx
  LARGE_INTEGER v28; // rdx
  void *v29; // rax
  WCHAR *PoolWithTag; // rax
  WCHAR *v31; // rbx
  _DWORD *DeviceNode; // rcx
  wchar_t *v33; // rax
  _WORD *v34; // rdi
  int v35; // r12d
  __int16 *v36; // rcx
  __int16 v37; // ax
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  int v40; // edx
  char v41; // r8
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
        goto LABEL_25;
      if ( MinorFunction == 2 )
      {
        if ( DeviceObject )
          DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( !DeviceNode || (DeviceNode[99] & 0x10000) != 0 )
          IoDeleteDevice(DeviceObject);
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(IopRootDeviceNode + 32), SingleBusRelations);
        goto LABEL_25;
      }
      if ( MinorFunction == 3 )
      {
LABEL_25:
        RootDevices = 0;
        goto LABEL_18;
      }
      if ( MinorFunction <= 5 )
        goto LABEL_77;
      if ( MinorFunction == 6 )
        goto LABEL_25;
      if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v42);
        goto LABEL_65;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      {
LABEL_17:
        Information = (WCHAR *)a2->IoStatus.Information;
        RootDevices = a2->IoStatus.Status;
        goto LABEL_18;
      }
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
      v31 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_76;
      *(_DWORD *)PoolWithTag = 1;
      *((_QWORD *)PoolWithTag + 1) = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Information = v31;
LABEL_34:
      RootDevices = 0;
      goto LABEL_18;
    }
    RootDevices = a2->IoStatus.Status;
    if ( DeviceObject )
      v17 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v17 = 0LL;
    if ( v17 != (PVOID)IopRootDeviceNode )
      goto LABEL_18;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v19 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v19 != &GUID_TRANSLATOR_INTERFACE_STANDARD
        && RtlCompareMemory(v19, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
      {
        goto LABEL_18;
      }
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
      goto LABEL_34;
    }
    v28 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v28.QuadPart + 32) = ArbArbiterHandler;
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
    {
      v29 = &IopRootPortArbiter;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
    {
      v29 = &IopRootIrqArbiter;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
    {
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
      {
        v29 = &IopRootDmaArbiter;
LABEL_71:
        *(_QWORD *)(v28.QuadPart + 8) = v29;
        goto LABEL_18;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
      {
        v29 = &IopRootBusNumberArbiter;
        goto LABEL_71;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
      {
        RootDevices = -1073741811;
        goto LABEL_18;
      }
    }
    v29 = &IopRootMemArbiter;
    goto LABEL_71;
  }
  v8 = MinorFunction - 9;
  if ( !v8 )
  {
    if ( DeviceObject )
      v15 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v15 = 0LL;
    v16 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v16->SecurityQos) = 65600;
    if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) )
    {
      HIDWORD(v16->SecurityQos) |= 0x1C0u;
      HIDWORD(v16->AccessState) = 0;
    }
    v16->DesiredAccess = 0;
    v16->FullCreateOptions = 1;
    v16[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
    v16[1].AccessState = (PACCESS_STATE)0x400000004LL;
    v16[1].DesiredAccess = 4;
    if ( HIDWORD(v16->AccessState) == -1 )
    {
      LODWORD(NumberOfBytes) = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v15[6],
                  0LL,
                  17,
                  (__int64)&v44,
                  (__int64)&v45,
                  (__int64)&NumberOfBytes,
                  0) >= 0
        && v44 == 4
        && (_DWORD)NumberOfBytes == 4 )
      {
        HIDWORD(v16->AccessState) = v45;
      }
    }
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v40 = 0;
    v41 = 4;
LABEL_125:
    RootDevices = PnpGetDeviceResourcesFromRegistry((__int64)DeviceObject, v40, v41, (void **)v42, &NumberOfBytes);
    if ( RootDevices == -1073741772 )
      goto LABEL_25;
LABEL_65:
    Information = *(WCHAR **)v42;
    goto LABEL_18;
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
      goto LABEL_17;
    if ( DeviceObject )
      v38 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v38 = 0LL;
    LODWORD(NumberOfBytes) = 0;
    PiGetDeviceRegProperty(v38[6], (__int64)a2, 1, 14, 0LL, (PULONG)&NumberOfBytes);
    if ( (_DWORD)NumberOfBytes )
    {
      Information = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
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
        goto LABEL_18;
      }
      goto LABEL_76;
    }
LABEL_77:
    RootDevices = -1073741823;
    goto LABEL_18;
  }
  v12 = v11 - 7;
  if ( v12 )
  {
    if ( v12 != 3 )
      goto LABEL_17;
    goto LABEL_25;
  }
  if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) )
    goto LABEL_17;
  RootDevices = a2->IoStatus.Status;
  if ( RootDevices >= 0 )
  {
    if ( a2->IoStatus.Information )
      goto LABEL_17;
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
                        (__int64)a2,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        0LL,
                        (PULONG)&NumberOfBytes);
        if ( RootDevices == -1073741789 )
        {
          Src = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
          if ( Src )
          {
            RootDevices = PiGetDeviceRegProperty(
                            v3[6],
                            v22,
                            7,
                            (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                            Src,
                            (PULONG)&NumberOfBytes);
            v24 = Src;
            if ( RootDevices < 0 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v25 = NumberOfBytes;
              v26 = 0LL;
              if ( Src < (WCHAR *)((char *)Src + ((unsigned int)NumberOfBytes & 0xFFFFFFFE)) )
              {
                do
                {
                  v27 = *v24;
                  if ( *v24 )
                  {
                    if ( (unsigned __int16)(v27 - 32) > 0x5Fu || v27 == 44 )
                    {
                      *v24 = 63;
                      v25 = NumberOfBytes;
                    }
                  }
                  else
                  {
                    if ( v26 && v24 == v26 + 1 )
                      break;
                    v26 = v24;
                  }
                  ++v24;
                }
                while ( v24 < (WCHAR *)((char *)Src + (v25 & 0xFFFFFFFE)) );
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
          Information = (WCHAR *)a2->IoStatus.Information;
          RootDevices = a2->IoStatus.Status;
        }
      }
      goto LABEL_18;
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
          goto LABEL_18;
        }
        goto LABEL_76;
      }
LABEL_95:
      Information = (WCHAR *)a2->IoStatus.Information;
      goto LABEL_18;
    }
  }
  v34 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v3 + 20), 0x64647050u);
  if ( !v34 )
  {
LABEL_76:
    RootDevices = -1073741670;
    goto LABEL_18;
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
LABEL_18:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
