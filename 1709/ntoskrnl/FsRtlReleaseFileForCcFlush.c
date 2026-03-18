/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x1404E736C
 * Callers:
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MiDestroySection @ 0x14010A894 (MiDestroySection.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140067148 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140067170 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140067200 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1400674F0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140067590 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v1; // ebx
  PDEVICE_OBJECT *v2; // r12
  PFILE_OBJECT v3; // r15
  char v4; // r13
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  int v10; // eax
  char v11; // r13
  __int64 (__fastcall *ReleaseForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v13; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v19[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v20; // [rsp+88h] [rbp-80h]

  v1 = 0;
  v2 = v19;
  HIDWORD(v17) = 0;
  v3 = FileObject;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v3);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
     || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v2 = 0LL;
    goto LABEL_10;
  }
  FsFilterCtrlInit((__int64)v19, 250, (__int64)RelatedDeviceObject, v5, (__int64)v3, 0);
  v10 = FsFilterPerformCallbacks((__int64)v19, 0, 1, (_DWORD *)&v17 + 1);
  v1 = v10;
  if ( v10 < 0 )
    goto LABEL_23;
  if ( !v10 )
  {
    v3 = (PFILE_OBJECT)v19[2];
    if ( (v20 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v19[1]);
      v11 = 1;
      v13 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v13->FastIoDispatch;
      AddDevice = v13->DriverExtension[1].AddDevice;
LABEL_11:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x40u || !*((_QWORD *)AddDevice + 7))
        && (*(_DWORD *)AddDevice < 0x48u || !*((_QWORD *)AddDevice + 8)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0xE0
          && (ReleaseForCcFlush = (__int64 (__fastcall *)(PFILE_OBJECT, PDEVICE_OBJECT))FastIoDispatch->ReleaseForCcFlush) != 0LL )
        {
          v1 = ReleaseForCcFlush(v3, BaseFileSystemDeviceObject);
        }
        else
        {
          v1 = -1073741808;
        }
        HIDWORD(v17) |= 1u;
      }
      if ( v11 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
      goto LABEL_23;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v1 = 0;
  if ( v10 != 294 )
    v1 = v10;
LABEL_23:
  if ( v1 == -1073741808 && (v17 & 0x100000000LL) != 0 )
  {
    FsContext = v3->FsContext;
    v15 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v15 )
      ExReleaseResourceLite(v15);
    v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v16 )
      ExReleaseResourceLite(v16);
    v1 = 0;
  }
  if ( v2 )
  {
    if ( *((_WORD *)v2 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v1);
    FsFilterCtrlFree((__int64)v19);
  }
  KeLeaveCriticalRegion();
}
