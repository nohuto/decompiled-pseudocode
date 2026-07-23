/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140848304
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1408481FC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  int v1; // ebx
  unsigned int v2; // r12d
  PVOID *v3; // r14
  PVOID *v4; // rbp
  PVOID v5; // rax
  PVOID *v6; // rdx
  unsigned __int64 v7; // r8
  PVOID PoolWithTag; // r15
  PVOID *i; // rsi
  NTSTATUS v10; // eax
  unsigned __int64 *v11; // rdi
  PVOID v12; // rcx
  unsigned int v13; // r10d
  unsigned int j; // r11d
  unsigned int v15; // edi
  unsigned __int64 v16; // rcx
  PVOID *v17; // rax
  unsigned int v18; // r9d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned int v22; // r9d
  __int64 v23; // r10
  PVOID *v24; // rcx
  PVOID *k; // rbx
  PVOID v27; // rcx
  unsigned int v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  PVOID *v30; // [rsp+80h] [rbp+18h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v30 = &PsLoadedModuleList;
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
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v2, 0x54446D4Du);
  if ( PoolWithTag )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      LOWORD(v7) = 12;
      LOBYTE(v6) = 1;
      v10 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)i[6], (__int64)v6, v7, (__int64)&v28, &v29);
      v11 = (unsigned __int64 *)v29;
      if ( v10 < 0 )
        v11 = 0LL;
      v29 = (__int64)v11;
      if ( !v11 )
        goto LABEL_15;
      memset(PoolWithTag, 0, 8LL * v2);
      v12 = 0LL;
      v13 = v28 >> 3;
      v7 = 0LL;
      for ( j = 0; j < v13; ++v11 )
      {
        if ( !v12 || *v11 < (unsigned __int64)v12 || *v11 >= v7 )
        {
          v6 = (PVOID *)PsLoadedModuleList;
          v18 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v19 = *v11;
            while ( 1 )
            {
              v12 = v6[6];
              v7 = (unsigned __int64)v12 + *((unsigned int *)v6 + 16);
              if ( v19 >= (unsigned __int64)v12 && v19 < v7 )
                break;
              v6 = (PVOID *)*v6;
              ++v18;
              if ( v6 == v30 )
                goto LABEL_37;
            }
            *((_QWORD *)PoolWithTag + v18) = v6;
          }
LABEL_37:
          v20 = *v11;
          if ( *v11 < (unsigned __int64)v12 || v20 >= v7 )
          {
            if ( v20 )
              goto LABEL_63;
            v12 = 0LL;
          }
        }
        ++j;
      }
      v28 = 0;
      v15 = 0;
      v16 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v6 = (PVOID *)PoolWithTag;
      v7 = v2;
      do
      {
        v17 = (PVOID *)*v6;
        if ( *v6 && v17 != v3 && v17 != v4 && v17 != i )
        {
          v16 = (unsigned __int64)*v6;
          ++v15;
        }
        ++v6;
        --v7;
      }
      while ( v7 );
      v28 = v15;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          i[17] = (PVOID)(v16 | 1);
          ++*(_WORD *)(v16 + 108);
        }
        else
        {
          if ( v15 > 0x1FFFFFFE
            || (v21 = ExAllocatePoolWithTag(PagedPool, 8 * v15 + 8, 0x54446D4Du), (v7 = (unsigned __int64)v21) == 0) )
          {
LABEL_63:
            v1 = 1;
            break;
          }
          v22 = 0;
          *v21 = v15;
          v6 = (PVOID *)PoolWithTag;
          v23 = v2;
          do
          {
            v24 = (PVOID *)*v6;
            if ( *v6 && v24 != v3 && v24 != v4 && v24 != i )
            {
              v21[v22 + 1] = v24;
              ++*((_WORD *)*v6 + 54);
              ++v22;
            }
            ++v6;
            --v23;
          }
          while ( v23 );
          i[17] = v21;
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
      v27 = k[17];
      if ( v27 != (PVOID)1 && v27 != (PVOID)-2LL && ((unsigned __int8)v27 & 1) == 0 )
        ExFreePoolWithTag(v27, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
