/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x1405B06F0
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x1405B0050 (BiConvertRegistryDataToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1405B06F0 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiVerifyBootPartition @ 0x1405B1368 (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x140164CA0 (wcscpy_s.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1405B06F0 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x1405B0860 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x1405B1368 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140779BCC (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(_DWORD *a1, int a2, char a3, size_t *a4, unsigned int *a5)
{
  _DWORD *v5; // rdi
  int v7; // r11d
  unsigned int v8; // esi
  size_t v9; // rbx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  signed int NtPartitionPath; // edi
  void *v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // eax
  PVOID v18; // rax
  int v20; // r8d
  size_t v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
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
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  _DWORD *v40; // r10
  char *v41; // rdx
  __int64 v42; // rsi
  unsigned int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // edi
  PVOID PoolWithTag; // rax
  signed int v47; // eax
  char v48; // [rsp+30h] [rbp-48h]
  unsigned int v49; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v50; // [rsp+38h] [rbp-40h] BYREF
  PVOID v51; // [rsp+40h] [rbp-38h] BYREF
  int v52; // [rsp+48h] [rbp-30h]
  void *Src; // [rsp+50h] [rbp-28h] BYREF
  size_t v54; // [rsp+58h] [rbp-20h]
  PVOID P; // [rsp+60h] [rbp-18h]
  size_t Size; // [rsp+68h] [rbp-10h]
  unsigned int v58; // [rsp+A0h] [rbp+28h]
  size_t v59; // [rsp+A0h] [rbp+28h]

  v5 = a1;
  v7 = a2;
  v8 = 0;
  P = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v10 = *a1;
  v51 = 0LL;
  v48 = 0;
  Size = 0LL;
  v54 = 0LL;
  v52 = 0;
  if ( !v10 )
  {
    v36 = a1[4];
    if ( v36 != 3 && v36 != 5 )
      goto LABEL_91;
    v37 = 52LL;
    if ( v36 != 3 )
      v37 = 32LL;
    v38 = 9LL;
    if ( v36 != 3 )
      v38 = 4LL;
    v39 = (unsigned int)a1[2];
    v40 = &v5[v38 + 4];
    Src = v40;
    if ( v39 < v37 + 12 || v40[2] > (unsigned int)(v39 - v37) )
    {
      NtPartitionPath = -1073741811;
      goto LABEL_86;
    }
    NtPartitionPath = BiConvertBootEnvironmentDeviceToNt((_DWORD)v40, v7, 0, (unsigned int)&v51, (__int64)&v49);
    if ( NtPartitionPath < 0 )
      goto LABEL_87;
    if ( *(_DWORD *)v51 == 3 )
    {
LABEL_90:
      v5 = a1;
      goto LABEL_91;
    }
    v41 = (char *)Src + *((unsigned int *)Src + 2);
    P = v41;
    v42 = -1LL;
    do
      ++v42;
    while ( *(_WORD *)&v41[2 * v42] );
    v43 = -1;
    v44 = 2 * v42 + 34;
    LODWORD(Src) = 2 * v42 + 2;
    if ( v44 >= 0x20 )
      v43 = 2 * v42 + 34;
    NtPartitionPath = v44 < 0x20 ? 0xC0000095 : 0;
    if ( v44 < 0x20 || (NtPartitionPath = v43 + v49 < v43 ? 0xC0000095 : 0, v43 + v49 < v43) )
    {
      v8 = v54;
      goto LABEL_86;
    }
    v45 = (2 * v42 + 33) & 0xFFFFFFF8;
    v8 = v49 + v45;
    Size = v49 + v45;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
    v9 = (size_t)PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_19:
      NtPartitionPath = -1073741670;
      goto LABEL_14;
    }
    memset(PoolWithTag, 0, Size);
    memmove((void *)(v9 + 24), P, (unsigned int)Src);
    *(_DWORD *)(v9 + 20) = v45;
    memmove((void *)(v9 + v45), v51, v49);
    *(_DWORD *)v9 = 4 - (a1[4] != 3);
    goto LABEL_12;
  }
  v11 = v10 - 2;
  if ( !v11 )
    goto LABEL_5;
  v12 = v11 - 3;
  if ( !v12 )
  {
    v8 = 20;
    v9 = (size_t)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
    if ( v9 )
    {
      NtPartitionPath = 0;
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_DWORD *)(v9 + 16) = 0;
      *(_DWORD *)v9 = 1;
      goto LABEL_13;
    }
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_5:
    NtPartitionPath = BiVerifyBootPartition((_DWORD)a1, 0, 0, 0, 0LL, (__int64)&v50);
    if ( NtPartitionPath < 0 )
      goto LABEL_87;
    if ( (a3 & 0x20) != 0 && v50 )
    {
      NtPartitionPath = -1073741823;
      goto LABEL_56;
    }
    NtPartitionPath = BiGetNtPartitionPath(a1, &Src);
    if ( NtPartitionPath < 0 )
    {
      P = Src;
LABEL_56:
      if ( !v50 )
        goto LABEL_86;
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(
                          (unsigned int)a1 + v50,
                          a2,
                          0,
                          (unsigned int)&v51,
                          (__int64)&v49);
      if ( NtPartitionPath >= 0 )
      {
        v8 = v49 + 34;
        v54 = v49 + 34;
        v52 = v49 + 34;
        v34 = ExAllocatePoolWithTag(PagedPool, v54, 0x4B444342u);
        Size = (size_t)v34;
        v9 = (size_t)v34;
        if ( v34 )
        {
          memset(v34, 0, v54);
          *(_DWORD *)v9 = 8;
          v35 = 301989890;
          *(_DWORD *)(v9 + 20) = 0;
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
          *(_DWORD *)(v9 + 28) = v35;
          *(_DWORD *)(v9 + 24) = 34;
          memmove((void *)(v9 + 34), v51, v49);
LABEL_86:
          if ( NtPartitionPath < 0 )
            goto LABEL_87;
LABEL_13:
          *a4 = v9;
          *a5 = v8;
          goto LABEL_14;
        }
        goto LABEL_19;
      }
LABEL_87:
      if ( NtPartitionPath == -1073741670 )
        goto LABEL_92;
      if ( v9 )
        ExFreePoolWithTag((PVOID)v9, 0x4B444342u);
      goto LABEL_90;
    }
    v15 = Src;
    v16 = -1LL;
    P = Src;
    v48 = 1;
    do
      ++v16;
    while ( *((_WORD *)Src + v16) );
    v17 = 2 * v16 + 2;
    v8 = 2 * v16 + 22;
    v58 = v17;
    Size = v8;
    v18 = ExAllocatePoolWithTag(PagedPool, v8, 0x4B444342u);
    v9 = (size_t)v18;
    if ( !v18 )
      goto LABEL_19;
    memset(v18, 0, Size);
    *(_DWORD *)v9 = 2;
    memmove((void *)(v9 + 20), v15, v58);
LABEL_12:
    NtPartitionPath = 0;
    goto LABEL_13;
  }
  v20 = v13 - 1;
  if ( !v20 )
  {
    v8 = 36;
    v33 = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
    v9 = (size_t)v33;
    if ( !v33 )
      goto LABEL_19;
    memset(v33, 0, 0x24uLL);
    *(_DWORD *)v9 = 7;
    *(_OWORD *)(v9 + 20) = *((_OWORD *)v5 + 2);
    goto LABEL_12;
  }
  if ( v20 == 1 )
  {
    v21 = 34LL;
    v22 = -1LL;
    v54 = 34LL;
    v52 = 34;
    if ( a1[4] == 1 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *((_WORD *)a1 + v23 + 14) );
      v21 = (unsigned int)(2 * v23 + 34);
      v54 = v21;
      v52 = v21;
    }
    v49 = 0;
    v24 = a1[6];
    v50 = v24;
    if ( !v24 )
    {
LABEL_40:
      v59 = v21;
      v30 = ExAllocatePoolWithTag(PagedPool, v21, 0x4B444342u);
      v9 = (size_t)v30;
      if ( v30 )
      {
        memset(v30, 0, v59);
        *(_DWORD *)v9 = 8;
        if ( v5[4] )
        {
          *(_DWORD *)(v9 + 20) = 1;
          v31 = (const wchar_t *)(v5 + 7);
          do
            ++v22;
          while ( v31[v22] );
          wcscpy_s((wchar_t *)(v9 + 32), v22 + 1, v31);
        }
        else
        {
          *(_DWORD *)(v9 + 20) = 0;
          *(_DWORD *)(v9 + 28) = v5[5];
        }
        if ( v51 )
        {
          v32 = v50;
          *(_DWORD *)(v9 + 24) = v50;
          memmove((void *)(v9 + v32), v51, v49);
        }
        v8 = v54;
        NtPartitionPath = 0;
        goto LABEL_13;
      }
      goto LABEL_19;
    }
    if ( (a3 & 0x20) == 0 )
    {
      v25 = BiGetNtPartitionPath(v5, &Src);
      P = Src;
      if ( v25 >= 0 )
      {
        v48 = 1;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)Src + v26) );
        LODWORD(Src) = 2 * v26 + 2;
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
        v28 = (unsigned int)Src;
        v29 = P;
        *(_DWORD *)v51 = 2;
        memmove((char *)v51 + 20, v29, v28);
      }
      if ( v51 )
      {
LABEL_39:
        v50 = v54;
        v21 = v49 + (unsigned int)v54;
        v54 = v21;
        goto LABEL_40;
      }
      v24 = v50;
      v7 = a2;
    }
    if ( v5[2] - v24 >= 0x4C )
    {
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(
                          v24 + (_DWORD)v5 + 40,
                          v7,
                          0,
                          (unsigned int)&v51,
                          (__int64)&v49);
      if ( NtPartitionPath < 0 )
      {
        v8 = v54;
        goto LABEL_87;
      }
      v5 = a1;
      goto LABEL_39;
    }
  }
LABEL_91:
  v47 = BiConvertBootEnvironmentDeviceToUnknown(v5);
  v9 = Size;
  NtPartitionPath = v47;
  v8 = v52;
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
