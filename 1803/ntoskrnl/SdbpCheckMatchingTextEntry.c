/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x1407D5CE4
 * Callers:
 *     SdbpCheckMatchingText @ 0x1407D5BC0 (SdbpCheckMatchingText.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     SdbpInitializeSearchDBContext @ 0x14061F27C (SdbpInitializeSearchDBContext.c)
 *     AslFileNotFound @ 0x14064DF4C (AslFileNotFound.c)
 *     AslStringSearchA @ 0x1407D90B8 (AslStringSearchA.c)
 *     AslStringSearchW @ 0x1407D915C (AslStringSearchW.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1407D9770 (AslFileMappingEnsureMappedAs.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r13
  int v11; // edx
  unsigned int v13; // esi
  int v14; // eax
  PVOID v15; // rbx
  PVOID *v16; // rdi
  int v17; // eax
  int *v18; // rbp
  int v19; // esi
  __int64 v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v27; // esi
  unsigned int v28; // ebp
  int v29; // r15d
  int v30; // r15d
  unsigned int v31; // r14d
  PVOID v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  const char *v35; // r9
  int v36; // r8d
  __int64 v37; // [rsp+20h] [rbp-68h]
  int v38; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  PVOID v40; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int16 *v41; // [rsp+A0h] [rbp+18h]

  v41 = a3;
  v10 = a9;
  v11 = 0;
  P = 0LL;
  v40 = 0LL;
  v13 = 0;
  v14 = *(_DWORD *)a2;
  v15 = 0LL;
  v38 = 0;
  v16 = 0LL;
  *a8 = 0;
  *a9 = 0;
  if ( (v14 & 1) == 0 )
  {
    v17 = SdbpInitializeSearchDBContext(a2);
    v11 = 0;
    if ( !v17 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1686,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
      goto LABEL_17;
    }
    a3 = v41;
  }
  v18 = *(int **)(a2 + 72);
  v19 = 0;
  if ( *v18 <= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, a3, v20, (__int64)&v18[12 * v19 + 2], (wchar_t **)&P) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1710,
        (unsigned int)"Failed to resolve matching text file");
      v15 = P;
      goto LABEL_55;
    }
    v15 = P;
    v21 = AslFileMappingCreate((PVOID **)&v40, (const WCHAR *)P, 0LL, 0LL, 0LL);
    v16 = (PVOID *)v40;
    v22 = v21;
    if ( v21 >= 0 )
      v22 = AslFileMappingEnsureMappedAs(v40, 0LL);
    if ( !AslFileNotFound(v22) )
      break;
    AslFileMappingDelete(v16);
    v11 = 0;
    v40 = 0LL;
    v16 = 0LL;
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x74705041u);
      v11 = 0;
    }
    a3 = v41;
    ++v19;
    v15 = 0LL;
    P = 0LL;
    if ( v19 >= *v18 )
      goto LABEL_15;
  }
  if ( v23 < 0 )
  {
    LODWORD(v37) = v23;
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 1742, (unsigned int)"Failed to map file [%x]", v37);
LABEL_55:
    v13 = 0;
    goto LABEL_17;
  }
  if ( v19 > 0 )
    *a9 = 1;
  if ( !v16 )
    goto LABEL_15;
  v27 = v11;
  v28 = a7;
  if ( a7 >= (unsigned __int64)v16[3] )
    v28 = (unsigned int)v16[3];
  P = v16[4];
  if ( a5 <= v28 )
  {
    v29 = v11;
    LOBYTE(v29) = a6 == 3;
    v30 = v29 + 1;
    if ( !v28 )
    {
LABEL_49:
      v10 = a9;
      *a8 = v38;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( v27 > a5 )
        v27 += v30 - a5;
      v31 = v28 - v27;
      if ( v28 - v27 > 0x1000 )
        v31 = 4096;
      v32 = AslAlloc(4096LL, v31 + 2LL);
      v40 = v32;
      if ( !v32 )
        break;
      if ( (char *)P + v27 < P )
      {
        v35 = "Overflow doing pointer addition";
        v36 = 1820;
        goto LABEL_53;
      }
      memmove(v32, (char *)P + v27, v31);
      if ( !a6 )
        goto LABEL_50;
      if ( a6 <= 2 )
      {
        v33 = AslStringSearchA(v40, v31, a4, a5);
        v34 = v38;
        if ( v33 )
          v34 = 1;
        v38 = v34;
      }
      else
      {
        if ( a6 != 3 )
        {
LABEL_50:
          v35 = "Unknown file encoding";
          v36 = 1854;
          goto LABEL_53;
        }
        if ( AslStringSearchW(v40, v31 >> 1, a4, a5 >> 1) )
          v38 = 1;
      }
      v27 += v31;
      ExFreePoolWithTag(v40, 0x74705041u);
      if ( v27 >= v28 )
        goto LABEL_49;
    }
    v35 = "Failed to allocate temp buffer";
    v36 = 1813;
LABEL_53:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", v36, (_DWORD)v35);
    v13 = 0;
    v10 = a9;
  }
  else
  {
LABEL_15:
    *a8 = v11;
LABEL_16:
    v13 = 1;
  }
LABEL_17:
  v24 = *v41;
  LOWORD(v24) = v24 - 37;
  if ( (unsigned __int16)v24 <= 0x37u )
  {
    v25 = 0x80000000000201LL;
    if ( _bittest64(&v25, v24) )
      *v10 = 1;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0x74705041u);
  if ( v16 )
    AslFileMappingDelete(v16);
  return v13;
}
