/*
 * XREFs of BiCreateMergedBootEntry @ 0x140737008
 * Callers:
 *     BiUpdateEfiEntry @ 0x140738988 (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiGetDeviceFromEfiPath @ 0x140737A54 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140737BE0 (BiGetFilePathFromEfiPath.c)
 *     BiTranslateFilePath @ 0x140738574 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, char *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  signed int DeviceFromEfiPath; // ebx
  char *v7; // r9
  unsigned int v8; // edx
  __int64 v9; // rax
  _DWORD *v11; // rdi
  _WORD *v12; // r14
  _FILE_PATH *v13; // r15
  char *v15; // rax
  int FilePathFromEfiPath; // eax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // r12d
  _FILE_PATH *PoolWithTag; // rax
  void *v25; // rdx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // r9d
  unsigned int v29; // eax
  int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // ebx
  _DWORD *v33; // rax
  _DWORD *v34; // r12
  __int64 v35; // rcx
  size_t v36; // r8
  int v37; // eax
  char v38; // [rsp+20h] [rbp-30h]
  _DWORD Size[3]; // [rsp+24h] [rbp-2Ch] BYREF
  size_t v40; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v41; // [rsp+38h] [rbp-18h]
  void *Src; // [rsp+40h] [rbp-10h]
  char *v43; // [rsp+98h] [rbp+48h]
  char v44; // [rsp+A0h] [rbp+50h]

  v43 = a2;
  DeviceFromEfiPath = 0;
  v7 = a2;
  Src = 0LL;
  v8 = -1;
  v41 = 0LL;
  v9 = -1LL;
  v44 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v38 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    if ( *a3 != 2 )
      return 3221225485LL;
    v15 = (char *)(a3 + 5);
  }
  else
  {
    v11 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !a4 )
      goto LABEL_26;
    v41 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v11 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_35;
    v15 = (char *)Src + 20;
    DeviceFromEfiPath = 0;
  }
  Src = v15;
  if ( a4 )
  {
    v12 = a4;
    goto LABEL_12;
  }
  v11 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v41 = v11;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v11 + 3, &Size[1], &v40, v7);
  v12 = *(_WORD **)&Size[1];
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v38 = 1;
    DeviceFromEfiPath = 0;
LABEL_12:
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)Src + v17) );
    v18 = 2 * v17 + 2;
    v19 = -1LL;
    Size[0] = v18;
    do
      ++v19;
    while ( v12[v19] );
    v20 = 2 * v19 + 2;
    v21 = v18 + v20;
    Size[1] = v20;
    if ( v18 + v20 < v18 )
    {
      v21 = -1;
      DeviceFromEfiPath = -1073741675;
    }
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_35;
    v22 = v21 + 12;
    v23 = -1;
    if ( v21 + 12 >= v21 )
      v23 = v21 + 12;
    DeviceFromEfiPath = v22 < v21 ? 0xC0000095 : 0;
    if ( v22 < v21 )
      goto LABEL_35;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v23, 0x4B444342u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_23:
      DeviceFromEfiPath = -1073741670;
      goto LABEL_35;
    }
    v25 = Src;
    PoolWithTag->Version = 1;
    PoolWithTag->Length = v23;
    PoolWithTag->Type = 3;
    memmove(PoolWithTag->FilePath, v25, Size[0]);
    memmove(&v13->FilePath[Size[0]], v12, Size[1]);
    v26 = BiTranslateFilePath(v13, 4u);
    v11 = v41;
    DeviceFromEfiPath = v26;
    if ( v26 < 0 )
      goto LABEL_35;
    v7 = v43;
    v9 = -1LL;
    v8 = -1;
    v44 = 1;
LABEL_26:
    if ( !v7 )
    {
      v7 = (char *)a1 + (unsigned int)a1[4];
      v43 = v7;
    }
    do
      ++v9;
    while ( *(_WORD *)&v7[2 * v9] );
    v27 = a1[6];
    v28 = 2 * v9 + 2;
    LODWORD(v40) = v28;
    v29 = v27 + v28;
    if ( v27 + v28 >= v27 )
      v8 = v27 + v28;
    DeviceFromEfiPath = v29 < v27 ? 0xC0000095 : 0;
    if ( v29 < v27 )
      goto LABEL_35;
    v30 = v11[1];
    v31 = v30 + v8 + 36;
    DeviceFromEfiPath = v31 < v8 ? 0xC0000095 : 0;
    if ( v31 < v8 )
      goto LABEL_35;
    Size[1] = (v27 + 31) & 0xFFFFFFFC;
    Size[0] = (v28 + Size[1] + 3) & 0xFFFFFFFC;
    v32 = v30 + Size[0];
    v33 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v30 + Size[0]), 0x4B444342u);
    v34 = v33;
    if ( v33 )
    {
      memset(v33, 0, v32);
      v35 = Size[1];
      v36 = (unsigned int)v40;
      v34[1] = v32;
      *v34 = 1;
      v34[2] = a1[2];
      v37 = a1[3];
      v34[4] = v35;
      v34[3] = v37;
      v34[5] = Size[0];
      v34[6] = a1[6];
      memmove((char *)v34 + v35, v43, v36);
      memmove((char *)v34 + Size[0], v11, (unsigned int)v11[1]);
      memmove(v34 + 7, a1 + 7, (unsigned int)a1[6]);
      DeviceFromEfiPath = 0;
      *a5 = v34;
      goto LABEL_35;
    }
    goto LABEL_23;
  }
LABEL_35:
  if ( v44 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  if ( v38 )
    ExFreePoolWithTag(v12, 0x4B444342u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
