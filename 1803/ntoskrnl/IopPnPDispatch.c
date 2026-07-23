/*
 * XREFs of IopPnPDispatch @ 0x1405DC950
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x140145A30 (IoInvalidateDeviceRelations.c)
 *     IopPnPCompleteRequest @ 0x140147C1C (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     IopGetRootDevices @ 0x1405D95DC (IopGetRootDevices.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1405DBD3C (PnpGetDeviceResourcesFromRegistry.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  WCHAR *PoolWithTag; // r14
  unsigned int MinorFunction; // r8d
  NTSTATUS DeviceRegProperty; // ebx
  unsigned int v10; // r8d
  _QWORD *DeviceNode; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rbx
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  PVOID v17; // rcx
  GUID *v18; // rcx
  GUID *v19; // rcx
  LARGE_INTEGER ByteOffset; // rax
  int Length; // eax
  __int64 v22; // rdx
  WCHAR *Src; // rdi
  WCHAR *v24; // rcx
  int v25; // r9d
  WCHAR *v26; // r8
  WCHAR v27; // dx
  WCHAR *v28; // rax
  WCHAR *v29; // rbx
  LARGE_INTEGER v30; // rdx
  void *v31; // rax
  _DWORD *v32; // rcx
  wchar_t *v33; // rax
  __int16 *v34; // rax
  __int16 *v35; // rdi
  __int16 *v36; // rdx
  __int16 v37; // cx
  int v38; // r9d
  __int16 v39; // r10
  int v40; // eax
  int v41; // r9d
  char *v42; // rdx
  __int16 v43; // cx
  signed __int64 v44; // rdx
  int v45; // eax
  _QWORD *v46; // rbx
  __int64 v47; // rdx
  int v48; // edx
  char v49; // r8
  int v50[4]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  WCHAR *v52; // [rsp+A0h] [rbp+50h] BYREF
  int v53; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v52 = 0LL;
  PoolWithTag = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 8 )
  {
    v10 = MinorFunction - 9;
    if ( !v10 )
    {
      if ( DeviceObject )
        DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      LODWORD(SecurityContext->SecurityQos) = 65600;
      if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) )
      {
        HIDWORD(SecurityContext->SecurityQos) |= 0x1C0u;
        HIDWORD(SecurityContext->AccessState) = 0;
      }
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
      SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
      SecurityContext[1].DesiredAccess = 4;
      if ( HIDWORD(SecurityContext->AccessState) == -1 )
      {
        LODWORD(NumberOfBytes) = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    DeviceNode[6],
                    0LL,
                    17,
                    (__int64)&v53,
                    (__int64)v50,
                    (__int64)&NumberOfBytes,
                    0) >= 0
          && v53 == 4
          && (_DWORD)NumberOfBytes == 4 )
        {
          HIDWORD(SecurityContext->AccessState) = v50[0];
        }
      }
      goto LABEL_19;
    }
    v13 = v10 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          if ( CurrentStackLocation->Parameters.Read.Length == 1 && !a2->IoStatus.Information )
          {
            if ( DeviceObject )
              v46 = DeviceObject->DeviceObjectExtension->DeviceNode;
            else
              v46 = 0LL;
            LODWORD(NumberOfBytes) = 0;
            PiGetDeviceRegProperty(v46[6], (__int64)a2, 1, 14, 0LL, (PULONG)&NumberOfBytes);
            if ( !(_DWORD)NumberOfBytes )
              goto LABEL_77;
            PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
            if ( !PoolWithTag )
              goto LABEL_76;
            DeviceRegProperty = PiGetDeviceRegProperty(v46[6], v47, 1, 14, PoolWithTag, (PULONG)&NumberOfBytes);
            if ( DeviceRegProperty < 0 )
            {
              if ( DeviceRegProperty == -1073741275 )
                DeviceRegProperty = -1073741772;
              ExFreePoolWithTag(PoolWithTag, 0);
              PoolWithTag = 0LL;
            }
            goto LABEL_11;
          }
LABEL_10:
          PoolWithTag = (WCHAR *)a2->IoStatus.Information;
          DeviceRegProperty = a2->IoStatus.Status;
          goto LABEL_11;
        }
        v16 = v15 - 7;
        if ( v16 )
        {
          if ( v16 == 3 )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32) )
          goto LABEL_10;
        DeviceRegProperty = a2->IoStatus.Status;
        if ( DeviceRegProperty >= 0 )
        {
          if ( a2->IoStatus.Information )
            goto LABEL_10;
        }
        if ( DeviceObject )
          v3 = DeviceObject->DeviceObjectExtension->DeviceNode;
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( Length )
        {
          if ( Length <= 0 )
            goto LABEL_95;
          if ( Length <= 2 )
          {
            if ( DeviceRegProperty == -1073741637 )
            {
              LODWORD(NumberOfBytes) = 0;
              DeviceRegProperty = PiGetDeviceRegProperty(
                                    v3[6],
                                    (__int64)a2,
                                    7,
                                    (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                                    0LL,
                                    (PULONG)&NumberOfBytes);
              if ( DeviceRegProperty == -1073741789 )
              {
                Src = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
                if ( Src )
                {
                  DeviceRegProperty = PiGetDeviceRegProperty(
                                        v3[6],
                                        v22,
                                        7,
                                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                                        Src,
                                        (PULONG)&NumberOfBytes);
                  v24 = Src;
                  if ( DeviceRegProperty < 0 )
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
                    PoolWithTag = Src;
                  }
                }
                else
                {
                  DeviceRegProperty = -1073741670;
                }
              }
              if ( DeviceRegProperty == -1073741275 )
              {
                PoolWithTag = (WCHAR *)a2->IoStatus.Information;
                DeviceRegProperty = a2->IoStatus.Status;
              }
            }
            goto LABEL_11;
          }
          if ( Length != 3 )
          {
            if ( Length == 5 )
            {
              v33 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
              if ( v33 )
              {
                PoolWithTag = v33;
                wcscpy(v33, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
                DeviceRegProperty = 0;
                goto LABEL_11;
              }
              goto LABEL_76;
            }
LABEL_95:
            PoolWithTag = (WCHAR *)a2->IoStatus.Information;
            goto LABEL_11;
          }
        }
        v34 = (__int16 *)ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v3 + 20), 0x64647050u);
        v35 = v34;
        if ( !v34 )
          goto LABEL_76;
        memset(v34, 0, *((unsigned __int16 *)v3 + 20));
        v36 = (__int16 *)v3[6];
        PoolWithTag = (WCHAR *)v35;
        DeviceRegProperty = 0;
        v37 = *v36;
        if ( CurrentStackLocation->Parameters.Read.Length )
        {
          if ( v37 )
          {
            v41 = 0;
            while ( v37 != 92 || v41 != 1 )
            {
              v45 = v41 + 1;
              if ( v37 != 92 )
                v45 = v41;
              ++v36;
              v41 = v45;
              v37 = *v36;
              if ( !*v36 )
                goto LABEL_11;
            }
            v42 = (char *)(v36 + 1);
            v43 = *(_WORD *)v42;
            if ( *(_WORD *)v42 )
            {
              v44 = v42 - (char *)v35;
              do
              {
                *v35++ = v43;
                v43 = *(__int16 *)((char *)v35 + v44);
              }
              while ( v43 );
            }
          }
        }
        else if ( v37 )
        {
          v38 = 0;
          do
          {
            v39 = v37;
            if ( v37 == 92 )
            {
              v39 = 92;
              if ( v38 == 1 )
                break;
            }
            *v35 = v39;
            v40 = v38 + 1;
            if ( v37 != 92 )
              v40 = v38;
            ++v36;
            ++v35;
            v38 = v40;
            v37 = *v36;
          }
          while ( *v36 );
        }
        goto LABEL_11;
      }
      v48 = 1;
      v49 = 2;
    }
    else
    {
      v48 = 0;
      v49 = 4;
    }
    DeviceRegProperty = PnpGetDeviceResourcesFromRegistry(
                          (__int64)DeviceObject,
                          v48,
                          v49,
                          (void **)&v52,
                          &NumberOfBytes);
    if ( DeviceRegProperty != -1073741772 )
      goto LABEL_62;
    goto LABEL_19;
  }
  if ( MinorFunction != 8 )
  {
    if ( MinorFunction < 2 )
      goto LABEL_19;
    if ( MinorFunction == 2 )
    {
      if ( DeviceObject )
        v32 = DeviceObject->DeviceObjectExtension->DeviceNode;
      else
        v32 = 0LL;
      if ( !v32 || (v32[99] & 0x10000) != 0 )
        IoDeleteDevice(DeviceObject);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(IopRootDeviceNode + 32), SingleBusRelations);
      goto LABEL_19;
    }
    if ( MinorFunction == 3 )
    {
LABEL_19:
      DeviceRegProperty = 0;
      goto LABEL_11;
    }
    if ( MinorFunction > 5 )
    {
      if ( MinorFunction != 6 )
      {
        if ( DeviceObject == *(PDEVICE_OBJECT *)(IopRootDeviceNode + 32)
          && !CurrentStackLocation->Parameters.Read.Length )
        {
          DeviceRegProperty = IopGetRootDevices(&v52);
LABEL_62:
          PoolWithTag = v52;
          goto LABEL_11;
        }
        if ( CurrentStackLocation->Parameters.Read.Length != 4 )
          goto LABEL_10;
        v28 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
        v29 = v28;
        if ( v28 )
        {
          *(_DWORD *)v28 = 1;
          *((_QWORD *)v28 + 1) = DeviceObject;
          ObfReferenceObject(DeviceObject);
          PoolWithTag = v29;
          goto LABEL_59;
        }
LABEL_76:
        DeviceRegProperty = -1073741670;
        goto LABEL_11;
      }
      goto LABEL_19;
    }
LABEL_77:
    DeviceRegProperty = -1073741823;
    goto LABEL_11;
  }
  DeviceRegProperty = a2->IoStatus.Status;
  if ( DeviceObject )
    v17 = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    v17 = 0LL;
  if ( v17 == (PVOID)IopRootDeviceNode )
  {
    v18 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( v18 != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(v18, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v19 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v19 == &GUID_TRANSLATOR_INTERFACE_STANDARD
        || RtlCompareMemory(v19, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
        *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
LABEL_59:
        DeviceRegProperty = 0;
        goto LABEL_11;
      }
      goto LABEL_11;
    }
    v30 = CurrentStackLocation->Parameters.Read.ByteOffset;
    DeviceRegProperty = 0;
    *(_QWORD *)(v30.QuadPart + 32) = ArbArbiterHandler;
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
    {
      v31 = &IopRootPortArbiter;
      goto LABEL_68;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
    {
      v31 = &IopRootIrqArbiter;
      goto LABEL_68;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
    {
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
      {
        v31 = &IopRootDmaArbiter;
LABEL_68:
        *(_QWORD *)(v30.QuadPart + 8) = v31;
        goto LABEL_11;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
      {
        v31 = &IopRootBusNumberArbiter;
        goto LABEL_68;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
      {
        DeviceRegProperty = -1073741811;
        goto LABEL_11;
      }
    }
    v31 = &IopRootMemArbiter;
    goto LABEL_68;
  }
LABEL_11:
  IopPnPCompleteRequest(a2, DeviceRegProperty, (ULONG_PTR)PoolWithTag);
  return (unsigned int)DeviceRegProperty;
}
