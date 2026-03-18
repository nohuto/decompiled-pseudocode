/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x140022B88
 * Callers:
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140025A40 (ExConvertExclusiveToSharedLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140096570 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1400965E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1400968B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140096950 (IoGetBaseFileSystemDeviceObject.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v3; // ebx
  PFILE_OBJECT v4; // r15
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v7; // edx
  int v8; // r9d
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r12
  struct _ERESOURCE **v17; // r13
  int v18; // eax
  char v19; // r12
  __int64 (__fastcall *AcquireForModWrite)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _DRIVER_OBJECT *v21; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  __int64 v24; // rcx
  struct _ERESOURCE *v25; // rbx
  char v26; // si
  BOOLEAN v27; // al
  char v28; // cl
  struct _ERESOURCE *v29; // rcx
  __int16 *v30; // r9
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v33; // [rsp+40h] [rbp-C0h]
  _BYTE *v34; // [rsp+48h] [rbp-B8h]
  _BYTE v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v36; // [rsp+54h] [rbp-ACh]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v38; // [rsp+60h] [rbp-A0h]
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE **v40; // [rsp+70h] [rbp-90h]
  char v41; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-60h]

  v33 = a3;
  v3 = 0;
  v34 = v35;
  v31 = 0;
  v4 = FileObject;
  v5 = 0;
  v32 = a2;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
     || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v17 = v33;
    v34 = 0LL;
    v19 = 0;
    goto LABEL_12;
  }
  LOBYTE(v7) = -3;
  result = FsFilterCtrlInit((unsigned int)v35, v7, (_DWORD)RelatedDeviceObject, v8, (__int64)v4, 1);
  if ( (int)result < 0 )
    return result;
  v16 = v32;
  v17 = v33;
  LOBYTE(v15) = 1;
  v39 = v32;
  LOBYTE(v14) = 1;
  v40 = v33;
  v18 = FsFilterPerformCallbacks(v35, v14, v15, &v31);
  v3 = v18;
  if ( v18 >= 0 )
  {
    if ( !v18 )
    {
      v4 = v38;
      if ( (v41 & 4) != 0 )
      {
        BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v37, 1953261124LL);
        v19 = 1;
        v21 = BaseFileSystemDeviceObject->DriverObject;
        FastIoDispatch = v21->FastIoDispatch;
        AddDevice = v21->DriverExtension[1].AddDevice;
      }
      else
      {
        v19 = 0;
      }
LABEL_12:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
        && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0x80
          && (AcquireForModWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->AcquireForModWrite) != 0LL )
        {
          v3 = AcquireForModWrite(v4, v32, v17, BaseFileSystemDeviceObject);
        }
        else
        {
          v3 = -1073741808;
        }
        v31 |= 1u;
      }
      if ( v19 )
        ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
      v16 = v32;
      goto LABEL_25;
    }
    v3 = 0;
    if ( v18 != 294 )
      v3 = v18;
  }
LABEL_25:
  if ( v3 != -1073741808 || (v31 & 1) == 0 )
    goto LABEL_26;
  FsContext = v4->FsContext;
  if ( *((_QWORD *)FsContext + 1) )
  {
    v23 = *((_BYTE *)FsContext + 4);
    if ( (v23 & 8) != 0 || (v24 = *((_QWORD *)FsContext + 5), *v16 > v24) && v24 != *((_QWORD *)FsContext + 4) )
    {
      v26 = 1;
    }
    else
    {
      if ( (v23 & 0x10) == 0 )
      {
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v25 )
        {
          v26 = 0;
          goto LABEL_55;
        }
      }
      v26 = 0;
    }
    v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    while ( 1 )
    {
LABEL_55:
      if ( v26 )
        v27 = ExAcquireResourceExclusiveLite(v25, 0);
      else
        v27 = ExAcquireSharedWaitForExclusive(v25, 0);
      if ( !v27 )
        goto LABEL_72;
      v28 = *((_BYTE *)FsContext + 4);
      if ( (v28 & 8) != 0 || *v16 > *((_QWORD *)FsContext + 5) )
      {
        if ( v26 )
          goto LABEL_44;
      }
      else
      {
        if ( (v28 & 0x10) == 0 )
        {
          v29 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( !v29 || v25 == v29 )
          {
            if ( v26 )
LABEL_43:
              ExConvertExclusiveToSharedLite(v25);
          }
          else
          {
            v25 = 0LL;
            if ( ExAcquireSharedWaitForExclusive(v29, 0) )
              v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
            if ( !v25 )
            {
LABEL_72:
              v3 = -1073741608;
              goto LABEL_26;
            }
          }
LABEL_44:
          *v17 = v25;
          goto LABEL_45;
        }
        if ( v26 )
          goto LABEL_43;
        if ( v25 == *((struct _ERESOURCE **)FsContext + 1) )
          goto LABEL_44;
      }
      ExReleaseResourceLite(v25);
      v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      v26 = 1;
    }
  }
  *v17 = 0LL;
LABEL_45:
  v3 = 0;
LABEL_26:
  if ( !v34 )
    return v3;
  if ( *((_WORD *)v34 + 37) )
    FsFilterPerformCompletionCallbacks(v35, v3);
  if ( (v41 & 1) == 0 )
    return v3;
  v30 = 0LL;
  if ( (v41 & 2) != 0 )
  {
    if ( v36 != 250 )
    {
      if ( v36 == 251 )
        goto LABEL_83;
      if ( v36 != 252 )
      {
        if ( v36 == 253 )
          goto LABEL_83;
        if ( v36 != 254 )
        {
          if ( v36 != 255 )
          {
LABEL_85:
            *((_QWORD *)P - 1) = 0LL;
            KeSetEvent((PRKEVENT)v30, 0, 0);
            return v3;
          }
LABEL_83:
          v30 = &AcquireOpsEvent;
          goto LABEL_85;
        }
      }
    }
    v30 = &ReleaseOpsEvent;
    goto LABEL_85;
  }
  ExFreePoolWithTag(P, 0x676D5346u);
  return v3;
}
