/*
 * XREFs of IopInitializeBuiltinDriver @ 0x1408B670C
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x1408B65A4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlEqualString @ 0x1400AF960 (RtlEqualString.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObInsertObject @ 0x1404BF190 (ObInsertObject.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 *     ObCreateObject @ 0x140544A50 (ObCreateObject.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopReadyDeviceObjects @ 0x1405F6DDC (IopReadyDeviceObjects.c)
 *     KseShimDriverIoCallbacks @ 0x1405FB47C (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1405FB610 (PnpPrepareDriverLoading.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     IopOpenRegistryKeyEx @ 0x1406343E4 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x14080EE78 (VfXdvDriverCaptureIoCallbacks.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x1408B6B28 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  void *v6; // r12
  unsigned __int16 *p_Length; // r13
  char PreviousMode; // cl
  int inserted; // edi
  struct _DRIVER_OBJECT *v13; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v15; // rax
  _WORD *Pool; // rax
  _WORD *v17; // rdi
  PDRIVER_EXTENSION DriverExtension; // r15
  _WORD *v19; // rdx
  unsigned __int64 v20; // rax
  _WORD *v21; // rdi
  unsigned __int16 j; // cx
  unsigned __int16 v23; // ax
  PVOID v24; // r9
  UNICODE_STRING *p_ServiceKeyName; // r13
  PVOID v26; // rax
  unsigned __int16 v27; // cx
  UNICODE_STRING *v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  HANDLE v33; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  PVOID v36; // [rsp+68h] [rbp-21h] BYREF
  int v37; // [rsp+70h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-11h]
  unsigned __int16 *v39; // [rsp+80h] [rbp-9h]
  int v40; // [rsp+88h] [rbp-1h]
  __int128 v41; // [rsp+90h] [rbp+7h]
  int v42; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v43; // [rsp+E8h] [rbp+5Fh]

  v43 = a2;
  v6 = 0LL;
  v42 = 0;
  p_Length = &a2->Length;
  *a6 = 0LL;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v37 = 48;
  v38 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v40 = 80;
  v39 = a1;
  v41 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (int)&v37, 0, 0, 416, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    v13 = (struct _DRIVER_OBJECT *)Object;
    memset(Object, 0, 0x1A0uLL);
    v13->DriverExtension = (PDRIVER_EXTENSION)&v13[1];
    *(_QWORD *)&v13[1].Type = v13;
    memset64(v13->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)&v13->Type = 22020100;
    v13->DriverInit = a3;
    inserted = ObInsertObject(v13, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v36, 0LL);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
      {
        if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
        {
          v13->DriverSection = i;
          break;
        }
      }
      InbvIndicateProgress();
      if ( !a4
        || (v6 = *(void **)(a4 + 48),
            v15 = RtlImageNtHeader(v6),
            v13->DriverStart = v6,
            v13->DriverSize = v15->OptionalHeader.SizeOfImage,
            (v15->OptionalHeader.DllCharacteristics & 0x2000) == 0) )
      {
        v13->Flags |= 2u;
      }
      Pool = IopVerifierExAllocatePool(NonPagedPoolNx, (unsigned int)a1[1] + 2);
      v17 = Pool;
      if ( Pool )
      {
        v13->DriverName.Buffer = Pool;
        v13->DriverName.MaximumLength = a1[1];
        v13->DriverName.Length = *a1;
        memmove(v13->DriverName.Buffer, *((const void **)a1 + 1), a1[1]);
        v17[(unsigned __int64)*a1 >> 1] = 0;
      }
      DriverExtension = v13->DriverExtension;
      if ( p_Length && *p_Length )
      {
        v19 = (_WORD *)*((_QWORD *)p_Length + 1);
        v20 = (unsigned __int64)*p_Length >> 1;
        v21 = &v19[v20 - 1];
        if ( *v21 != 92 )
          v21 = &v19[v20];
        for ( j = 0; --v21 != v19; j += 2 )
        {
          if ( *v21 == 92 )
          {
            ++v21;
            break;
          }
        }
        v23 = j + 2;
        if ( v21 != v19 )
          v23 = j;
        Object = (PVOID)v23;
        v24 = IopVerifierExAllocatePool(NonPagedPoolNx, v23 + 2LL);
        v36 = v24;
        p_ServiceKeyName = &DriverExtension->ServiceKeyName;
        if ( v24 )
        {
          v26 = Object;
          v27 = (_WORD)Object + 2;
          DriverExtension->ServiceKeyName.Buffer = (wchar_t *)v24;
          DriverExtension->ServiceKeyName.MaximumLength = v27;
          p_ServiceKeyName->Length = (unsigned __int16)v26;
          memmove(v24, v21, (size_t)v26);
          v28 = v43;
          *((_WORD *)v36 + ((unsigned __int64)p_ServiceKeyName->Length >> 1)) = 0;
          inserted = IopOpenRegistryKeyEx(&v33, 0LL, v28, 0xF003Fu);
          if ( inserted >= 0 )
          {
            inserted = PnpPrepareDriverLoading((int)p_ServiceKeyName, v33, v6, a5, &v42);
            NtClose(v33);
            if ( inserted >= 0 )
            {
              p_Length = &v43->Length;
LABEL_32:
              if ( (v42 & 1) != 0 )
                v13->Flags |= 0x100u;
              v13->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
              KseDriverLoadImage(a4);
              v29 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, unsigned __int16 *))v13->DriverInit)(
                      v13,
                      p_Length);
              inserted = v29;
              if ( v29 < 0 )
              {
                if ( v29 == -1073741218 )
                {
                  LODWORD(NewObject) = -1073741218;
                  DbgPrintEx(
                    0x65u,
                    3u,
                    "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                    a1,
                    NewObject);
                }
                else
                {
                  LODWORD(NewObject) = v29;
                  DbgPrintEx(
                    0x65u,
                    0,
                    "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                    a1,
                    NewObject);
                }
              }
              else
              {
                VfXdvDriverCaptureIoCallbacks(v13);
                KseShimDriverIoCallbacks(v13, v30, (a4 + 72) & -(__int64)(a4 != 0));
              }
            }
          }
        }
        else
        {
          DriverExtension->ServiceKeyName.Buffer = 0LL;
          inserted = -1073741670;
          p_ServiceKeyName->Length = 0;
        }
        NtClose(Handle);
        if ( inserted < 0 )
        {
          if ( inserted != -1073741218 )
            PnpDriverLoadingFailed(0LL, &v13->DriverExtension->ServiceKeyName);
          if ( HeadlessGlobals && HeadlessGlobals[1] )
            HdlspKernelAddLogEntry(3u, 0LL);
          ObMakeTemporaryObject(v13);
          ObfDereferenceObjectWithTag(v13, 0x746C6644u);
        }
        else
        {
          IopReadyDeviceObjects((__int64)v13);
          if ( HeadlessGlobals && HeadlessGlobals[1] )
            HdlspKernelAddLogEntry(2u, 0LL);
          *a6 = v13;
        }
        return (unsigned int)inserted;
      }
      *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
      DriverExtension->ServiceKeyName.Buffer = 0LL;
      goto LABEL_32;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
