/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x140510380
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x140510090 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x140510150 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     FsFilterCtrlFree @ 0x140096558 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140096570 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1400965E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1400968B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140096950 (IoGetBaseFileSystemDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(PFILE_OBJECT FileObject, int a2, int a3, __int64 a4)
{
  int v4; // ebx
  char *v5; // rdi
  PFILE_OBJECT v7; // r12
  char v8; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v10; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // r14
  __int64 result; // rax
  struct _KTHREAD *v17; // rax
  int v18; // eax
  int v19; // ecx
  struct _KTHREAD *CurrentThread; // rax
  char v21; // si
  struct _DRIVER_OBJECT *v22; // rax
  void (__fastcall *AcquireFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v25; // rcx
  int v26; // [rsp+30h] [rbp-2A8h] BYREF
  int v27; // [rsp+34h] [rbp-2A4h]
  __int64 v28; // [rsp+38h] [rbp-2A0h]
  struct _FAST_IO_DISPATCH *v29; // [rsp+40h] [rbp-298h]
  char v30[8]; // [rsp+48h] [rbp-290h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-288h]
  struct _FILE_OBJECT *v32; // [rsp+58h] [rbp-280h]
  int v33; // [rsp+60h] [rbp-278h]
  int v34; // [rsp+64h] [rbp-274h]
  __int64 v35; // [rsp+68h] [rbp-270h]
  char v36; // [rsp+88h] [rbp-250h]

  v4 = 0;
  v28 = a4;
  v26 = 0;
  v5 = v30;
  v27 = a3;
  v7 = FileObject;
  v8 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v7);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v29 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v8 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v8 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_31;
  }
  if ( a2 == 1 )
    LOBYTE(v4) = 1;
  result = FsFilterCtrlInit((__int64)v30, 255, (__int64)RelatedDeviceObject, v10, (__int64)v7, v4);
  if ( (int)result >= 0 )
  {
    v34 = v27;
    v35 = v28;
    v33 = a2;
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = FsFilterPerformCallbacks((__int64)v30, v4, v4, &v26);
    v4 = v18;
    if ( v18 < 0 )
    {
LABEL_14:
      if ( v4 == -1073741808 && (v26 & 1) != 0 )
      {
        FsContext = v7->FsContext;
        if ( FsContext )
        {
          v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v25 )
            ExAcquireResourceExclusiveLite(v25, 1u);
        }
        v4 = 0;
      }
      if ( v5 )
      {
        if ( *((_WORD *)v5 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v30, v4);
        FsFilterCtrlFree((__int64)v30);
      }
      if ( v4 < 0 )
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)v4;
    }
    if ( v18 )
    {
      v19 = 0;
      if ( v18 != 294 )
        v19 = v18;
      v4 = v19;
      goto LABEL_14;
    }
    v7 = v32;
    if ( (v36 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v21 = 1;
      v22 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v22->FastIoDispatch;
      AddDevice = v22->DriverExtension[1].AddDevice;
      goto LABEL_32;
    }
    FastIoDispatch = v29;
LABEL_31:
    v21 = 0;
LABEL_32:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && (AcquireFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->AcquireFileForNtCreateSection) != 0LL )
      {
        AcquireFileForNtCreateSection(v7);
      }
      else
      {
        v4 = -1073741808;
      }
      v26 |= 1u;
    }
    if ( v21 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_14;
  }
  return result;
}
