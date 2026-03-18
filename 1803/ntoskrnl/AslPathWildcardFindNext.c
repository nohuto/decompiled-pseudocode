/*
 * XREFs of AslPathWildcardFindNext @ 0x1407DA8D8
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x140153AA0 (RtlStringCbCopyNW.c)
 *     ZwQueryDirectoryFile @ 0x1401A7B60 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ULongLongMult @ 0x140223478 (ULongLongMult.c)
 *     RtlStringCbCatNW @ 0x1402C2A90 (RtlStringCbCatNW.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407DB5F8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1407DB8EC (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, ULONGLONG a2, ULONGLONG *a3)
{
  __int64 v5; // rcx
  wchar_t *FileInformation; // r12
  int v7; // ebx
  ULONGLONG v8; // rax
  unsigned __int16 *v9; // rsi
  ULONGLONG v10; // rdx
  ULONGLONG v11; // rax
  int v12; // ebx
  ULONGLONG v13; // rdx
  ULONGLONG v14; // rax
  ULONGLONG v15; // rdx
  ULONGLONG v16; // rax
  __int64 v17; // r9
  ULONGLONG v18; // rdx
  char *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r9
  ULONGLONG v22; // rdx
  unsigned __int64 v23; // r8
  ULONGLONG v24; // rcx
  ULONGLONG v25; // rdx
  ULONGLONG v26; // r15
  size_t v27; // rsi
  void *v28; // r14
  PVOID PoolWithTag; // rax
  void *v30; // rbx
  size_t v31; // r8
  NTSTATUS v32; // eax
  ULONGLONG v33; // rax
  ULONGLONG v34; // rdx
  ULONGLONG v35; // rax
  ULONGLONG v36; // rdx
  ULONGLONG v37; // rax
  __int64 v38; // r9
  ULONGLONG v39; // rdx
  char *v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r9
  ULONGLONG v43; // rdx
  unsigned __int64 v44; // r8
  ULONGLONG v45; // rcx
  ULONGLONG v46; // rdx
  PVOID v47; // rax
  int v48; // eax
  int matched; // eax
  ULONGLONG v50; // r13
  unsigned __int64 v51; // r9
  ULONGLONG v52; // rcx
  __int64 v53; // r14
  ULONGLONG v54; // r14
  size_t v55; // rsi
  void *v56; // r15
  PVOID v57; // rax
  void *v58; // rbx
  size_t v59; // r8
  ULONGLONG v60; // rdx
  UNICODE_STRING *v61; // rcx
  const char *v62; // r9
  int v63; // r8d
  NTSTATUS v64; // eax
  wchar_t *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rax
  char *v70; // r8
  wchar_t v71; // r9
  wchar_t *v72; // rax
  NTSTATUS v73; // eax
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONGLONG v76; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG v77; // [rsp+78h] [rbp-88h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+80h] [rbp-80h] BYREF
  ULONGLONG v79; // [rsp+88h] [rbp-78h] BYREF
  ULONGLONG v80; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v81; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG v82; // [rsp+A0h] [rbp-60h] BYREF
  ULONGLONG v83; // [rsp+A8h] [rbp-58h] BYREF
  ULONGLONG v84; // [rsp+B0h] [rbp-50h] BYREF
  ULONGLONG v85; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v86; // [rsp+C0h] [rbp-40h] BYREF
  ULONGLONG v87; // [rsp+C8h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK v88; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v89[2]; // [rsp+E0h] [rbp-20h] BYREF
  ULONGLONG Size; // [rsp+158h] [rbp+58h] BYREF
  ULONGLONG pullResult; // [rsp+160h] [rbp+60h] BYREF
  ULONGLONG v93; // [rsp+168h] [rbp+68h] BYREF

  Size = a2;
  if ( a3 == (ULONGLONG *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  v88.Pointer = 0LL;
  v88.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v89, 0, sizeof(v89));
  FileInformation = (wchar_t *)AslAlloc(v5, 0x268uLL);
  if ( !FileInformation )
    return (unsigned int)-1073741801;
  v8 = a3[4];
  if ( !v8 )
  {
LABEL_28:
    v7 = -2147483642;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v9 = 0LL;
    if ( v8 - 1 < a3[4] )
    {
      if ( ULongLongMult(a3[3], v8 - 1, &pullResult) < 0 || (v10 = a3[7], v10 + pullResult < v10) )
        v9 = 0LL;
      else
        v9 = (unsigned __int16 *)(v10 + pullResult);
    }
    if ( !v9 )
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpPathWildcardPeekNode",
        2047,
        (unsigned int)"RtlArrayGet failed to get the next node");
      v7 = -1073741595;
      v62 = "AslpPathWildcardPeekNode failed [%x]";
      v63 = 2466;
      goto LABEL_141;
    }
    if ( !*((_QWORD *)v9 + 3) )
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2471,
        (unsigned int)"Node on the stack with invalid handle.");
      v11 = a3[4];
      if ( !v11 )
      {
        v12 = -2147483622;
LABEL_26:
        LODWORD(IoStatusBlock) = v12;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpPathWildcardPopNode",
          2074,
          (unsigned int)"AslpPathWildcardPeekNode failed [%x]",
          IoStatusBlock);
        goto LABEL_27;
      }
      v13 = v11 - 1;
      v14 = 0LL;
      if ( v13 < a3[4] )
      {
        if ( ULongLongMult(a3[3], v13, &v93) < 0 || (v15 = a3[7], v15 + v93 < v15) )
          v14 = 0LL;
        else
          v14 = v15 + v93;
      }
      if ( !v14 )
        goto LABEL_25;
      AslpPathWildcardFreeMatchNode(v14);
      v16 = a3[4];
      if ( !v16 )
        goto LABEL_27;
      if ( ULongLongMult(a3[3], v16 - 1, &v76) < 0 )
        goto LABEL_27;
      v18 = a3[7];
      if ( v18 + v76 < v18 )
        goto LABEL_27;
      v19 = (char *)(v18 + v76);
      v20 = a3[4] - v17 - 1;
      Size = v20;
      if ( v20 )
      {
        if ( ULongLongMult(v20, a3[3], &Size) < 0 )
          goto LABEL_27;
        if ( ULongLongMult(a3[3], v21 + 1, &v77) < 0 )
          goto LABEL_27;
        v22 = a3[7];
        if ( v22 + v77 < v22 )
          goto LABEL_27;
        v20 = Size;
        memmove(v19, (const void *)(v22 + v77), Size);
      }
      memset(&v19[v20], 0, a3[3]);
      v23 = --a3[4];
      if ( v23 > 0x10 )
      {
        v24 = a3[5];
        v25 = a3[3];
        if ( v25 * v24 >= 0x400 && v23 < v24 >> 2 )
        {
          v26 = v24 >> 1;
          if ( ULongLongMult(v24, v25, &v79) >= 0 && ULongLongMult(v26, a3[3], &NumberOfBytes) >= 0 )
          {
            v27 = NumberOfBytes;
            v28 = (void *)a3[7];
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
            v30 = PoolWithTag;
            if ( !v28 )
              goto LABEL_45;
            if ( !PoolWithTag )
              goto LABEL_27;
            memset(PoolWithTag, 0, v27);
            v31 = v79;
LABEL_49:
            if ( v31 >= v27 )
              v31 = v27;
            memmove(v30, v28, v31);
            ExFreePoolWithTag(v28, 0x72615452u);
            goto LABEL_52;
          }
        }
      }
      goto LABEL_27;
    }
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v9 + 2));
    v32 = ZwQueryDirectoryFile(
            *((HANDLE *)v9 + 3),
            0LL,
            0LL,
            0LL,
            &v88,
            FileInformation,
            0x268u,
            FileBothDirectoryInformation,
            1u,
            &DestinationString,
            0);
    if ( v32 >= 0 )
      break;
    if ( v32 != -2147483642 && v32 != -1073741809 )
    {
      LODWORD(IoStatusBlock) = v32;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2495,
        (unsigned int)"NtQueryDirectoryFile failed to query next file [%x]",
        IoStatusBlock);
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslPathWildcardFindNext",
        2496,
        (unsigned int)"FilePath: '%ws'  Pattern: '%ws'",
        *((_QWORD *)v9 + 1),
        DestinationString.Buffer);
    }
    v33 = a3[4];
    if ( !v33 )
    {
      v12 = -2147483622;
      goto LABEL_26;
    }
    v34 = v33 - 1;
    v35 = 0LL;
    if ( v34 < a3[4] )
    {
      if ( ULongLongMult(a3[3], v34, &v80) < 0 || (v36 = a3[7], v36 + v80 < v36) )
        v35 = 0LL;
      else
        v35 = v36 + v80;
    }
    if ( !v35 )
    {
LABEL_25:
      v12 = -1073741595;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpPathWildcardPeekNode",
        2047,
        (unsigned int)"RtlArrayGet failed to get the next node");
      goto LABEL_26;
    }
    AslpPathWildcardFreeMatchNode(v35);
    v37 = a3[4];
    if ( !v37 )
      goto LABEL_27;
    if ( ULongLongMult(a3[3], v37 - 1, &v81) < 0 )
      goto LABEL_27;
    v39 = a3[7];
    if ( v39 + v81 < v39 )
      goto LABEL_27;
    v40 = (char *)(v39 + v81);
    v41 = a3[4] - v38 - 1;
    Size = v41;
    if ( v41 )
    {
      if ( ULongLongMult(v41, a3[3], &Size) < 0 )
        goto LABEL_27;
      if ( ULongLongMult(a3[3], v42 + 1, &v82) < 0 )
        goto LABEL_27;
      v43 = a3[7];
      if ( v43 + v82 < v43 )
        goto LABEL_27;
      v41 = Size;
      memmove(v40, (const void *)(v43 + v82), Size);
    }
    memset(&v40[v41], 0, a3[3]);
    v44 = --a3[4];
    if ( v44 > 0x10 )
    {
      v45 = a3[5];
      v46 = a3[3];
      if ( v46 * v45 >= 0x400 && v44 < v45 >> 2 )
      {
        v26 = v45 >> 1;
        if ( ULongLongMult(v45, v46, &v84) >= 0 && ULongLongMult(v26, a3[3], &v83) >= 0 )
        {
          v27 = v83;
          v28 = (void *)a3[7];
          v47 = ExAllocatePoolWithTag(PagedPool, v83, 0x72615452u);
          v30 = v47;
          if ( v28 )
          {
            if ( !v47 )
              goto LABEL_27;
            memset(v47, 0, v27);
            v31 = v84;
            goto LABEL_49;
          }
LABEL_45:
          if ( !v30 )
            goto LABEL_27;
          memset(v30, 0, v27);
LABEL_52:
          if ( v30 )
          {
            a3[7] = (ULONGLONG)v30;
            a3[5] = v26;
          }
        }
      }
    }
LABEL_27:
    v8 = a3[4];
    if ( !v8 )
      goto LABEL_28;
  }
  v48 = *((_DWORD *)FileInformation + 15);
  if ( v48 == 4 && FileInformation[47] == 46 && FileInformation[48] == 46 )
    goto LABEL_27;
  if ( v48 == 2 )
  {
    LOWORD(v48) = 2;
    if ( FileInformation[47] == 46 )
      goto LABEL_27;
  }
  matched = AslpPathWildcardAllocMatchNode(v89, (PCUNICODE_STRING)v9, FileInformation + 47, v48);
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_27;
    if ( matched < 0 )
    {
      LODWORD(IoStatusBlock) = matched;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2553,
        (unsigned int)"AslpPathWildcardAllocMatchNode failed [%x]",
        IoStatusBlock);
      goto LABEL_27;
    }
    v50 = a3[4];
    v51 = a3[5];
    if ( v50 < v51 )
      goto LABEL_110;
    v52 = v50 + 1;
    if ( v50 + 1 <= v51 )
    {
      v7 = -2147024809;
      goto LABEL_114;
    }
    v53 = a3[6] - 1;
    if ( v53 + v52 < v52 )
      goto LABEL_113;
    v54 = (v53 + v52) & ~v53;
    if ( ULongLongMult(a3[5], a3[3], &v86) < 0 )
    {
      v7 = -2147483637;
      goto LABEL_109;
    }
    if ( ULongLongMult(v54, a3[3], &v85) < 0 )
    {
      v7 = -2147483637;
      goto LABEL_109;
    }
    v55 = v85;
    v56 = (void *)a3[7];
    v57 = ExAllocatePoolWithTag(PagedPool, v85, 0x72615452u);
    v58 = v57;
    if ( !v56 )
    {
      if ( v57 )
      {
        memset(v57, 0, v55);
        goto LABEL_106;
      }
      goto LABEL_108;
    }
    if ( !v57 )
      goto LABEL_108;
    memset(v57, 0, v55);
    v59 = v86;
    if ( v86 >= v55 )
      v59 = v55;
    memmove(v58, v56, v59);
    ExFreePoolWithTag(v56, 0x72615452u);
LABEL_106:
    if ( v58 )
    {
      a3[7] = (ULONGLONG)v58;
      v7 = 0;
      a3[5] = v54;
    }
    else
    {
LABEL_108:
      v7 = -2147024882;
    }
LABEL_109:
    if ( !v7 )
    {
LABEL_110:
      if ( ULongLongMult(a3[3], v50, &v87) >= 0 )
      {
        v60 = a3[7];
        if ( v60 + v87 >= v60 )
        {
          v61 = (UNICODE_STRING *)(v60 + v87);
          *v61 = v89[0];
          v61[1] = v89[1];
          ++a3[4];
          v7 = 0;
          goto LABEL_114;
        }
      }
LABEL_113:
      v7 = -2147483637;
    }
LABEL_114:
    if ( v7 < 0 )
    {
      v62 = "AslpPathWildcardPushNode failed [%x]";
      v63 = 2545;
LABEL_141:
      LODWORD(IoStatusBlock) = v7;
      AslLogCallPrintf(1LL, (unsigned int)"AslPathWildcardFindNext", v63, (_DWORD)v62, IoStatusBlock);
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  v64 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v9 + 1), *v9);
  v7 = v64;
  if ( v64 < 0 )
  {
    LODWORD(IoStatusBlock) = v64;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindNext",
      2569,
      (unsigned int)"RtlStringCbCopyNW failed [%x]",
      IoStatusBlock);
    goto LABEL_29;
  }
  if ( *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1) - 2) != 92 )
  {
    v65 = a1;
    v66 = 260LL;
    do
    {
      if ( !*v65 )
        break;
      ++v65;
      --v66;
    }
    while ( v66 );
    v7 = -1073741811;
    if ( v66 )
    {
      v7 = 0;
      v67 = 260 - v66;
    }
    else
    {
      v67 = 0LL;
    }
    if ( v66 )
    {
      v65 = &a1[v67];
      v68 = 260 - v67;
      if ( 260 != v67 )
      {
        v69 = 1LL;
        v70 = (char *)((char *)L"\\" - (char *)v65);
        do
        {
          if ( !v69 )
            break;
          v71 = *(_WORD *)&v70[(_QWORD)v65];
          if ( !v71 )
            break;
          *v65 = v71;
          --v69;
          ++v65;
          --v68;
        }
        while ( v68 );
      }
      v72 = v65 - 1;
      v7 = -2147483643;
      if ( v68 )
      {
        v72 = v65;
        v7 = 0;
      }
      *v72 = 0;
    }
    if ( v7 < 0 )
    {
      v62 = "RtlStringCbCatNW failed [%x]";
      v63 = 2576;
      goto LABEL_141;
    }
  }
  v73 = RtlStringCbCatNW(a1, (size_t)v65, FileInformation + 47, *((unsigned int *)FileInformation + 15));
  v7 = v73;
  if ( v73 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    LODWORD(IoStatusBlock) = v73;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindNext",
      2583,
      (unsigned int)"RtlStringCbCatNW failed [%x]",
      IoStatusBlock);
  }
LABEL_29:
  ExFreePoolWithTag(FileInformation, 0x74705041u);
  return (unsigned int)v7;
}
