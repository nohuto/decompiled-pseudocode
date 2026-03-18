/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140589D30
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140589D30 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x14058C244 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x14058CDE8 (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x1401704A0 (wcscpy_s.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140589D30 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x14058CDE8 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140735788 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(char *Src, int a2, char a3, size_t *a4, unsigned int *a5)
{
  char *v5; // rdi
  size_t v7; // rbx
  int v8; // r8d
  unsigned int v9; // esi
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  signed int NtPartitionPath; // edi
  void *v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // eax
  PVOID v17; // rax
  int v19; // r8d
  size_t v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  PVOID v26; // rax
  size_t v27; // r8
  PVOID v28; // rdx
  PVOID v29; // rax
  const wchar_t *v30; // r8
  __int64 v31; // rax
  PVOID v32; // rax
  PVOID v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  char *v39; // r10
  char *v40; // rdx
  __int64 v41; // rsi
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // edi
  PVOID PoolWithTag; // rax
  signed int v46; // eax
  char v47; // [rsp+30h] [rbp-48h]
  unsigned int v48; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v49; // [rsp+38h] [rbp-40h] BYREF
  PVOID v50; // [rsp+40h] [rbp-38h]
  int v51; // [rsp+48h] [rbp-30h]
  void *Srca; // [rsp+50h] [rbp-28h] BYREF
  size_t v53; // [rsp+58h] [rbp-20h]
  PVOID P; // [rsp+60h] [rbp-18h]
  size_t Size; // [rsp+68h] [rbp-10h]
  unsigned int v57; // [rsp+A0h] [rbp+28h]
  size_t v58; // [rsp+A0h] [rbp+28h]

  v5 = Src;
  v50 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Srca = 0LL;
  v8 = *(_DWORD *)Src;
  v9 = 0;
  v47 = 0;
  Size = 0LL;
  v53 = 0LL;
  v51 = 0;
  if ( !v8 )
  {
    v35 = *((_DWORD *)Src + 4);
    if ( v35 == 3 )
    {
      v36 = 52;
      v37 = 36LL;
    }
    else
    {
      if ( v35 != 5 )
        goto LABEL_89;
      v36 = 32;
      v37 = 16LL;
    }
    v38 = *((unsigned int *)Src + 2);
    v39 = &v5[v37 + 16];
    Srca = v39;
    if ( v38 < (unsigned __int64)v36 + 12 || *((_DWORD *)v39 + 2) > (unsigned int)v38 - v36 )
    {
      NtPartitionPath = -1073741811;
      goto LABEL_84;
    }
    NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(v39, (__int64)&v48);
    if ( NtPartitionPath < 0 )
      goto LABEL_85;
    if ( *(_DWORD *)v50 == 3 )
    {
LABEL_88:
      v5 = Src;
      goto LABEL_89;
    }
    v40 = (char *)Srca + *((unsigned int *)Srca + 2);
    P = v40;
    v41 = -1LL;
    do
      ++v41;
    while ( *(_WORD *)&v40[2 * v41] );
    v42 = -1;
    v43 = 2 * v41 + 34;
    LODWORD(Srca) = 2 * v41 + 2;
    if ( v43 >= 0x20 )
      v42 = 2 * v41 + 34;
    NtPartitionPath = v43 < 0x20 ? 0xC0000095 : 0;
    if ( v43 < 0x20 || (NtPartitionPath = v42 + v48 < v42 ? 0xC0000095 : 0, v42 + v48 < v42) )
    {
      v9 = v53;
      goto LABEL_84;
    }
    v44 = (2 * v41 + 33) & 0xFFFFFFF8;
    v9 = v48 + v44;
    Size = v48 + v44;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
    v7 = (size_t)PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_19:
      NtPartitionPath = -1073741670;
      goto LABEL_14;
    }
    memset(PoolWithTag, 0, Size);
    memmove((void *)(v7 + 24), P, (unsigned int)Srca);
    *(_DWORD *)(v7 + 20) = v44;
    memmove((void *)(v7 + v44), v50, v48);
    *(_DWORD *)v7 = 4 - (*((_DWORD *)Src + 4) != 3);
    goto LABEL_12;
  }
  v10 = v8 - 2;
  if ( !v10 )
    goto LABEL_5;
  v11 = v10 - 3;
  if ( !v11 )
  {
    v9 = 20;
    v7 = (size_t)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
    if ( !v7 )
      goto LABEL_19;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)v7 = 1;
    goto LABEL_12;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_5:
    NtPartitionPath = BiVerifyBootPartition((_DWORD)Src, 0, 0, 0, 0LL, (__int64)&v49);
    if ( NtPartitionPath < 0 )
      goto LABEL_85;
    if ( (a3 & 0x20) != 0 && v49 )
    {
      NtPartitionPath = -1073741823;
      goto LABEL_56;
    }
    NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
    if ( NtPartitionPath < 0 )
    {
      P = Srca;
LABEL_56:
      if ( !v49 )
        goto LABEL_84;
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&Src[v49], (__int64)&v48);
      if ( NtPartitionPath >= 0 )
      {
        v9 = v48 + 34;
        v53 = v48 + 34;
        v51 = v48 + 34;
        v33 = ExAllocatePoolWithTag(PagedPool, v53, 0x4B444342u);
        Size = (size_t)v33;
        v7 = (size_t)v33;
        if ( v33 )
        {
          memset(v33, 0, v53);
          *(_DWORD *)v7 = 8;
          v34 = 301989890;
          *(_DWORD *)(v7 + 20) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v34 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v34 = 301989956;
            }
          }
          *(_DWORD *)(v7 + 28) = v34;
          *(_DWORD *)(v7 + 24) = 34;
          memmove((void *)(v7 + 34), v50, v48);
LABEL_84:
          if ( NtPartitionPath < 0 )
            goto LABEL_85;
LABEL_13:
          *a4 = v7;
          *a5 = v9;
          goto LABEL_14;
        }
        goto LABEL_19;
      }
LABEL_85:
      if ( NtPartitionPath == -1073741670 )
        goto LABEL_90;
      if ( v7 )
        ExFreePoolWithTag((PVOID)v7, 0x4B444342u);
      goto LABEL_88;
    }
    v14 = Srca;
    v15 = -1LL;
    P = Srca;
    v47 = 1;
    do
      ++v15;
    while ( *((_WORD *)Srca + v15) );
    v16 = 2 * v15 + 2;
    v9 = 2 * v15 + 22;
    v57 = v16;
    Size = v9;
    v17 = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
    v7 = (size_t)v17;
    if ( !v17 )
      goto LABEL_19;
    memset(v17, 0, Size);
    *(_DWORD *)v7 = 2;
    memmove((void *)(v7 + 20), v14, v57);
LABEL_12:
    NtPartitionPath = 0;
    goto LABEL_13;
  }
  v19 = v12 - 1;
  if ( !v19 )
  {
    v9 = 36;
    v32 = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
    v7 = (size_t)v32;
    if ( !v32 )
      goto LABEL_19;
    memset(v32, 0, 0x24uLL);
    *(_DWORD *)v7 = 7;
    *(_OWORD *)(v7 + 20) = *((_OWORD *)v5 + 2);
    goto LABEL_12;
  }
  if ( v19 == 1 )
  {
    v20 = 34LL;
    v21 = -1LL;
    v53 = 34LL;
    v51 = 34;
    if ( *((_DWORD *)Src + 4) == 1 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)&Src[2 * v22 + 28] );
      v20 = (unsigned int)(2 * v22 + 34);
      v53 = v20;
      v51 = v20;
    }
    v23 = *((_DWORD *)Src + 6);
    v48 = 0;
    v49 = v23;
    if ( !v23 )
    {
LABEL_40:
      v58 = v20;
      v29 = ExAllocatePoolWithTag(PagedPool, v20, 0x4B444342u);
      v7 = (size_t)v29;
      if ( v29 )
      {
        memset(v29, 0, v58);
        *(_DWORD *)v7 = 8;
        if ( *((_DWORD *)v5 + 4) )
        {
          *(_DWORD *)(v7 + 20) = 1;
          v30 = (const wchar_t *)(v5 + 28);
          do
            ++v21;
          while ( v30[v21] );
          wcscpy_s((wchar_t *)(v7 + 32), v21 + 1, v30);
        }
        else
        {
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 28) = *((_DWORD *)v5 + 5);
        }
        if ( v50 )
        {
          v31 = v49;
          *(_DWORD *)(v7 + 24) = v49;
          memmove((void *)(v7 + v31), v50, v48);
        }
        v9 = v53;
        NtPartitionPath = 0;
        goto LABEL_13;
      }
      goto LABEL_19;
    }
    if ( (a3 & 0x20) == 0 )
    {
      v24 = BiGetNtPartitionPath(v5, &Srca);
      P = Srca;
      if ( v24 >= 0 )
      {
        v47 = 1;
        v25 = -1LL;
        do
          ++v25;
        while ( *((_WORD *)Srca + v25) );
        LODWORD(Srca) = 2 * v25 + 2;
        v48 = 2 * v25 + 22;
        v26 = ExAllocatePoolWithTag(PagedPool, v48, 0x4B444342u);
        v50 = v26;
        if ( !v26 )
        {
          NtPartitionPath = -1073741670;
LABEL_17:
          ExFreePoolWithTag(P, 0x4B444342u);
          return (unsigned int)NtPartitionPath;
        }
        memset(v26, 0, v48);
        v27 = (unsigned int)Srca;
        v28 = P;
        *(_DWORD *)v50 = 2;
        memmove((char *)v50 + 20, v28, v27);
      }
      if ( v50 )
      {
LABEL_39:
        v49 = v53;
        v20 = v48 + (unsigned int)v53;
        v53 = v20;
        goto LABEL_40;
      }
      v23 = v49;
    }
    if ( *((_DWORD *)v5 + 2) - v23 >= 0x4C )
    {
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&v5[v23 + 40], (__int64)&v48);
      if ( NtPartitionPath < 0 )
      {
        v9 = v53;
        goto LABEL_85;
      }
      v5 = Src;
      goto LABEL_39;
    }
  }
LABEL_89:
  v46 = BiConvertBootEnvironmentDeviceToUnknown(v5);
  v7 = Size;
  NtPartitionPath = v46;
  v9 = v51;
LABEL_90:
  if ( NtPartitionPath >= 0 )
    goto LABEL_13;
LABEL_14:
  if ( v50 )
    ExFreePoolWithTag(v50, 0x4B444342u);
  if ( v47 )
    goto LABEL_17;
  return (unsigned int)NtPartitionPath;
}
