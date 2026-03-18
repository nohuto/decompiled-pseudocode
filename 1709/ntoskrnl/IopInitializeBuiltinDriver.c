/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140846850
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x1408466E8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     RtlEqualString @ 0x140113090 (RtlEqualString.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObject @ 0x14045D000 (ObCreateObject.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404FA190 (ObInsertObject.c)
 *     KseShimDriverIoCallbacks @ 0x14054418C (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1405445A8 (PnpPrepareDriverLoading.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     IopReadyDeviceObjects @ 0x1405998EC (IopReadyDeviceObjects.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IopOpenRegistryKeyEx @ 0x1405C9264 (IopOpenRegistryKeyEx.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407A21FC (VfXdvDriverCaptureIoCallbacks.c)
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x140846C84 (InbvIndicateProgress.c)
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
  unsigned __int16 *v10; // r14
  int inserted; // edi
  struct _DRIVER_OBJECT *v12; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v14; // rax
  _WORD *Pool; // rax
  _WORD *v16; // rdi
  PDRIVER_EXTENSION DriverExtension; // r15
  wchar_t *Buffer; // rdx
  unsigned __int64 v19; // rax
  wchar_t *v20; // rdi
  unsigned __int16 j; // cx
  unsigned __int16 v22; // ax
  PVOID v23; // rax
  void *v24; // r9
  PVOID v25; // rax
  unsigned __int16 v26; // cx
  int v27; // eax
  __int64 v28; // rdx
  PVOID *NewObject; // [rsp+28h] [rbp-59h]
  HANDLE v31; // [rsp+58h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-21h] BYREF
  PVOID Object; // [rsp+68h] [rbp-19h]
  PVOID v34; // [rsp+70h] [rbp-11h] BYREF
  int v35; // [rsp+78h] [rbp-9h] BYREF
  __int64 v36; // [rsp+80h] [rbp-1h]
  unsigned __int16 *v37; // [rsp+88h] [rbp+7h]
  int v38; // [rsp+90h] [rbp+Fh]
  __int128 v39; // [rsp+98h] [rbp+17h]
  int v40; // [rsp+D8h] [rbp+57h] BYREF

  v6 = 0LL;
  v40 = 0;
  v10 = a1;
  *a6 = 0LL;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v35 = 48;
  v36 = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  v38 = 80;
  v37 = v10;
  v39 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)&v35, 0);
  if ( inserted >= 0 )
  {
    v12 = (struct _DRIVER_OBJECT *)Object;
    memset(Object, 0, 0x1A0uLL);
    v12->DriverExtension = (PDRIVER_EXTENSION)&v12[1];
    *(_QWORD *)&v12[1].Type = v12;
    memset64(v12->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)&v12->Type = 22020100;
    v12->DriverInit = a3;
    inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v34, 0LL);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
      {
        if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
        {
          v12->DriverSection = i;
          break;
        }
      }
      InbvIndicateProgress();
      if ( !a4
        || (v6 = *(void **)(a4 + 48),
            v14 = RtlImageNtHeader(v6),
            v12->DriverStart = v6,
            v12->DriverSize = v14->OptionalHeader.SizeOfImage,
            (v14->OptionalHeader.DllCharacteristics & 0x2000) == 0) )
      {
        v12->Flags |= 2u;
      }
      Pool = IopVerifierExAllocatePool(NonPagedPoolNx, (unsigned int)v10[1] + 2);
      v16 = Pool;
      if ( Pool )
      {
        v12->DriverName.Buffer = Pool;
        v12->DriverName.MaximumLength = v10[1];
        v12->DriverName.Length = *v10;
        memmove(v12->DriverName.Buffer, *((const void **)v10 + 1), v10[1]);
        v16[(unsigned __int64)*v10 >> 1] = 0;
      }
      DriverExtension = v12->DriverExtension;
      if ( a2 && a2->Length )
      {
        Buffer = a2->Buffer;
        v19 = (unsigned __int64)a2->Length >> 1;
        v20 = &Buffer[v19 - 1];
        if ( *v20 != 92 )
          v20 = &Buffer[v19];
        for ( j = 0; --v20 != Buffer; j += 2 )
        {
          if ( *v20 == 92 )
          {
            ++v20;
            break;
          }
        }
        v22 = j + 2;
        if ( v20 != Buffer )
          v22 = j;
        Object = (PVOID)v22;
        v23 = IopVerifierExAllocatePool(NonPagedPoolNx, v22 + 2LL);
        v34 = v23;
        v24 = v23;
        if ( v23 )
        {
          DriverExtension->ServiceKeyName.Buffer = (wchar_t *)v23;
          v25 = Object;
          v26 = (_WORD)Object + 2;
          DriverExtension->ServiceKeyName.Length = (unsigned __int16)Object;
          DriverExtension->ServiceKeyName.MaximumLength = v26;
          memmove(v24, v20, (size_t)v25);
          *((_WORD *)v34 + ((unsigned __int64)DriverExtension->ServiceKeyName.Length >> 1)) = 0;
          inserted = IopOpenRegistryKeyEx(&v31, 0LL, a2, 0xF003Fu);
          if ( inserted >= 0 )
          {
            inserted = PnpPrepareDriverLoading((int)DriverExtension + 24, v31, v6, a5, &v40);
            NtClose(v31);
            if ( inserted >= 0 )
              goto LABEL_31;
          }
        }
        else
        {
          inserted = -1073741670;
          DriverExtension->ServiceKeyName.Buffer = 0LL;
          DriverExtension->ServiceKeyName.Length = 0;
        }
LABEL_35:
        NtClose(Handle);
        if ( inserted < 0 )
        {
          if ( inserted != -1073741218 )
            PnpDriverLoadingFailed(0LL, &v12->DriverExtension->ServiceKeyName);
          if ( HeadlessGlobals && HeadlessGlobals[1] )
            HdlspKernelAddLogEntry(3u, 0LL);
          ObMakeTemporaryObject(v12);
          ObfDereferenceObjectWithTag(v12, 0x746C6644u);
        }
        else
        {
          IopReadyDeviceObjects((__int64)v12);
          if ( HeadlessGlobals && HeadlessGlobals[1] )
            HdlspKernelAddLogEntry(2u, 0LL);
          *a6 = v12;
        }
        return (unsigned int)inserted;
      }
      DriverExtension->ServiceKeyName.Buffer = 0LL;
      *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
LABEL_31:
      if ( (v40 & 1) != 0 )
        v12->Flags |= 0x100u;
      v12->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
      KseDriverLoadImage(a4);
      v27 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, UNICODE_STRING *))v12->DriverInit)(v12, a2);
      inserted = v27;
      if ( v27 < 0 )
      {
        if ( v27 == -1073741218 )
        {
          LODWORD(NewObject) = -1073741218;
          DbgPrintEx(
            0x65u,
            3u,
            "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
            v10,
            NewObject);
        }
        else
        {
          LODWORD(NewObject) = v27;
          DbgPrintEx(0x65u, 0, "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n", v10, NewObject);
        }
      }
      else
      {
        VfXdvDriverCaptureIoCallbacks(v12);
        KseShimDriverIoCallbacks(v12, v28, (a4 + 72) & -(__int64)(a4 != 0));
      }
      goto LABEL_35;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
