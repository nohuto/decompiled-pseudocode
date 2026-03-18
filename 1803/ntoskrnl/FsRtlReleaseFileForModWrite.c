/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x1401352E8
 * Callers:
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 * Callees:
 *     FsFilterPerformCompletionCallbacks @ 0x14005BD60 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14005BDF0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14005C0C0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14005C150 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     FsFilterFreeCompletionStack @ 0x140225D98 (FsFilterFreeCompletionStack.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  signed int v2; // ebx
  _BYTE *v3; // r15
  struct _FILE_OBJECT *v4; // r13
  char v5; // r12
  __int64 v6; // r9
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // r12
  int v12; // eax
  signed int v13; // ecx
  __int64 (__fastcall *v14)(struct _FILE_OBJECT *, struct _ERESOURCE *, _QWORD *); // rax
  __int64 v15; // rax
  char v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  _BYTE v20[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  struct _FILE_OBJECT *v22; // [rsp+58h] [rbp-A8h]
  PERESOURCE v23; // [rsp+60h] [rbp-A0h]
  char v24; // [rsp+88h] [rbp-78h]

  v2 = 0;
  Resource = a2;
  v17 = 0;
  v3 = v20;
  v16 = 0;
  v4 = FileObject;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  v8 = BaseFileSystemDeviceObject[1];
  v9 = *(_QWORD *)(v8 + 80);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 48LL);
  if ( v10 && (*(_DWORD *)v10 >= 0x60u && *(_QWORD *)(v10 + 88) || *(_DWORD *)v10 >= 0x68u && *(_QWORD *)(v10 + 96)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v11 = Resource;
    v3 = 0LL;
    goto LABEL_11;
  }
  FsFilterCtrlInit((__int64)v20, 252, (__int64)RelatedDeviceObject, v6, (__int64)v4, 0);
  v11 = Resource;
  v23 = Resource;
  v12 = FsFilterPerformCallbacks((__int64)v20, 0, 1, &v17);
  v13 = 0;
  v2 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      if ( v12 != 294 )
        v13 = v12;
      v2 = v13;
LABEL_23:
      if ( v2 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    v4 = v22;
    if ( (v24 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v21, 0x746C6644u);
      v16 = 1;
      v15 = BaseFileSystemDeviceObject[1];
      v9 = *(_QWORD *)(v15 + 80);
      v10 = *(_QWORD *)(*(_QWORD *)(v15 + 48) + 48LL);
    }
LABEL_11:
    if ( !v10
      || (*(_DWORD *)v10 < 0x60u || !*(_QWORD *)(v10 + 88)) && (*(_DWORD *)v10 < 0x68u || !*(_QWORD *)(v10 + 96)) )
    {
      if ( v9
        && *(_DWORD *)v9 >= 0xD0u
        && (v14 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, struct _ERESOURCE *, _QWORD *))(v9 + 200)) != 0LL )
      {
        v2 = v14(v4, v11, BaseFileSystemDeviceObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v17 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v17 & 1) != 0 )
  {
    ExReleaseResourceLite(v11);
    v2 = 0;
  }
LABEL_24:
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v20, v2);
    if ( (v24 & 1) != 0 )
      FsFilterFreeCompletionStack(v20);
  }
}
