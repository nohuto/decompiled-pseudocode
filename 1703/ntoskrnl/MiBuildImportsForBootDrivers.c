/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x14081828C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140818184 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  int v1; // ebx
  unsigned int v2; // r12d
  PVOID *v3; // r14
  PVOID *v4; // rbp
  PVOID v5; // rax
  char *PoolWithTag; // r15
  PVOID *i; // rsi
  NTSTATUS v8; // eax
  unsigned __int64 *v9; // rdi
  PVOID v10; // rcx
  unsigned int v11; // r10d
  unsigned __int64 v12; // r8
  unsigned int j; // r11d
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  void **v16; // rdx
  __int64 v17; // r8
  PVOID *v18; // rax
  PVOID *v19; // rdx
  unsigned int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // r9d
  char *v25; // rdx
  __int64 v26; // r10
  PVOID *v27; // rcx
  PVOID *k; // rbx
  PVOID v30; // rcx
  unsigned int v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  PVOID *v33; // [rsp+80h] [rbp+18h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v33 = &PsLoadedModuleList;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    return 3221226021LL;
  do
  {
    v5 = v0[6];
    if ( PsNtosImageBase == v5 )
    {
      v3 = v0;
    }
    else if ( PsHalImageBase == v5 )
    {
      v4 = v0;
    }
    *((_WORD *)v0 + 54) = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v4 || v0 == v3;
    v0[17] = (PVOID)1;
    ++v2;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v3 || !v4 )
    return 3221226021LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v2, 0x54446D4Du);
  if ( PoolWithTag )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)i[6], 1, 0xCu, &v31, &v32);
      v9 = (unsigned __int64 *)v32;
      if ( v8 < 0 )
        v9 = 0LL;
      v32 = (__int64)v9;
      if ( !v9 )
        goto LABEL_15;
      memset(PoolWithTag, 0, 8LL * v2);
      v10 = 0LL;
      v11 = v31 >> 3;
      v12 = 0LL;
      for ( j = 0; j < v11; ++v9 )
      {
        if ( !v10 || *v9 < (unsigned __int64)v10 || *v9 >= v12 )
        {
          v19 = (PVOID *)PsLoadedModuleList;
          v20 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v21 = *v9;
            while ( 1 )
            {
              v10 = v19[6];
              v12 = (unsigned __int64)v10 + *((unsigned int *)v19 + 16);
              if ( v21 >= (unsigned __int64)v10 && v21 < v12 )
                break;
              v19 = (PVOID *)*v19;
              ++v20;
              if ( v19 == v33 )
                goto LABEL_37;
            }
            *(_QWORD *)&PoolWithTag[8 * v20] = v19;
          }
LABEL_37:
          v22 = *v9;
          if ( *v9 < (unsigned __int64)v10 || v22 >= v12 )
          {
            if ( v22 )
              goto LABEL_63;
            v10 = 0LL;
          }
        }
        ++j;
      }
      v31 = 0;
      v14 = 0;
      v15 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v16 = (void **)PoolWithTag;
      v17 = v2;
      do
      {
        v18 = (PVOID *)*v16;
        if ( *v16 && v18 != v3 && v18 != v4 && v18 != i )
        {
          v15 = (unsigned __int64)*v16;
          ++v14;
        }
        ++v16;
        --v17;
      }
      while ( v17 );
      v31 = v14;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          i[17] = (PVOID)(v15 | 1);
          ++*(_WORD *)(v15 + 108);
        }
        else
        {
          if ( v14 > 0x1FFFFFFE || (v23 = ExAllocatePoolWithTag(PagedPool, 8 * v14 + 8, 0x54446D4Du)) == 0LL )
          {
LABEL_63:
            v1 = 1;
            break;
          }
          v24 = 0;
          *v23 = v14;
          v25 = PoolWithTag;
          v26 = v2;
          do
          {
            v27 = *(PVOID **)v25;
            if ( *(_QWORD *)v25 && v27 != v3 && v27 != v4 && v27 != i )
            {
              v23[v24 + 1] = v27;
              ++*(_WORD *)(*(_QWORD *)v25 + 108LL);
              ++v24;
            }
            v25 += 8;
            --v26;
          }
          while ( v26 );
          i[17] = v23;
        }
      }
      else
      {
LABEL_15:
        i[17] = (PVOID)-2LL;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    v3[17] = (PVOID)1;
    v4[17] = (PVOID)1;
    if ( v1 != 1 )
      return 0LL;
    for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
    {
      v30 = k[17];
      if ( v30 != (PVOID)1 && v30 != (PVOID)-2LL && ((unsigned __int8)v30 & 1) == 0 )
        ExFreePoolWithTag(v30, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
