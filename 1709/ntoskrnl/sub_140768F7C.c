/*
 * XREFs of sub_140768F7C @ 0x140768F7C
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 */

__int64 __fastcall sub_140768F7C(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v4; // edi
  signed int v7; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // r12
  unsigned __int64 v10; // r9
  unsigned int i; // r11d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r11
  void **v16; // rax
  unsigned __int64 v17; // r9
  unsigned int j; // r11d
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // r11
  HANDLE *v23; // rax
  unsigned int k; // r9d
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // r9
  _DWORD *v29; // rax
  NTSTATUS v30; // eax
  struct _FILE_OBJECT *v31; // r15
  struct _IRP *PoolWithTag; // r14
  struct _IRP *MasterIrp; // rax
  char *v34; // rax
  char *v35; // rdx
  char *v36; // rax
  __int64 v37; // r8
  HANDLE v38; // xmm0_8
  __int64 v39; // r10
  unsigned int v40; // ecx
  int v41; // r9d
  unsigned int v42; // eax
  char *v43; // r8
  unsigned int v44; // eax
  unsigned int v45; // r14d
  char *v46; // rcx
  char *v47; // rdx
  __int64 v48; // rax
  __int128 v50; // [rsp+40h] [rbp-10h]
  void *v51; // [rsp+90h] [rbp+40h]
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  __int64 v53; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v53) = a3;
  Handle = a2;
  v4 = 0;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = -1LL;
      if ( v10 + 4 >= v10 )
        v12 = v10 + 4;
      v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_21;
      v13 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v13 >= v12 )
        v10 = v13;
      v7 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_21;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_21:
      v14 = v53;
      v16 = (void **)Handle;
      goto LABEL_22;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (void **)v15;
LABEL_22:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v51 = *v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    v17 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v17 + 4 >= v17 )
        v19 = v17 + 4;
      v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
      if ( v17 + 4 < v17 )
        goto LABEL_43;
      v20 = v19 + *(unsigned int *)v17;
      v17 = -1LL;
      if ( v20 >= v19 )
        v17 = v20;
      v7 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_43;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_43:
      v21 = v53;
      v23 = (HANDLE *)Handle;
      goto LABEL_44;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (HANDLE *)v22;
LABEL_44:
    if ( v7 >= 0 )
    {
      if ( v21 != 8 )
        return (unsigned int)-1073741762;
      Handle = *v23;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( !v8 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_69;
  }
  for ( k = 0; k < 5; ++k )
  {
    v25 = -1LL;
    if ( v8 + 4 >= v8 )
      v25 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
      goto LABEL_65;
    v26 = v25 + *(unsigned int *)v8;
    v8 = -1LL;
    if ( v26 >= v25 )
      v8 = v26;
    v7 = v26 < v25 ? 0xC0000095 : 0;
    if ( v26 < v25 )
      goto LABEL_65;
  }
  v27 = *(_DWORD *)v8;
  v28 = -1LL;
  if ( v8 + 4 >= v8 )
    v28 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_65:
    v27 = v53;
    v29 = Handle;
    goto LABEL_66;
  }
  v29 = 0LL;
  if ( v27 )
    v29 = (_DWORD *)v28;
LABEL_66:
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v27 != 4 )
    return (unsigned int)-1073741789;
  LODWORD(v53) = *v29;
LABEL_69:
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( (_DWORD)v53 != 16 )
    return (unsigned int)-1073741762;
  if ( !Handle )
    return (unsigned int)-1073741811;
  v30 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Handle, 0LL);
  v31 = (struct _FILE_OBJECT *)Handle;
  v7 = v30;
  if ( v30 >= 0 )
  {
    PoolWithTag = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !PoolWithTag )
    {
      v7 = -1073741801;
      goto LABEL_89;
    }
    v7 = FsRtlKernelFsControlFile(v31, 0x900F4u, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v53);
    if ( v7 < 0 )
      goto LABEL_88;
    if ( (unsigned int)v53 < 0x40 )
      goto LABEL_79;
    *(_QWORD *)&v50 = *(_QWORD *)&PoolWithTag->Type;
    if ( v31->WriteAccess )
    {
      v7 = FsRtlKernelFsControlFile(v31, 0x900EFu, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v53);
      if ( v7 < 0 )
        goto LABEL_88;
      if ( (unsigned int)v53 < 8 )
      {
LABEL_79:
        v7 = -1073741762;
LABEL_88:
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
        goto LABEL_89;
      }
      MasterIrp = *(struct _IRP **)&PoolWithTag->Type;
    }
    else
    {
      v7 = FsRtlKernelFsControlFile(v31, 0x900EBu, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v53);
      if ( v7 < 0 )
        goto LABEL_88;
      if ( (unsigned int)v53 < 0x40 )
        goto LABEL_79;
      MasterIrp = PoolWithTag->AssociatedIrp.MasterIrp;
    }
    *((_QWORD *)&v50 + 1) = MasterIrp;
    goto LABEL_88;
  }
LABEL_89:
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v7 < 0 )
    return (unsigned int)v7;
  *(_DWORD *)(a4 + 4) = 32;
  v34 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20534C53u);
  v35 = v34;
  if ( !v34 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v34;
  *(_DWORD *)a4 = 0;
  Handle = v51;
  v36 = v34 + 4;
  v37 = -1LL;
  if ( v35 + 4 >= v35 )
    v37 = (__int64)(v35 + 4);
  v7 = v35 + 4 < v35 ? 0xC0000095 : 0;
  if ( v36 >= v35 )
  {
    if ( v35 + 12 > &v35[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    v38 = Handle;
    *(_DWORD *)v35 = 8;
    *(_QWORD *)v37 = v38;
    ++*(_DWORD *)a4;
  }
  if ( v35 + 4 < v35 )
    return (unsigned int)v7;
  v39 = *(_QWORD *)(a4 + 8);
  if ( v39 )
  {
    v43 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v44 = -1;
        if ( *(_DWORD *)v43 < 0xFFFFFFFC )
          v44 = *(_DWORD *)v43 + 4;
        v7 = *(_DWORD *)v43 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v43 + 4) < 4 )
          break;
        v45 = v44;
        v46 = v43;
        v47 = &v43[v44];
        v48 = -1LL;
        if ( v47 >= v43 )
          v48 = (__int64)&v43[v45];
        v43 = (char *)v48;
        v7 = v47 < v46 ? 0xC0000095 : 0;
        if ( v47 < v46 )
          break;
        if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
          goto LABEL_113;
      }
      return (unsigned int)v7;
    }
LABEL_113:
    if ( v43 + 4 >= v43 )
      v9 = (__int64)(v43 + 4);
    v7 = v43 + 4 < v43 ? 0xC0000095 : 0;
    if ( v43 + 4 < v43 )
      return (unsigned int)v7;
    if ( (unsigned __int64)(v43 + 20) <= v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v43 = 16;
      *(_OWORD *)v9 = v50;
      goto LABEL_119;
    }
    return (unsigned int)-1073741789;
  }
  v40 = *(_DWORD *)(a4 + 4);
  v41 = -1;
  v42 = v40 + 20;
  if ( v40 + 20 >= v40 )
    v41 = v40 + 20;
  v7 = v42 < v40 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v41;
  if ( v42 >= v40 )
  {
    v7 = 0;
LABEL_119:
    ++*(_DWORD *)a4;
  }
  return (unsigned int)v7;
}
