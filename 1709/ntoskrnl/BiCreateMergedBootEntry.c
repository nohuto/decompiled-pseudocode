/*
 * XREFs of BiCreateMergedBootEntry @ 0x14077B58C
 * Callers:
 *     BiUpdateEfiEntry @ 0x14077D100 (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BiGetDeviceFromEfiPath @ 0x14077C0B8 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x14077C250 (BiGetFilePathFromEfiPath.c)
 *     BiTranslateFilePath @ 0x14077CCC8 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, char *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v6; // r9
  __int64 v7; // rax
  _DWORD *v9; // rdi
  _WORD *v10; // r15
  _FILE_PATH *v11; // r14
  char *v13; // rax
  signed int DeviceFromEfiPath; // ebx
  int FilePathFromEfiPath; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  _FILE_PATH *PoolWithTag; // rax
  void *v24; // rdx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // r8d
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ebx
  _DWORD *v32; // rax
  _DWORD *v33; // r12
  __int64 v34; // rcx
  size_t v35; // r8
  int v36; // eax
  char v37; // [rsp+20h] [rbp-30h]
  _DWORD Size[3]; // [rsp+24h] [rbp-2Ch] BYREF
  size_t v39; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v40; // [rsp+38h] [rbp-18h]
  void *Src; // [rsp+40h] [rbp-10h]
  char *v42; // [rsp+98h] [rbp+48h]
  char v43; // [rsp+A0h] [rbp+50h]

  v42 = a2;
  v6 = 0xFFFFFFFFLL;
  Src = 0LL;
  v7 = -1LL;
  v40 = 0LL;
  v43 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v37 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 )
  {
    if ( *a3 != 2 )
      return 3221225485LL;
    v13 = (char *)(a3 + 5);
  }
  else
  {
    v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !a4 )
      goto LABEL_26;
    v40 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v9 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_35;
    v13 = (char *)Src + 20;
  }
  Src = v13;
  if ( a4 )
  {
    v10 = a4;
    goto LABEL_12;
  }
  v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v40 = v9;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v9 + 3, &Size[1], &v39, v6);
  v10 = *(_WORD **)&Size[1];
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v37 = 1;
LABEL_12:
    v16 = -1LL;
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)Src + v17) );
    v18 = 2 * v17 + 2;
    Size[0] = v18;
    do
      ++v16;
    while ( v10[v16] );
    Size[1] = 2 * v16 + 2;
    v19 = -1;
    v20 = v18 + Size[1];
    if ( v18 + Size[1] >= v18 )
      v19 = v18 + Size[1];
    DeviceFromEfiPath = v20 < v18 ? 0xC0000095 : 0;
    if ( v20 < v18 )
      goto LABEL_35;
    v21 = v19 + 12;
    v22 = -1;
    if ( v19 + 12 >= v19 )
      v22 = v19 + 12;
    DeviceFromEfiPath = v21 < v19 ? 0xC0000095 : 0;
    if ( v21 < v19 )
      goto LABEL_35;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v22, 0x4B444342u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_23:
      DeviceFromEfiPath = -1073741670;
      goto LABEL_35;
    }
    v24 = Src;
    PoolWithTag->Version = 1;
    PoolWithTag->Length = v22;
    PoolWithTag->Type = 3;
    memmove(PoolWithTag->FilePath, v24, Size[0]);
    memmove(&v11->FilePath[Size[0]], v10, Size[1]);
    v25 = BiTranslateFilePath(v11, 4u);
    v9 = v40;
    DeviceFromEfiPath = v25;
    if ( v25 < 0 )
      goto LABEL_35;
    a2 = v42;
    v7 = -1LL;
    LODWORD(v6) = -1;
    v43 = 1;
LABEL_26:
    if ( !a2 )
    {
      a2 = (char *)a1 + (unsigned int)a1[4];
      v42 = a2;
    }
    do
      ++v7;
    while ( *(_WORD *)&a2[2 * v7] );
    v26 = a1[6];
    v27 = 2 * v7 + 2;
    LODWORD(v39) = v27;
    v28 = v26 + v27;
    if ( v26 + v27 >= v26 )
      LODWORD(v6) = v26 + v27;
    DeviceFromEfiPath = v28 < v26 ? 0xC0000095 : 0;
    if ( v28 < v26 )
      goto LABEL_35;
    v29 = v9[1];
    v30 = v29 + v6 + 36;
    DeviceFromEfiPath = v30 < (unsigned int)v6 ? 0xC0000095 : 0;
    if ( v30 < (unsigned int)v6 )
      goto LABEL_35;
    Size[1] = (v26 + 31) & 0xFFFFFFFC;
    Size[0] = (v27 + Size[1] + 3) & 0xFFFFFFFC;
    v31 = v29 + Size[0];
    v32 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v29 + Size[0]), 0x4B444342u);
    v33 = v32;
    if ( v32 )
    {
      memset(v32, 0, v31);
      v34 = Size[1];
      v35 = (unsigned int)v39;
      v33[1] = v31;
      *v33 = 1;
      v33[2] = a1[2];
      v36 = a1[3];
      v33[4] = v34;
      v33[3] = v36;
      v33[5] = Size[0];
      v33[6] = a1[6];
      memmove((char *)v33 + v34, v42, v35);
      memmove((char *)v33 + Size[0], v9, (unsigned int)v9[1]);
      memmove(v33 + 7, a1 + 7, (unsigned int)a1[6]);
      DeviceFromEfiPath = 0;
      *a5 = v33;
      goto LABEL_35;
    }
    goto LABEL_23;
  }
LABEL_35:
  if ( v43 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v37 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
