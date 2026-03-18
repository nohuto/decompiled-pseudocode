/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x1400EF610
 * Callers:
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 * Callees:
 *     FsFilterPerformCompletionCallbacks @ 0x140067170 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140067200 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1400674F0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140067590 (IoGetBaseFileSystemDeviceObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x14011BA60 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v3; // ebx
  PFILE_OBJECT v4; // r15
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v7; // r9
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  _QWORD *v13; // r12
  struct _ERESOURCE **v14; // r13
  int v15; // eax
  char v16; // r12
  __int64 (__fastcall *v17)(PFILE_OBJECT, _QWORD *, struct _ERESOURCE **, _QWORD *); // rax
  __int64 v18; // rax
  PVOID FsContext; // rdi
  char v20; // dl
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // rbx
  char v23; // si
  BOOLEAN v24; // al
  char v25; // cl
  struct _ERESOURCE *v26; // rcx
  __int16 *v27; // r9
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v30; // [rsp+40h] [rbp-C0h]
  _BYTE *v31; // [rsp+48h] [rbp-B8h]
  _BYTE v32[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v33; // [rsp+54h] [rbp-ACh]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v35; // [rsp+60h] [rbp-A0h]
  _QWORD *v36; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE **v37; // [rsp+70h] [rbp-90h]
  char v38; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-60h]

  v30 = a3;
  v3 = 0;
  v31 = v32;
  v28 = 0;
  v4 = FileObject;
  v5 = 0;
  v29 = a2;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  v9 = BaseFileSystemDeviceObject[1];
  v10 = *(_QWORD *)(v9 + 80);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 48LL);
  if ( v11 && (*(_DWORD *)v11 >= 0x50u && *(_QWORD *)(v11 + 72) || *(_DWORD *)v11 >= 0x58u && *(_QWORD *)(v11 + 80)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v14 = v30;
    v31 = 0LL;
    v16 = 0;
    goto LABEL_12;
  }
  result = FsFilterCtrlInit((__int64)v32, 253, (__int64)RelatedDeviceObject, v7, (__int64)v4, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = v29;
  v14 = v30;
  v36 = v29;
  v37 = v30;
  v15 = FsFilterPerformCallbacks((__int64)v32, 1, 1, &v28);
  v3 = v15;
  if ( v15 >= 0 )
  {
    if ( !v15 )
    {
      v4 = v35;
      if ( (v38 & 4) != 0 )
      {
        BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v34, 0x746C6644u);
        v16 = 1;
        v18 = BaseFileSystemDeviceObject[1];
        v10 = *(_QWORD *)(v18 + 80);
        v11 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 48LL);
      }
      else
      {
        v16 = 0;
      }
LABEL_12:
      if ( !v11
        || (*(_DWORD *)v11 < 0x50u || !*(_QWORD *)(v11 + 72)) && (*(_DWORD *)v11 < 0x58u || !*(_QWORD *)(v11 + 80)) )
      {
        if ( v10
          && *(_DWORD *)v10 >= 0x80u
          && (v17 = *(__int64 (__fastcall **)(PFILE_OBJECT, _QWORD *, struct _ERESOURCE **, _QWORD *))(v10 + 120)) != 0LL )
        {
          v3 = v17(v4, v29, v14, BaseFileSystemDeviceObject);
        }
        else
        {
          v3 = -1073741808;
        }
        v28 |= 1u;
      }
      if ( v16 )
        ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
      v13 = v29;
      goto LABEL_25;
    }
    v3 = 0;
    if ( v15 != 294 )
      v3 = v15;
  }
LABEL_25:
  if ( v3 != -1073741808 || (v28 & 1) == 0 )
    goto LABEL_26;
  FsContext = v4->FsContext;
  if ( *((_QWORD *)FsContext + 1) )
  {
    v20 = *((_BYTE *)FsContext + 4);
    if ( (v20 & 8) != 0 || (v21 = *((_QWORD *)FsContext + 5), *v13 > v21) && v21 != *((_QWORD *)FsContext + 4) )
    {
      v23 = 1;
    }
    else
    {
      if ( (v20 & 0x10) == 0 )
      {
        v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v22 )
        {
          v23 = 0;
          goto LABEL_55;
        }
      }
      v23 = 0;
    }
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    while ( 1 )
    {
LABEL_55:
      if ( v23 )
        v24 = ExAcquireResourceExclusiveLite(v22, 0);
      else
        v24 = ExAcquireSharedWaitForExclusive(v22, 0);
      if ( !v24 )
        goto LABEL_72;
      v25 = *((_BYTE *)FsContext + 4);
      if ( (v25 & 8) != 0 || *v13 > *((_QWORD *)FsContext + 5) )
      {
        if ( v23 )
          goto LABEL_44;
      }
      else
      {
        if ( (v25 & 0x10) == 0 )
        {
          v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( !v26 || v22 == v26 )
          {
            if ( v23 )
LABEL_43:
              ExConvertExclusiveToSharedLite(v22);
          }
          else
          {
            v22 = 0LL;
            if ( ExAcquireSharedWaitForExclusive(v26, 0) )
              v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
            if ( !v22 )
            {
LABEL_72:
              v3 = -1073741608;
              goto LABEL_26;
            }
          }
LABEL_44:
          *v14 = v22;
          goto LABEL_45;
        }
        if ( v23 )
          goto LABEL_43;
        if ( v22 == *((struct _ERESOURCE **)FsContext + 1) )
          goto LABEL_44;
      }
      ExReleaseResourceLite(v22);
      v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      v23 = 1;
    }
  }
  *v14 = 0LL;
LABEL_45:
  v3 = 0;
LABEL_26:
  if ( !v31 )
    return v3;
  if ( *((_WORD *)v31 + 37) )
    FsFilterPerformCompletionCallbacks((__int64)v32, v3);
  if ( (v38 & 1) == 0 )
    return v3;
  v27 = 0LL;
  if ( (v38 & 2) != 0 )
  {
    if ( v33 != 250 )
    {
      if ( v33 == 251 )
        goto LABEL_83;
      if ( v33 != 252 )
      {
        if ( v33 == 253 )
          goto LABEL_83;
        if ( v33 != 254 )
        {
          if ( v33 != 255 )
          {
LABEL_85:
            *((_QWORD *)P - 1) = 0LL;
            KeSetEvent((PRKEVENT)v27, 0, 0);
            return v3;
          }
LABEL_83:
          v27 = &AcquireOpsEvent;
          goto LABEL_85;
        }
      }
    }
    v27 = &ReleaseOpsEvent;
    goto LABEL_85;
  }
  ExFreePoolWithTag(P, 0x676D5346u);
  return v3;
}
