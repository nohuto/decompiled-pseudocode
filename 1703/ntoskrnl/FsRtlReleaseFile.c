/*
 * XREFs of FsRtlReleaseFile @ 0x140510170
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     CcClearPrivateWriteFile @ 0x1401DDE20 (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401DE2BC (CcSetPrivateWriteFile.c)
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiCallCreateSectionFilters @ 0x14050FFB8 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterCtrlFree @ 0x140096558 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140096570 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1400965E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1400968B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140096950 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v17; // ax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DRIVER_OBJECT *v19; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v21; // rcx
  int v22; // [rsp+30h] [rbp-278h] BYREF
  PVOID Object; // [rsp+38h] [rbp-270h]
  char v24[8]; // [rsp+40h] [rbp-268h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-260h]
  struct _FILE_OBJECT *v26; // [rsp+50h] [rbp-258h]
  char v27; // [rsp+80h] [rbp-228h]

  v1 = 0;
  v2 = v24;
  v22 = 0;
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
  FsFilterCtrlInit((__int64)v24, 254, (__int64)RelatedDeviceObject, v8, (__int64)v3, 0);
  v12 = FsFilterPerformCallbacks((__int64)v24, 0, 0, &v22);
  v4 = v12;
  if ( v12 < 0 )
  {
LABEL_37:
    v1 = v22;
    goto LABEL_24;
  }
  if ( v12 )
  {
    if ( v12 == 294 )
    {
      v4 = 0;
LABEL_26:
      if ( *((_WORD *)v2 + 37) )
        FsFilterPerformCompletionCallbacks((__int64)v24, v4);
      FsFilterCtrlFree((__int64)v24);
      goto LABEL_29;
    }
    goto LABEL_37;
  }
  v3 = v26;
  if ( (v27 & 4) == 0 )
  {
    v1 = v22;
    v13 = Object;
LABEL_11:
    v14 = 0;
    goto LABEL_12;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v1 = v22;
  v13 = DeviceAttachmentBaseRef;
  v14 = 1;
  v19 = DeviceAttachmentBaseRef->DriverObject;
  FastIoDispatch = v19->FastIoDispatch;
  AddDevice = v19->DriverExtension[1].AddDevice;
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
      v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v21 )
        ExReleaseResourceLite(v21);
    }
    v4 = 0;
  }
  if ( v2 )
    goto LABEL_26;
LABEL_29:
  CurrentThread = KeGetCurrentThread();
  v17 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v17;
  if ( !v17
    && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)CurrentThread);
  }
}
