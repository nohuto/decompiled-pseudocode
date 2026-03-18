/*
 * XREFs of sub_1407D0524 @ 0x1407D0524
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x1401AA4E0 (ZwSetCachedSigningLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1407D0524(__int64 a1, void *a2, int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  unsigned __int64 v9; // r9
  unsigned int i; // esi
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r11
  HANDLE *v15; // rax
  void *v16; // r12
  unsigned __int64 v17; // r9
  unsigned int j; // esi
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // r11
  _DWORD *v23; // rax
  unsigned __int64 v24; // r9
  unsigned int k; // r11d
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // r11
  int *v30; // rax
  unsigned int m; // r10d
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // r9
  _QWORD *v36; // r15
  NTSTATUS v37; // eax
  struct _FILE_OBJECT *v38; // r13
  PVOID *PoolWithTag; // r12
  void *v40; // r15
  __int64 v41; // r10
  unsigned int v42; // ecx
  int v43; // r9d
  unsigned int v44; // eax
  __m128i v45; // xmm6
  __int64 v46; // rdx
  PVOID *v47; // r15
  char *v48; // rax
  char *v49; // rbx
  int v50; // r11d
  char *v51; // r8
  unsigned int v52; // eax
  unsigned int v53; // r15d
  char *v54; // rcx
  char *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  char *v58; // rax
  char *v59; // rdx
  char *v60; // rax
  HANDLE v62; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-20h] BYREF
  int v64; // [rsp+B0h] [rbp+40h]
  HANDLE Handle; // [rsp+B8h] [rbp+48h]
  __int64 v66; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v66) = a3;
  Handle = a2;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v9 + 4 >= v9 )
        v11 = v9 + 4;
      v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        goto LABEL_21;
      v12 = v11 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v12 >= v11 )
        v9 = v12;
      v6 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        goto LABEL_21;
    }
    v13 = *(_DWORD *)v9;
    v14 = -1LL;
    if ( v9 + 4 >= v9 )
      v14 = v9 + 4;
    v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_21:
      v13 = v66;
      v15 = (HANDLE *)a2;
      goto LABEL_22;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (HANDLE *)v14;
LABEL_22:
    if ( v6 >= 0 )
    {
      if ( v13 != 8 )
        return (unsigned int)-1073741762;
      Handle = *v15;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  v16 = Handle;
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v7 && *(_DWORD *)a1 > 4u )
  {
    v17 = v7;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v17 + 4 >= v17 )
        v19 = v17 + 4;
      v6 = v17 + 4 < v17 ? 0xC0000095 : 0;
      if ( v17 + 4 < v17 )
        goto LABEL_44;
      v20 = v19 + *(unsigned int *)v17;
      v17 = -1LL;
      if ( v20 >= v19 )
        v17 = v20;
      v6 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_44;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v6 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_44:
      v21 = v66;
      v23 = Handle;
      goto LABEL_45;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (_DWORD *)v22;
LABEL_45:
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v21 != 4 )
      return (unsigned int)-1073741789;
    LODWORD(Handle) = *v23;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v7 && *(_DWORD *)a1 > 5u )
  {
    v24 = v7;
    for ( k = 0; k < 5; ++k )
    {
      v26 = -1LL;
      if ( v24 + 4 >= v24 )
        v26 = v24 + 4;
      v6 = v24 + 4 < v24 ? 0xC0000095 : 0;
      if ( v24 + 4 < v24 )
        goto LABEL_66;
      v27 = v26 + *(unsigned int *)v24;
      v24 = -1LL;
      if ( v27 >= v26 )
        v24 = v27;
      v6 = v27 < v26 ? 0xC0000095 : 0;
      if ( v27 < v26 )
        goto LABEL_66;
    }
    v28 = *(_DWORD *)v24;
    v29 = -1LL;
    if ( v24 + 4 >= v24 )
      v29 = v24 + 4;
    v6 = v24 + 4 < v24 ? 0xC0000095 : 0;
    if ( v24 + 4 < v24 )
    {
LABEL_66:
      v28 = v66;
      v30 = (int *)Handle;
      goto LABEL_67;
    }
    v30 = 0LL;
    if ( v28 )
      v30 = (int *)v29;
LABEL_67:
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v28 != 4 )
      return (unsigned int)-1073741789;
    v64 = *v30;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !v7 || *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v32 = -1LL;
    if ( v7 + 4 >= v7 )
      v32 = v7 + 4;
    v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
      goto LABEL_87;
    v33 = v32 + *(unsigned int *)v7;
    v7 = -1LL;
    if ( v33 >= v32 )
      v7 = v33;
    v6 = v33 < v32 ? 0xC0000095 : 0;
    if ( v33 < v32 )
      goto LABEL_87;
  }
  v34 = *(_DWORD *)v7;
  v35 = -1LL;
  if ( v7 + 4 >= v7 )
    v35 = v7 + 4;
  v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
  if ( v7 + 4 < v7 )
  {
LABEL_87:
    v34 = v66;
    v36 = Handle;
    goto LABEL_88;
  }
  v36 = 0LL;
  if ( v34 )
    v36 = (_QWORD *)v35;
LABEL_88:
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v34 != 16 )
    return (unsigned int)-1073741811;
  v62 = 0LL;
  if ( !v16 || !v36 )
    return (unsigned int)-1073741811;
  v37 = ObReferenceObjectByHandle(v16, 0, (POBJECT_TYPE)IoFileObjectType, 1, Object, 0LL);
  v38 = (struct _FILE_OBJECT *)Object[0];
  v6 = v37;
  if ( v37 < 0 )
    goto LABEL_96;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
  if ( !PoolWithTag )
    goto LABEL_95;
  v6 = FsRtlKernelFsControlFile(v38, 590068, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v66);
  if ( v6 < 0 )
    goto LABEL_112;
  if ( (unsigned int)v66 < 0x40 )
    goto LABEL_111;
  Object[0] = *PoolWithTag;
  v6 = FsRtlKernelFsControlFile(v38, 590059, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v66);
  if ( v6 < 0 )
    goto LABEL_112;
  if ( (unsigned int)v66 < 0x40 )
  {
LABEL_111:
    v6 = -1073741762;
LABEL_112:
    v45 = *(__m128i *)Object;
    goto LABEL_113;
  }
  Object[1] = PoolWithTag[3];
  v45 = *(__m128i *)Object;
LABEL_113:
  ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
  if ( v6 < 0 )
    goto LABEL_96;
  if ( v45.m128i_i64[0] != *v36 || _mm_srli_si128(v45, 8).m128i_u64[0] != v36[1] )
  {
    v6 = -1073741762;
    goto LABEL_96;
  }
  if ( (_DWORD)Handle )
  {
    Object[0] = (PVOID)-1LL;
    Object[1] = (PVOID)0x7FFFFFFFFFFFFFFFLL;
    v45 = *(__m128i *)Object;
    goto LABEL_133;
  }
  if ( ObOpenObjectByPointer(v38, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &v62) >= 0 )
  {
    LOBYTE(v46) = (unsigned int)(v64 - 2) > 1 ? 0 : 6;
    ZwSetCachedSigningLevel(2LL, v46, (__int64)&v62);
  }
  v47 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
  if ( !v47 )
    goto LABEL_95;
  v6 = FsRtlKernelFsControlFile(v38, 590068, 0LL, 0, v47, 0x248u, (ULONG *)&v66);
  if ( v6 >= 0 )
  {
    if ( (unsigned int)v66 < 0x40 )
    {
LABEL_126:
      v6 = -1073741762;
      goto LABEL_130;
    }
    Object[0] = *v47;
    v6 = FsRtlKernelFsControlFile(v38, 590059, 0LL, 0, v47, 0x248u, (ULONG *)&v66);
    if ( v6 >= 0 )
    {
      if ( (unsigned int)v66 < 0x40 )
        goto LABEL_126;
      Object[1] = v47[3];
      v45 = *(__m128i *)Object;
    }
  }
LABEL_130:
  ExFreePoolWithTag(v47, 0x20534C53u);
  if ( v6 < 0 )
    goto LABEL_96;
LABEL_133:
  v48 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
  v49 = v48;
  if ( !v48 )
  {
LABEL_95:
    v6 = -1073741801;
LABEL_96:
    v40 = 0LL;
    goto LABEL_97;
  }
  memset(v48, 0, 0x3AuLL);
  *((_DWORD *)v49 + 1) = 1579264;
  qmemcpy(v49 + 8, "$Kernel.Purge.AppxFICache", 25);
  *(__m128i *)(v49 + 34) = v45;
  *(_QWORD *)(v49 + 50) = 0LL;
  v40 = v49;
  v6 = FsRtlSetKernelEaFile(v38, v49, 58);
LABEL_97:
  if ( v62 )
    ZwClose(v62);
  if ( v38 )
    ObfDereferenceObject(v38);
  if ( v40 )
    ExFreePoolWithTag(v40, 0x20534C53u);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v41 = *(_QWORD *)(a4 + 8);
  if ( v41 )
  {
    v50 = 0;
    v51 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      do
      {
        v52 = -1;
        if ( *(_DWORD *)v51 < 0xFFFFFFFC )
          v52 = *(_DWORD *)v51 + 4;
        v6 = *(_DWORD *)v51 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v51 + 4) < 4 )
          goto LABEL_148;
        v53 = v52;
        v54 = v51;
        v55 = &v51[v52];
        v56 = -1LL;
        if ( v55 >= v51 )
          v56 = (__int64)&v51[v53];
        v51 = (char *)v56;
        v6 = v55 < v54 ? 0xC0000095 : 0;
        if ( v55 < v54 )
          goto LABEL_148;
      }
      while ( (unsigned int)++v50 < *(_DWORD *)a4 );
    }
    v57 = -1LL;
    if ( v51 + 4 >= v51 )
      v57 = (__int64)(v51 + 4);
    v6 = v51 + 4 < v51 ? 0xC0000095 : 0;
    if ( v51 + 4 < v51 )
      goto LABEL_148;
    if ( (unsigned __int64)(v51 + 8) <= v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v51 = 4;
      *(_DWORD *)v57 = 0;
      ++*(_DWORD *)a4;
      goto LABEL_148;
    }
    return (unsigned int)-1073741789;
  }
  v42 = *(_DWORD *)(a4 + 4);
  v43 = -1;
  v44 = v42 + 8;
  if ( v42 + 8 >= v42 )
    v43 = v42 + 8;
  v6 = v44 < v42 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v43;
  if ( v44 >= v42 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_149;
  }
LABEL_148:
  if ( v6 < 0 )
    return (unsigned int)v6;
LABEL_149:
  if ( !*(_DWORD *)(a4 + 4) )
    return (unsigned int)-1073741762;
  v58 = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
  v59 = v58;
  if ( !v58 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v58;
  *(_DWORD *)a4 = 0;
  v60 = v58 + 4;
  if ( v60 >= v59 )
    v8 = (__int64)v60;
  v6 = v60 < v59 ? 0xC0000095 : 0;
  if ( v60 >= v59 )
  {
    if ( v59 + 8 <= &v59[*(unsigned int *)(a4 + 4)] )
    {
      *(_DWORD *)v59 = 4;
      *(_DWORD *)v8 = 0;
      ++*(_DWORD *)a4;
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v6;
}
