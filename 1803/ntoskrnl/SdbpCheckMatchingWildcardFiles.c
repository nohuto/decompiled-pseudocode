/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x1407D60E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     SdbpInitializeSearchDBContext @ 0x14061F27C (SdbpInitializeSearchDBContext.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathWildcardFindClose @ 0x1407DA2BC (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407DA8D8 (AslPathWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  int *v7; // r15
  unsigned int v8; // r12d
  PVOID v9; // rdi
  PVOID *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  _WORD *v13; // r8
  __int64 v14; // r13
  int *v15; // rdx
  int v16; // r15d
  int i; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  PVOID *v22; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  _WORD *v26; // [rsp+58h] [rbp-A8h]
  int *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  int *v29; // [rsp+70h] [rbp-90h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v25 = a2;
  v28 = a3;
  v7 = a1;
  v27 = a1;
  v8 = 0;
  v9 = 0LL;
  v21 = 0;
  v10 = 0LL;
  P = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v21 = 1;
LABEL_30:
    v8 = 1;
    goto LABEL_31;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_31;
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  v26 = (_WORD *)StringTagPtr;
  v13 = (_WORD *)StringTagPtr;
  if ( StringTagPtr )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(StringTagPtr + 2 * v14) );
    if ( (*(_DWORD *)a6 & 1) == 0 )
    {
      if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          2538,
          (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
        goto LABEL_31;
      }
      v13 = v26;
    }
    v15 = *(int **)(a6 + 72);
    v16 = 0;
    v29 = v15;
    if ( *v15 <= 0 )
    {
LABEL_29:
      v7 = v27;
      *(_DWORD *)(a6 + 80) = 1;
      goto LABEL_30;
    }
    while ( (unsigned int)SdbpResolveMatchingFile(v25, a6, v13, v14, (__int64)&v15[12 * v16 + 2], (wchar_t **)&P) )
    {
      AslPathWildcardFindClose(&v24);
      memset(pszDest, 0, 0x208uLL);
      v9 = P;
      for ( i = AslPathWildcardFindFirst(pszDest); i >= 0; i = AslPathWildcardFindNext(pszDest, v18, v24) )
      {
        if ( v10 )
        {
          AslFileMappingDelete(v10);
          v22 = 0LL;
        }
        i = AslFileMappingCreate(&v22, pszDest, 0LL, 0LL, 0LL);
        v10 = v22;
        if ( i < 0 )
          break;
        if ( (int)SdbpCheckAllAttributes((unsigned int)&v21, v25, v28, a5, (__int64)v22) >= 0 )
          goto LABEL_29;
      }
      if ( i != -2147483642 )
      {
        LODWORD(v20) = i;
        AslLogCallPrintf(
          3,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          2616,
          (unsigned int)"AslPathWildcardFindFirst/Next failed to find a file [%x]",
          v20);
      }
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x74705041u);
        v9 = 0LL;
        P = 0LL;
      }
      v15 = v29;
      if ( ++v16 >= *v29 )
        goto LABEL_29;
      v13 = v26;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingWildcardFiles",
      2562,
      (unsigned int)"Failed to resolve matching file");
    v9 = P;
    v7 = v27;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingWildcardFiles",
      2524,
      (unsigned int)"Failed to get the string from the database");
  }
LABEL_31:
  AslPathWildcardFindClose(&v24);
  AslFileMappingDelete(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x74705041u);
  result = v8;
  *v7 = v21;
  return result;
}
