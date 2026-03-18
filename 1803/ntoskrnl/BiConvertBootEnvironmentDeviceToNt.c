/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140607118
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140607118 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x140609628 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x14060A05C (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x14018EC10 (wcscpy_s.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140607118 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14060729C (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x14060A05C (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1407E25A0 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(char *Src, int a2, char a3, size_t *a4, unsigned int *a5)
{
  int v6; // r8d
  size_t v7; // rbx
  unsigned int v8; // esi
  char *v9; // rdi
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  signed int NtPartitionPath; // edi
  _DWORD *v14; // rsi
  void *v15; // rdi
  __int64 v16; // rsi
  PVOID v17; // rax
  int v19; // r8d
  size_t v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  size_t v23; // rax
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  PVOID v27; // rax
  size_t v28; // r8
  PVOID v29; // rdx
  PVOID v30; // rax
  const wchar_t *v31; // r8
  __int64 v32; // rax
  PVOID v33; // rax
  PVOID v34; // rax
  int v35; // eax
  int v36; // edx
  __int64 v37; // rax
  char *v38; // r10
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  char *v41; // r9
  __int64 v42; // rsi
  unsigned int v43; // edx
  unsigned int v44; // esi
  unsigned int v45; // edi
  PVOID PoolWithTag; // rax
  signed int v47; // eax
  char v48; // [rsp+38h] [rbp-21h]
  unsigned int v49; // [rsp+3Ch] [rbp-1Dh] BYREF
  unsigned int v50; // [rsp+40h] [rbp-19h] BYREF
  PVOID v51; // [rsp+48h] [rbp-11h]
  size_t v52; // [rsp+50h] [rbp-9h]
  int v53; // [rsp+58h] [rbp-1h]
  void *Srca; // [rsp+60h] [rbp+7h] BYREF
  PVOID P; // [rsp+68h] [rbp+Fh]
  size_t Size; // [rsp+70h] [rbp+17h]
  int v57; // [rsp+78h] [rbp+1Fh]
  unsigned int v59; // [rsp+B8h] [rbp+5Fh]
  size_t v60; // [rsp+B8h] [rbp+5Fh]

  v6 = *(_DWORD *)Src;
  v51 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Srca = 0LL;
  v8 = 0;
  Size = 0LL;
  v9 = Src;
  v52 = 0LL;
  v48 = 0;
  v53 = 0;
  if ( !v6 )
  {
    v36 = *((_DWORD *)Src + 4);
    if ( v36 != 3 && v36 != 5 )
      goto LABEL_91;
    v37 = 36LL;
    if ( v36 != 3 )
      v37 = 16LL;
    v38 = &Src[v37 + 16];
    v39 = 52LL;
    Srca = v38;
    if ( v36 != 3 )
      v39 = 32LL;
    v40 = *((unsigned int *)Src + 2);
    if ( v40 < v39 + 12 || *((_DWORD *)v38 + 2) > (unsigned int)(v40 - v39) )
    {
      NtPartitionPath = -1073741811;
      goto LABEL_86;
    }
    NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(v38, (__int64)&v49);
    if ( NtPartitionPath < 0 )
      goto LABEL_87;
    if ( *(_DWORD *)v51 == 3 )
    {
LABEL_90:
      v9 = Src;
      goto LABEL_91;
    }
    v41 = (char *)Srca + *((unsigned int *)Srca + 2);
    P = v41;
    v42 = -1LL;
    do
      ++v42;
    while ( *(_WORD *)&v41[2 * v42] );
    v43 = -1;
    v44 = 2 * v42 + 2;
    if ( v44 < 0xFFFFFFE0 )
      v43 = v44 + 32;
    NtPartitionPath = v44 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
    if ( v44 + 32 < 0x20 )
      goto LABEL_85;
    NtPartitionPath = v43 + v49 < v43 ? 0xC0000095 : 0;
    if ( v43 + v49 < v43 )
      goto LABEL_85;
    v45 = (v44 + 31) & 0xFFFFFFF8;
    Size = v49 + v45;
    v52 = Size;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
    v7 = (size_t)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_19;
    memset(PoolWithTag, 0, Size);
    memmove((void *)(v7 + 24), P, v44);
    *(_DWORD *)(v7 + 20) = v45;
    memmove((void *)(v7 + v45), v51, v49);
    *(_DWORD *)v7 = 4 - (*((_DWORD *)Src + 4) != 3);
LABEL_48:
    v8 = v52;
    NtPartitionPath = 0;
    goto LABEL_13;
  }
  v10 = v6 - 2;
  if ( !v10 )
    goto LABEL_5;
  v11 = v10 - 3;
  if ( !v11 )
  {
    v8 = 20;
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
    NtPartitionPath = BiVerifyBootPartition((_DWORD)Src, 0, 0, 0, 0LL, (__int64)&v50);
    if ( NtPartitionPath >= 0 )
    {
      if ( (a3 & 0x20) != 0 && v50 )
      {
        v14 = Src;
        NtPartitionPath = -1073741823;
        goto LABEL_56;
      }
      v14 = Src;
      NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
      if ( NtPartitionPath < 0 )
      {
        P = Srca;
LABEL_56:
        if ( v50 )
        {
          NtPartitionPath = BiConvertBootEnvironmentDeviceToNt((char *)v14 + v50, (__int64)&v49);
          if ( NtPartitionPath >= 0 )
          {
            v53 = v49 + 34;
            v8 = v49 + 34;
            v52 = v49 + 34;
            v34 = ExAllocatePoolWithTag(PagedPool, v52, 0x4B444342u);
            Size = (size_t)v34;
            v7 = (size_t)v34;
            if ( v34 )
            {
              memset(v34, 0, v52);
              *(_DWORD *)v7 = 8;
              v35 = 301989890;
              *(_DWORD *)(v7 + 20) = 0;
              if ( a2 )
              {
                if ( a2 == 553648129 )
                {
                  v35 = 570425346;
                }
                else if ( a2 == 285212739 )
                {
                  v35 = 301989956;
                }
              }
              *(_DWORD *)(v7 + 28) = v35;
              *(_DWORD *)(v7 + 24) = 34;
              memmove((void *)(v7 + 34), v51, v49);
LABEL_86:
              if ( NtPartitionPath < 0 )
                goto LABEL_87;
LABEL_13:
              *a4 = v7;
              *a5 = v8;
              goto LABEL_14;
            }
LABEL_19:
            NtPartitionPath = -1073741670;
            goto LABEL_14;
          }
          goto LABEL_83;
        }
LABEL_85:
        v8 = v52;
        goto LABEL_86;
      }
      v15 = Srca;
      v16 = -1LL;
      P = Srca;
      v48 = 1;
      do
        ++v16;
      while ( *((_WORD *)Srca + v16) );
      v59 = 2 * v16 + 2;
      Size = (unsigned int)(2 * v16 + 22);
      v8 = 2 * v16 + 22;
      v17 = ExAllocatePoolWithTag(PagedPool, v8, 0x4B444342u);
      v7 = (size_t)v17;
      if ( !v17 )
        goto LABEL_19;
      memset(v17, 0, Size);
      *(_DWORD *)v7 = 2;
      memmove((void *)(v7 + 20), v15, v59);
LABEL_12:
      NtPartitionPath = 0;
      goto LABEL_13;
    }
LABEL_87:
    if ( NtPartitionPath == -1073741670 )
      goto LABEL_92;
    if ( v7 )
      ExFreePoolWithTag((PVOID)v7, 0x4B444342u);
    goto LABEL_90;
  }
  v19 = v12 - 1;
  if ( !v19 )
  {
    v8 = 36;
    v33 = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
    v7 = (size_t)v33;
    if ( !v33 )
      goto LABEL_19;
    memset(v33, 0, 0x24uLL);
    *(_DWORD *)v7 = 7;
    *(_OWORD *)(v7 + 20) = *((_OWORD *)v9 + 2);
    goto LABEL_12;
  }
  if ( v19 == 1 )
  {
    v20 = 34LL;
    v21 = -1LL;
    v57 = 34;
    v52 = 34LL;
    v53 = 34;
    if ( *((_DWORD *)Src + 4) == 1 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)&Src[2 * v22 + 28] );
      v23 = (unsigned int)(2 * v22 + 34);
      v20 = (unsigned int)v23;
      v57 = v23;
      v52 = v23;
      v53 = v23;
    }
    v24 = *((_DWORD *)Src + 6);
    v49 = 0;
    v50 = v24;
    if ( !v24 )
      goto LABEL_40;
    if ( (a3 & 0x20) == 0 )
    {
      v25 = BiGetNtPartitionPath(v9, &Srca);
      P = Srca;
      if ( v25 >= 0 )
      {
        v48 = 1;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)Srca + v26) );
        LODWORD(Srca) = 2 * v26 + 2;
        v49 = 2 * v26 + 22;
        v27 = ExAllocatePoolWithTag(PagedPool, v49, 0x4B444342u);
        v51 = v27;
        if ( !v27 )
        {
          NtPartitionPath = -1073741670;
LABEL_17:
          ExFreePoolWithTag(P, 0x4B444342u);
          return (unsigned int)NtPartitionPath;
        }
        memset(v27, 0, v49);
        v28 = (unsigned int)Srca;
        v29 = P;
        *(_DWORD *)v51 = 2;
        memmove((char *)v51 + 20, v29, v28);
      }
      if ( v51 )
      {
LABEL_39:
        v50 = v57;
        v52 = v57 + v49;
        v20 = v52;
LABEL_40:
        v60 = (unsigned int)v20;
        v30 = ExAllocatePoolWithTag(PagedPool, v20, 0x4B444342u);
        v7 = (size_t)v30;
        if ( !v30 )
          goto LABEL_19;
        memset(v30, 0, v60);
        *(_DWORD *)v7 = 8;
        if ( *((_DWORD *)v9 + 4) )
        {
          *(_DWORD *)(v7 + 20) = 1;
          v31 = (const wchar_t *)(v9 + 28);
          do
            ++v21;
          while ( v31[v21] );
          wcscpy_s((wchar_t *)(v7 + 32), v21 + 1, v31);
        }
        else
        {
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 28) = *((_DWORD *)v9 + 5);
        }
        if ( v51 )
        {
          v32 = v50;
          *(_DWORD *)(v7 + 24) = v50;
          memmove((void *)(v7 + v32), v51, v49);
        }
        goto LABEL_48;
      }
      v24 = v50;
    }
    if ( *((_DWORD *)v9 + 2) - v24 >= 0x4C )
    {
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&v9[v24 + 40], (__int64)&v49);
      if ( NtPartitionPath < 0 )
      {
LABEL_83:
        v8 = v52;
        goto LABEL_87;
      }
      v9 = Src;
      goto LABEL_39;
    }
  }
LABEL_91:
  v47 = BiConvertBootEnvironmentDeviceToUnknown(v9);
  v7 = Size;
  NtPartitionPath = v47;
  v8 = v53;
LABEL_92:
  if ( NtPartitionPath >= 0 )
    goto LABEL_13;
LABEL_14:
  if ( v51 )
    ExFreePoolWithTag(v51, 0x4B444342u);
  if ( v48 )
    goto LABEL_17;
  return (unsigned int)NtPartitionPath;
}
