/*
 * XREFs of FsRtlReleaseFile @ 0x1404C1550
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x14005BD38 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14005BD60 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14005BDF0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14005C0C0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14005C150 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140064E70 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
