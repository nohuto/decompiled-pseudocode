/*
 * XREFs of AslPathWildcardFindFirst @ 0x1407DA2FC
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlUShortAdd @ 0x1400B8CC0 (RtlUShortAdd.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     RtlStringCbCopyNW @ 0x140153AA0 (RtlStringCbCopyNW.c)
 *     wcsncmp @ 0x14018A6F0 (wcsncmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ULongLongMult @ 0x140223478 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslDoesFileExistNtPath @ 0x1407D933C (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x1407D9D08 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x1407DA8D8 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407DB5F8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1407DB814 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1407DB8EC (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x1407DB938 (AslpPathWildcardMakeLeaves.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(NTSTRSAFE_PWSTR pszDest, char *a2, const wchar_t *a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  WCHAR *v8; // r13
  int Next; // ebx
  int matched; // eax
  const char *v11; // r9
  int v12; // r8d
  __int64 v13; // rcx
  size_t v14; // rbx
  wchar_t *v15; // rax
  int Leaves; // eax
  __int64 v17; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v19; // r15
  HRESULT v20; // eax
  ULONGLONG v21; // r10
  int v22; // r9d
  size_t v23; // rsi
  void *v24; // r14
  PVOID v25; // rax
  void *v26; // rbx
  size_t v27; // r8
  void *v28; // rcx
  ULONGLONG v29; // r10
  ULONGLONG v30; // r9
  ULONGLONG v31; // rcx
  __int64 v32; // r14
  ULONGLONG v33; // r14
  HRESULT v34; // eax
  size_t v35; // r12
  PVOID PoolWithTag; // rbx
  size_t v37; // r8
  unsigned __int64 v38; // rdx
  UNICODE_STRING *v39; // rcx
  __int64 v40; // rdx
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+28h] [rbp-49h]
  ULONGLONG pullResult; // [rsp+38h] [rbp-39h] BYREF
  _DWORD *v43; // [rsp+40h] [rbp-31h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v47[5]; // [rsp+70h] [rbp-1h] BYREF
  char *pusResult; // [rsp+E0h] [rbp+6Fh] BYREF
  _QWORD *v50; // [rsp+F0h] [rbp+7Fh]

  v50 = a4;
  pusResult = a2;
  v4 = a4;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v43 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 0LL;
  LOWORD(pusResult) = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  memset(v47, 0, 0x20uLL);
  *v4 = 0LL;
  *pszDest = 0;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = AslPathCleanUstr(&DestinationString.Length);
    Next = matched;
    if ( matched < 0 )
    {
      v11 = "AslPathCleanUstr failed [%x]";
      v12 = 2225;
LABEL_11:
      LODWORD(pszSrc) = matched;
      AslLogCallPrintf(1LL, (unsigned int)"AslPathWildcardFindFirst", v12, (_DWORD)v11, pszSrc);
      goto LABEL_73;
    }
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    Next = matched;
    if ( matched < 0 )
    {
      v11 = "RtlUShortAdd failed [%x]";
      v12 = 2231;
      goto LABEL_11;
    }
    v14 = (unsigned __int16)pusResult;
    v15 = (wchar_t *)AslAlloc(v13, (unsigned __int16)pusResult);
    v8 = v15;
    if ( !v15 )
      goto LABEL_15;
    matched = RtlStringCbCopyNW(v15, v14, DestinationString.Buffer, DestinationString.Length);
    Next = matched;
    if ( matched < 0 )
    {
      v11 = "RtlStringCbCopyNW failed [%x]";
      v12 = 2243;
      goto LABEL_11;
    }
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      Next = -1073741767;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindFirst",
        2261,
        (unsigned int)"Failed to split the wildcard path");
      goto LABEL_73;
    }
    if ( Leaves == 1 )
    {
      Buffer = DestinationString.Buffer;
      *v4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        Next = -2147483642;
        goto LABEL_73;
      }
      matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      Next = matched;
      if ( matched >= 0 )
      {
        Next = 0;
        goto LABEL_73;
      }
      v11 = "RtlStringCbCopyNW failed [%x]";
      v12 = 2279;
      goto LABEL_11;
    }
    v43 = AslAlloc(v17, 0x40uLL);
    v19 = v43;
    if ( !v43 )
    {
LABEL_15:
      Next = -1073741801;
      goto LABEL_73;
    }
    *v43 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v19 + 1) = v8;
    v8 = 0LL;
    memset(v19 + 4, 0, 0x30uLL);
    *((_QWORD *)v19 + 2) = 0LL;
    *((_QWORD *)v19 + 6) = 16LL;
    *((_QWORD *)v19 + 4) = 0LL;
    *((_QWORD *)v19 + 5) = 0LL;
    *((_QWORD *)v19 + 7) = 0LL;
    *((_QWORD *)v19 + 3) = 32LL;
    v20 = ULongLongMult(0LL, 0x20uLL, &pullResult);
    v22 = -2147483637;
    if ( v20 < 0 || ULongLongMult(v21, *((_QWORD *)v19 + 3), (ULONGLONG *)&pusResult) < 0 )
    {
      Next = v22;
LABEL_40:
      v28 = (void *)*((_QWORD *)v19 + 7);
      if ( v28 )
        ExFreePoolWithTag(v28, 0x72615452u);
      memset(v19 + 4, 0, 0x30uLL);
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpPathWildcardInitStack",
        2116,
        (unsigned int)"RtlArrayInitialize failed [%x]",
        Next);
LABEL_43:
      if ( Next < 0 )
      {
        LODWORD(pszSrc) = Next;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslPathWildcardFindFirst",
          2317,
          (unsigned int)"AslpPathWildcardInitStack failed [%x]",
          pszSrc);
        goto LABEL_73;
      }
      RtlInitUnicodeString(&SourceString, *((PCWSTR *)v19 + 1));
      matched = AslpPathWildcardAllocMatchNode(v47, &SourceString, 0LL, 0);
      Next = matched;
      if ( matched < 0 )
      {
        v11 = "AslpPathWildcardAllocMatchNode failed to create root of path [%x]";
        v12 = 2330;
        goto LABEL_11;
      }
      v29 = *((_QWORD *)v19 + 4);
      v30 = *((_QWORD *)v19 + 5);
      pullResult = v29;
      if ( v29 < v30 )
        goto LABEL_69;
      v31 = v29 + 1;
      if ( v29 + 1 <= v30 )
      {
        Next = -2147024809;
        goto LABEL_50;
      }
      v32 = *((_QWORD *)v19 + 6) - 1LL;
      if ( v32 + v31 < v31 )
        goto LABEL_54;
      v33 = (v32 + v31) & ~v32;
      v34 = ULongLongMult(v30, *((_QWORD *)v19 + 3), (ULONGLONG *)&SourceString.Length);
      if ( v34 < 0 || ULongLongMult(v33, *((_QWORD *)v19 + 3), &NumberOfBytes) < 0 )
      {
        Next = -2147483637;
        goto LABEL_68;
      }
      v35 = NumberOfBytes;
      pusResult = (char *)*((_QWORD *)v19 + 7);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      if ( pusResult )
      {
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v35);
          v37 = *(_QWORD *)&SourceString.Length;
          if ( *(_QWORD *)&SourceString.Length >= v35 )
            v37 = v35;
          memmove(PoolWithTag, pusResult, v37);
          ExFreePoolWithTag(pusResult, 0x72615452u);
          goto LABEL_65;
        }
      }
      else if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v35);
LABEL_65:
        *((_QWORD *)v19 + 7) = PoolWithTag;
        Next = 0;
        *((_QWORD *)v19 + 5) = v33;
LABEL_67:
        v4 = v50;
        v29 = pullResult;
LABEL_68:
        if ( Next )
          goto LABEL_50;
LABEL_69:
        if ( ULongLongMult(*((_QWORD *)v19 + 3), v29, (ULONGLONG *)&pusResult) >= 0 )
        {
          v38 = *((_QWORD *)v19 + 7);
          if ( (unsigned __int64)&pusResult[v38] >= v38 )
          {
            v39 = (UNICODE_STRING *)&pusResult[v38];
            *v39 = v47[0];
            v39[1] = v47[1];
            ++*((_QWORD *)v19 + 4);
            Next = 0;
LABEL_50:
            if ( Next >= 0 )
            {
              memset(v47, 0, 0x20uLL);
              *v4 = v19;
              Next = AslPathWildcardFindNext(pszDest, v40, v19);
            }
            else
            {
              LODWORD(pszSrc) = Next;
              AslLogCallPrintf(
                1LL,
                (unsigned int)"AslPathWildcardFindFirst",
                2336,
                (unsigned int)"AslpPathWildcardPushNode failed [%x]",
                pszSrc);
            }
            goto LABEL_73;
          }
        }
LABEL_54:
        Next = -2147483637;
        goto LABEL_50;
      }
      Next = -2147024882;
      goto LABEL_67;
    }
    v23 = (size_t)pusResult;
    v24 = (void *)*((_QWORD *)v19 + 7);
    v25 = ExAllocatePoolWithTag(PagedPool, (SIZE_T)pusResult, 0x72615452u);
    v26 = v25;
    if ( v24 )
    {
      if ( !v25 )
      {
LABEL_39:
        Next = -2147024882;
        goto LABEL_40;
      }
      memset(v25, 0, v23);
      v27 = pullResult;
      if ( pullResult >= v23 )
        v27 = v23;
      memmove(v26, v24, v27);
      ExFreePoolWithTag(v24, 0x72615452u);
    }
    else if ( v25 )
    {
      memset(v25, 0, v23);
    }
    if ( v26 )
    {
      *((_QWORD *)v19 + 7) = v26;
      *((_QWORD *)v19 + 5) = 16LL;
      Next = 0;
      goto LABEL_43;
    }
    goto LABEL_39;
  }
  Next = -1073741801;
  AslLogCallPrintf(1LL, (unsigned int)"AslPathWildcardFindFirst", 2204, (unsigned int)"RtlCreateUnicodeString failed");
LABEL_73:
  RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( Next < 0 )
  {
    AslpPathWildcardFreeFindContext(&v43);
    AslpPathWildcardFreeMatchNode(v47);
    *v4 = 0LL;
  }
  return (unsigned int)Next;
}
