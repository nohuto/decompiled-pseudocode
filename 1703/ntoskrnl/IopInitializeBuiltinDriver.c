/*
 * XREFs of IopInitializeBuiltinDriver @ 0x1407F9B40
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x1407F99D8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     RtlEqualString @ 0x140013F90 (RtlEqualString.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x140459E44 (IopReadyDeviceObjects.c)
 *     ObCreateObject @ 0x14046F580 (ObCreateObject.c)
 *     ObInsertObject @ 0x140493DC0 (ObInsertObject.c)
 *     KseShimDriverIoCallbacks @ 0x1404B3890 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1404B3CA8 (PnpPrepareDriverLoading.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopOpenRegistryKeyEx @ 0x14059C8A8 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140761D60 (VfXdvDriverCaptureIoCallbacks.c)
 *     HdlspKernelAddLogEntry @ 0x14078ECDC (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x1407F9FA4 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  unsigned __int16 *v8; // r15
  int inserted; // edi
  struct _DRIVER_OBJECT *v10; // rbx
  PVOID *i; // rdi
  void *v12; // r13
  PIMAGE_NT_HEADERS v13; // rax
  SIZE_T v14; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v16; // rdi
  UNICODE_STRING *v17; // rdi
  PDRIVER_EXTENSION DriverExtension; // rsi
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rdx
  wchar_t *v21; // rcx
  wchar_t *v22; // rdi
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  SIZE_T v25; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v27; // r12
  unsigned __int16 v28; // cx
  UNICODE_STRING *v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  HANDLE v34; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h]
  PVOID v37; // [rsp+68h] [rbp-21h] BYREF
  int v38; // [rsp+70h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h]
  unsigned __int16 *v40; // [rsp+80h] [rbp-9h]
  int v41; // [rsp+88h] [rbp-1h]
  __int128 v42; // [rsp+90h] [rbp+7h]
  int v43; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v44; // [rsp+E8h] [rbp+5Fh]

  v44 = a2;
  v43 = 0;
  v8 = a1;
  *a6 = 0LL;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v38 = 48;
  v39 = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  v41 = 80;
  v40 = v8;
  v42 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)&v38, 0);
  if ( inserted >= 0 )
  {
    v10 = (struct _DRIVER_OBJECT *)Object;
    memset(Object, 0, 0x1A0uLL);
    v10->DriverExtension = (PDRIVER_EXTENSION)&v10[1];
    *(_QWORD *)&v10[1].Type = v10;
    memset64(v10->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)&v10->Type = 22020100;
    v10->DriverInit = a3;
    inserted = ObInsertObject(v10, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v37, 0LL);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
      {
        if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
        {
          v10->DriverSection = i;
          break;
        }
      }
      InbvIndicateProgress();
      if ( a4 )
      {
        v12 = *(void **)(a4 + 48);
        v13 = RtlImageNtHeader(v12);
        v10->DriverStart = v12;
        v10->DriverSize = v13->OptionalHeader.SizeOfImage;
        if ( (v13->OptionalHeader.DllCharacteristics & 0x2000) != 0 )
          goto LABEL_14;
      }
      else
      {
        v12 = 0LL;
      }
      v10->Flags |= 2u;
LABEL_14:
      v14 = (unsigned int)v8[1] + 2;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNx,
                                v14,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x20206F49u);
      v16 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        v10->DriverName.Buffer = PoolWithTagPriority;
        v10->DriverName.MaximumLength = v8[1];
        v10->DriverName.Length = *v8;
        memmove(v10->DriverName.Buffer, *((const void **)v8 + 1), v8[1]);
        v16[(unsigned __int64)*v8 >> 1] = 0;
      }
      v17 = v44;
      DriverExtension = v10->DriverExtension;
      if ( v44 )
      {
        Length = v44->Length;
        if ( v44->Length )
        {
          Buffer = v44->Buffer;
          v21 = &Buffer[((unsigned __int64)Length >> 1) - 1];
          v22 = v21 - 1;
          if ( *v21 != 92 )
            v22 = &Buffer[((unsigned __int64)Length >> 1) - 1];
          v23 = 0;
          while ( v22 != Buffer )
          {
            if ( *v22 == 92 )
            {
              ++v22;
              break;
            }
            v23 += 2;
            --v22;
          }
          v24 = v23 + 2;
          if ( v22 != Buffer )
            v24 = v23;
          Object = (PVOID)v24;
          v25 = v24 + 2LL;
          if ( ViVerifierDriverAddedThunkListHead )
            PoolWithTag = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v25,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          else
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x20206F49u);
          v27 = PoolWithTag;
          if ( PoolWithTag )
          {
            v28 = (unsigned __int16)Object;
            DriverExtension->ServiceKeyName.Buffer = PoolWithTag;
            DriverExtension->ServiceKeyName.Length = v28;
            DriverExtension->ServiceKeyName.MaximumLength = v28 + 2;
            memmove(PoolWithTag, v22, v28);
            v29 = v44;
            v27[(unsigned __int64)DriverExtension->ServiceKeyName.Length >> 1] = 0;
            inserted = IopOpenRegistryKeyEx(&v34, 0LL, v29, 0xF003Fu);
            if ( inserted >= 0 )
            {
              inserted = PnpPrepareDriverLoading((int)DriverExtension + 24, v34, v12, a5, &v43);
              NtClose(v34);
              if ( inserted >= 0 )
              {
                v17 = v44;
LABEL_36:
                if ( (v43 & 1) != 0 )
                  v10->Flags |= 0x100u;
                v10->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
                KseDriverLoadImage(a4);
                v30 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, UNICODE_STRING *))v10->DriverInit)(v10, v17);
                inserted = v30;
                if ( v30 < 0 )
                {
                  if ( v30 == -1073741218 )
                  {
                    LODWORD(NewObject) = -1073741218;
                    DbgPrintEx(
                      0x65u,
                      3u,
                      "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                      v8,
                      NewObject);
                  }
                  else
                  {
                    LODWORD(NewObject) = v30;
                    DbgPrintEx(
                      0x65u,
                      0,
                      "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                      v8,
                      NewObject);
                  }
                }
                else
                {
                  VfXdvDriverCaptureIoCallbacks(v10);
                  KseShimDriverIoCallbacks(v10, v31, (a4 + 72) & -(__int64)(a4 != 0));
                }
              }
            }
          }
          else
          {
            inserted = -1073741670;
            DriverExtension->ServiceKeyName.Buffer = 0LL;
            DriverExtension->ServiceKeyName.Length = 0;
          }
          NtClose(Handle);
          if ( inserted < 0 )
          {
            if ( inserted != -1073741218 )
              PnpDriverLoadingFailed(0LL, &v10->DriverExtension->ServiceKeyName);
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(3u, 0LL);
            ObMakeTemporaryObject(v10);
            ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          }
          else
          {
            IopReadyDeviceObjects((__int64)v10);
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(2u, 0LL);
            *a6 = v10;
          }
          return (unsigned int)inserted;
        }
      }
      DriverExtension->ServiceKeyName.Buffer = 0LL;
      *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
      goto LABEL_36;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
