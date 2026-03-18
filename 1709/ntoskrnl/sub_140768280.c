/*
 * XREFs of sub_140768280 @ 0x140768280
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 */

__int64 __fastcall sub_140768280(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  unsigned __int64 v10; // r9
  unsigned int i; // r11d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r11
  void **v16; // rax
  unsigned int j; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // r9
  HANDLE *v22; // rax
  UNICODE_STRING *v23; // r15
  unsigned __int16 *v24; // r12
  NTSTATUS v25; // r14d
  PVOID PoolWithTag; // rax
  unsigned __int16 *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  _OWORD *v30; // r8
  int v31; // r13d
  struct _IRP *v32; // rax
  int v33; // ebx
  HANDLE v34; // rcx
  char *v35; // rax
  char *v36; // rdx
  char *v37; // rax
  __int64 v38; // r8
  HANDLE v39; // xmm0_8
  __int64 v40; // r10
  int v41; // r15d
  unsigned int v42; // ecx
  int v43; // r9d
  unsigned int v44; // eax
  char *v45; // r8
  unsigned int v46; // eax
  unsigned int v47; // r14d
  char *v48; // rcx
  char *v49; // rdx
  __int64 v50; // rax
  __int64 Source2; // [rsp+50h] [rbp-30h] BYREF
  _OWORD *v53; // [rsp+58h] [rbp-28h]
  void *v54; // [rsp+60h] [rbp-20h]
  __int128 v55; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h]
  __int64 v58; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v58) = a3;
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
      v14 = v58;
      v16 = (void **)Handle;
      goto LABEL_22;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (void **)v15;
LABEL_22:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v54 = *v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v18 = -1LL;
      if ( v8 + 4 >= v8 )
        v18 = v8 + 4;
      v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
        goto LABEL_43;
      v19 = v18 + *(unsigned int *)v8;
      v8 = -1LL;
      if ( v19 >= v18 )
        v8 = v19;
      v7 = v19 < v18 ? 0xC0000095 : 0;
      if ( v19 < v18 )
        goto LABEL_43;
    }
    v20 = *(_DWORD *)v8;
    v21 = -1LL;
    if ( v8 + 4 >= v8 )
      v21 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_43:
      v20 = v58;
      v22 = (HANDLE *)Handle;
      goto LABEL_44;
    }
    v22 = 0LL;
    if ( v20 )
      v22 = (HANDLE *)v21;
LABEL_44:
    if ( (v7 & 0x80000000) == 0 )
    {
      if ( v20 != 8 )
        return (unsigned int)-1073741762;
      Handle = *v22;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  v23 = 0LL;
  v24 = 0LL;
  if ( !Handle )
    return (unsigned int)-1073741811;
  v25 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  if ( v25 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
    v23 = (UNICODE_STRING *)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_53;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_WORD *)PoolWithTag + 14) = 0;
    *((_BYTE *)PoolWithTag + 4) = 25;
    *(_DWORD *)PoolWithTag = 0;
    strcpy((char *)PoolWithTag + 5, "$Kernel.Purge.AppxFICache");
    v27 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
    v24 = v27;
    if ( !v27 )
    {
LABEL_53:
      v25 = -1073741801;
      goto LABEL_75;
    }
    memset(v27, 0, 0x3AuLL);
    v28 = FsRtlQueryKernelEaFile((PFILE_OBJECT)Object, v24, 0x3Au, 1, v23, 0x1Fu, 0LL, 1, &v58);
    v25 = v28;
    if ( v28 == -1073741275 )
      goto LABEL_56;
    if ( v28 >= 0 )
    {
      v29 = v24[3];
      v30 = (_OWORD *)((char *)v24 + *((unsigned __int8 *)v24 + 5) + 9);
      v53 = v30;
      if ( (char *)v30 + v29 > (char *)v24 + (unsigned int)v58 )
        goto LABEL_59;
      if ( !(_WORD)v29 )
      {
LABEL_56:
        LODWORD(v58) = 0;
        v25 = 0;
        goto LABEL_75;
      }
      if ( (_DWORD)v29 != 24 || (Source2 = 0LL, RtlCompareMemory(v30 + 1, &Source2, 8uLL) != 8) )
      {
LABEL_59:
        v25 = -1073741762;
        goto LABEL_75;
      }
      v31 = 2;
      v32 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
      Handle = v32;
      if ( !v32 )
        goto LABEL_74;
      v33 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 0x900F4u, 0LL, 0, v32, 0x248u, (ULONG *)&v58);
      if ( v33 >= 0 )
      {
        v34 = Handle;
        if ( (unsigned int)v58 < 0x40 )
          goto LABEL_66;
        *(_QWORD *)&v55 = *(_QWORD *)Handle;
        v33 = FsRtlKernelFsControlFile(
                (PFILE_OBJECT)Object,
                0x900EBu,
                0LL,
                0,
                (struct _IRP *)Handle,
                0x248u,
                (ULONG *)&v58);
        if ( v33 >= 0 )
        {
          v34 = Handle;
          if ( (unsigned int)v58 >= 0x40 )
          {
            *((_QWORD *)&v55 + 1) = *((_QWORD *)Handle + 3);
            goto LABEL_71;
          }
LABEL_66:
          v33 = -1073741762;
LABEL_71:
          ExFreePoolWithTag(v34, 0x20534C53u);
          if ( v33 >= 0 && v55 == *v53 )
            v31 = 3;
LABEL_74:
          LODWORD(v58) = v31;
          v9 = -1LL;
          goto LABEL_75;
        }
      }
      v34 = Handle;
      goto LABEL_71;
    }
  }
LABEL_75:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v23 )
    ExFreePoolWithTag(v23, 0x20534C53u);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x20534C53u);
  v7 = v25;
  if ( v25 < 0 )
    return v7;
  *(_DWORD *)(a4 + 4) = 20;
  v35 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  v36 = v35;
  if ( !v35 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v35;
  *(_DWORD *)a4 = 0;
  Handle = v54;
  v37 = v35 + 4;
  v38 = -1LL;
  if ( v36 + 4 >= v36 )
    v38 = (__int64)(v36 + 4);
  v7 = v36 + 4 < v36 ? 0xC0000095 : 0;
  if ( v37 >= v36 )
  {
    if ( v36 + 12 > &v36[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    v39 = Handle;
    *(_DWORD *)v36 = 8;
    *(_QWORD *)v38 = v39;
    ++*(_DWORD *)a4;
  }
  if ( v36 + 4 < v36 )
    return v7;
  v40 = *(_QWORD *)(a4 + 8);
  v41 = v58;
  if ( v40 )
  {
    v45 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      do
      {
        v46 = -1;
        if ( *(_DWORD *)v45 < 0xFFFFFFFC )
          v46 = *(_DWORD *)v45 + 4;
        v7 = *(_DWORD *)v45 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v45 + 4) < 4 )
          return v7;
        v47 = v46;
        v48 = v45;
        v49 = &v45[v46];
        v50 = -1LL;
        if ( v49 >= v45 )
          v50 = (__int64)&v45[v47];
        v45 = (char *)v50;
        v7 = v49 < v48 ? 0xC0000095 : 0;
        if ( v49 < v48 )
          return v7;
      }
      while ( (unsigned int)++v4 < *(_DWORD *)a4 );
    }
    if ( v45 + 4 >= v45 )
      v9 = (__int64)(v45 + 4);
    v7 = v45 + 4 < v45 ? 0xC0000095 : 0;
    if ( v45 + 4 < v45 )
      return v7;
    if ( (unsigned __int64)(v45 + 8) <= v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v45 = 4;
      *(_DWORD *)v9 = v41;
      goto LABEL_109;
    }
    return (unsigned int)-1073741789;
  }
  v42 = *(_DWORD *)(a4 + 4);
  v43 = -1;
  v44 = v42 + 8;
  if ( v42 + 8 >= v42 )
    v43 = v42 + 8;
  v7 = v44 < v42 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v43;
  if ( v44 >= v42 )
  {
    v7 = 0;
LABEL_109:
    ++*(_DWORD *)a4;
  }
  return v7;
}
