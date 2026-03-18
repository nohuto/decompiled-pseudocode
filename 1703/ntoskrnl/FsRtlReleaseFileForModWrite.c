/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x1400153C0
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140096570 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1400965E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1400968B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140096950 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     FsFilterFreeCompletionStack @ 0x1401E40AC (FsFilterFreeCompletionStack.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v2; // ebx
  char *v3; // r15
  struct _FILE_OBJECT *v4; // r13
  char v5; // r12
  int v6; // edx
  int v7; // r9d
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  struct _ERESOURCE *v12; // r12
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  __int64 (__fastcall *ReleaseForModWrite)(struct _FILE_OBJECT *, struct _ERESOURCE *, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v17; // rax
  char v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  char v22[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  struct _FILE_OBJECT *v24; // [rsp+58h] [rbp-A8h]
  PERESOURCE v25; // [rsp+60h] [rbp-A0h]
  char v26; // [rsp+88h] [rbp-78h]

  v2 = 0;
  Resource = a2;
  v19 = 0;
  v3 = v22;
  v18 = 0;
  v4 = FileObject;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x60u && *((_QWORD *)AddDevice + 11)
     || *(_DWORD *)AddDevice >= 0x68u && *((_QWORD *)AddDevice + 12)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v12 = Resource;
    v3 = 0LL;
    goto LABEL_11;
  }
  LOBYTE(v6) = -4;
  FsFilterCtrlInit((unsigned int)v22, v6, (_DWORD)RelatedDeviceObject, v7, (__int64)v4, 0);
  v12 = Resource;
  LOBYTE(v13) = 1;
  v25 = Resource;
  v14 = FsFilterPerformCallbacks(v22, 0LL, v13, &v19);
  v15 = 0;
  v2 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      if ( v14 != 294 )
        v15 = v14;
      v2 = v15;
LABEL_23:
      if ( v2 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    v4 = v24;
    if ( (v26 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v23, 1953261124LL);
      v18 = 1;
      v17 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v17->FastIoDispatch;
      AddDevice = v17->DriverExtension[1].AddDevice;
    }
LABEL_11:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0
        && (ReleaseForModWrite = (__int64 (__fastcall *)(struct _FILE_OBJECT *, struct _ERESOURCE *, PDEVICE_OBJECT))FastIoDispatch->ReleaseForModWrite) != 0LL )
      {
        v2 = ReleaseForModWrite(v4, v12, BaseFileSystemDeviceObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v19 |= 1u;
    }
    if ( v18 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v19 & 1) != 0 )
  {
    ExReleaseResourceLite(v12);
    v2 = 0;
  }
LABEL_24:
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks(v22, (unsigned int)v2);
    if ( (v26 & 1) != 0 )
      FsFilterFreeCompletionStack(v22);
  }
}
