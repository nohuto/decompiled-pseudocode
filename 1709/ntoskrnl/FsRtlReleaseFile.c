/*
 * XREFs of FsRtlReleaseFile @ 0x14049C430
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400B7580 (FsRtlCreateSectionForDataScan.c)
 *     CcClearPrivateWriteFile @ 0x1401E0E7C (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401E1390 (CcSetPrivateWriteFile.c)
 *     MiShareExistingControlArea @ 0x14049C820 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
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

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  char v1; // si
  char *v2; // r14
  PFILE_OBJECT v3; // r15
  unsigned int v4; // edi
  char v5; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rcx
  __int64 v8; // r9
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  int v12; // eax
  PVOID v13; // r13
  char v14; // r12
  void (__fastcall *ReleaseFileForNtCreateSection)(PFILE_OBJECT); // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DRIVER_OBJECT *v17; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v19; // rcx
  int v20; // [rsp+30h] [rbp-278h] BYREF
  PVOID Object; // [rsp+38h] [rbp-270h]
  char v22[8]; // [rsp+40h] [rbp-268h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-260h]
  struct _FILE_OBJECT *v24; // [rsp+50h] [rbp-258h]
  char v25; // [rsp+80h] [rbp-228h]

  v1 = 0;
  v2 = v22;
  v20 = 0;
  v3 = FileObject;
  v4 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v3);
  Object = BaseFileSystemDeviceObject;
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
     || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v2 = 0LL;
    v13 = BaseFileSystemDeviceObject;
    goto LABEL_11;
  }
  FsFilterCtrlInit((__int64)v22, 254, (__int64)RelatedDeviceObject, v8, (__int64)v3, 0);
  v12 = FsFilterPerformCallbacks((__int64)v22, 0, 0, &v20);
  v4 = v12;
  if ( v12 < 0 )
  {
LABEL_33:
    v1 = v20;
    goto LABEL_24;
  }
  if ( v12 )
  {
    if ( v12 == 294 )
    {
      v4 = 0;
LABEL_26:
      if ( *((_WORD *)v2 + 37) )
        FsFilterPerformCompletionCallbacks((__int64)v22, v4);
      FsFilterCtrlFree((__int64)v22);
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  v3 = v24;
  if ( (v25 & 4) == 0 )
  {
    v1 = v20;
    v13 = Object;
LABEL_11:
    v14 = 0;
    goto LABEL_12;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v1 = v20;
  v13 = DeviceAttachmentBaseRef;
  v14 = 1;
  v17 = DeviceAttachmentBaseRef->DriverObject;
  FastIoDispatch = v17->FastIoDispatch;
  AddDevice = v17->DriverExtension[1].AddDevice;
LABEL_12:
  if ( !AddDevice
    || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
    && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
  {
    if ( FastIoDispatch
      && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
      && (ReleaseFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->ReleaseFileForNtCreateSection) != 0LL )
    {
      ReleaseFileForNtCreateSection(v3);
    }
    else
    {
      v4 = -1073741808;
    }
    v1 |= 1u;
  }
  if ( v14 )
    ObfDereferenceObject(v13);
LABEL_24:
  if ( v4 == -1073741808 && (v1 & 1) != 0 )
  {
    FsContext = v3->FsContext;
    if ( FsContext )
    {
      v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v19 )
        ExReleaseResourceLite(v19);
    }
    v4 = 0;
  }
  if ( v2 )
    goto LABEL_26;
LABEL_29:
  KeLeaveCriticalRegion();
}
