/*
 * XREFs of ?LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z @ 0x1C01877F0
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall LoadAndExtractBitmapFile(
        struct _UNICODE_STRING *a1,
        void **a2,
        struct tagSIZE *a3,
        unsigned int *a4)
{
  void **v4; // r13
  _WORD *PoolWithTag; // rsi
  _DWORD *v6; // rdi
  char *v7; // r15
  struct tagSIZE *v8; // r12
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  NTSTATUS v14; // eax
  ULONG Length; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  NTSTATUS v20; // eax
  int v21; // eax
  __int64 v22; // r8
  int v23; // r9d
  SIZE_T v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // r11d
  char *v30; // r14
  int v31; // r10d
  int v32; // edx
  int v33; // ebx
  char *v34; // r8
  char *v35; // r9
  char v36; // al
  char *v37; // r9
  char v38; // cl
  char v39; // dl
  _BYTE *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int *v43; // rcx
  void *FileHandle; // [rsp+50h] [rbp-69h] BYREF
  struct tagSIZE *v46; // [rsp+58h] [rbp-61h]
  void **v47; // [rsp+60h] [rbp-59h]
  unsigned int *v48; // [rsp+68h] [rbp-51h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  __int64 FileInformation; // [rsp+B0h] [rbp-9h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B8h] [rbp-1h]
  __int64 v53; // [rsp+C0h] [rbp+7h]

  v47 = a2;
  v4 = a2;
  v48 = a4;
  v46 = a3;
  FileHandle = 0LL;
  PoolWithTag = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v6 = 0LL;
  ObjectAttributes.ObjectName = a1;
  v7 = 0LL;
  v8 = a3;
  FileInformation = 0LL;
  NumberOfBytes = 0LL;
  v53 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x10u);
  v13 = v9;
  if ( v9 < 0 )
    goto LABEL_31;
  v14 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  Length = NumberOfBytes;
  v13 = v14;
  if ( v14 < 0 || !(_DWORD)NumberOfBytes )
    goto LABEL_31;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B677844u);
  if ( !PoolWithTag )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = Length;
    WdLogEvent5_WdWarning(v19);
    LODWORD(v13) = -1073741801;
    goto LABEL_35;
  }
  v20 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, 0LL, 0LL);
  v11 = 0LL;
  v13 = v20;
  if ( v20 < 0 )
  {
LABEL_31:
    v42 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v42 + 24) = v13;
    WdLogEvent5_WdWarning(v42);
    if ( (int)v13 < 0 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v6 = PoolWithTag + 7;
  if ( *PoolWithTag != 19778
    || !*(_DWORD *)(PoolWithTag + 1)
    || PoolWithTag[3]
    || PoolWithTag[4]
    || (v21 = *(_DWORD *)(PoolWithTag + 5)) == 0
    || *v6 != 40
    || PoolWithTag[13] != 1
    || (v10 = 24LL, PoolWithTag[14] != 24)
    || *(_DWORD *)(PoolWithTag + 15)
    || *(_DWORD *)(PoolWithTag + 23)
    || *(_DWORD *)(PoolWithTag + 25) )
  {
    v41 = WdLogNewEntry5_WdWarning(0LL, v10, v12);
    *(_QWORD *)(v41 + 24) = 4423LL;
    goto LABEL_29;
  }
  v22 = *(unsigned int *)(PoolWithTag + 17);
  if ( (int)v22 + v21 > Length
    || (v23 = *(_DWORD *)(PoolWithTag + 9),
        v10 = *(unsigned int *)(PoolWithTag + 11),
        v11 = (unsigned int)v10 * ((3 * (v23 + 1)) & 0xFFFFFFFC),
        (unsigned int)v11 > (unsigned int)v22) )
  {
    v41 = WdLogNewEntry5_WdWarning(v11, v10, v22);
    *(_QWORD *)(v41 + 24) = 4434LL;
LABEL_29:
    WdLogEvent5_WdWarning(v41);
    LODWORD(v13) = -1073741823;
    goto LABEL_33;
  }
  v24 = (unsigned int)(4 * v23 * v10);
  v13 = (unsigned int)v24;
  v7 = (char *)ExAllocatePoolWithTag(PagedPool, v24, 0x4B677844u);
  if ( !v7 )
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = v13;
    WdLogEvent5_WdWarning(v28);
    LODWORD(v13) = -1073741801;
    goto LABEL_33;
  }
  v29 = 0;
  v30 = (char *)PoolWithTag + *(unsigned int *)(PoolWithTag + 5);
  v31 = *(_DWORD *)(PoolWithTag + 11) - 1;
  if ( v31 >= 0 )
  {
    do
    {
      v32 = *(_DWORD *)(PoolWithTag + 9);
      v33 = 0;
      v34 = &v7[4 * v31 * v32];
      v35 = &v30[v29 * ((3 * (v32 + 1)) & 0xFFFFFFFC)];
      if ( v32 > 0 )
      {
        do
        {
          v36 = *v35;
          ++v33;
          v37 = v35 + 1;
          v38 = *v37++;
          v39 = *v37;
          v35 = v37 + 1;
          *v34 = v36;
          v40 = v34 + 1;
          *v40++ = v38;
          *v40++ = v39;
          *v40 = 0;
          v34 = v40 + 1;
        }
        while ( v33 < *(_DWORD *)(PoolWithTag + 9) );
      }
      ++v29;
      --v31;
    }
    while ( v31 >= 0 );
    v8 = v46;
    v4 = v47;
  }
  LODWORD(v13) = 0;
LABEL_32:
  v43 = v48;
  *v4 = v7;
  v8->cx = v6[1];
  v8->cy = v6[2];
  *v43 = 4 * v6[1];
LABEL_33:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B677844u);
LABEL_35:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v13;
}
