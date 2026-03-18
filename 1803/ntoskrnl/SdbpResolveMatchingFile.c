/*
 * XREFs of SdbpResolveMatchingFile @ 0x14061E914
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslEnvExpandStrings2 @ 0x14061EB74 (AslEnvExpandStrings2.c)
 *     AslImageFileToArchitecture @ 0x14061F198 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x14061F1C4 (AslEnvGetProcessWowInfo.c)
 *     AslPathToNetworkPathNt @ 0x14061F7E4 (AslPathToNetworkPathNt.c)
 *     AslPathClean @ 0x14061F85C (AslPathClean.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        wchar_t **a6)
{
  unsigned int v10; // r12d
  __int64 v11; // r15
  __int64 v12; // rsi
  int ProcessWowInfo; // eax
  __int16 v14; // ax
  int v15; // ecx
  unsigned __int64 v16; // rcx
  SIZE_T v17; // rdi
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  int v20; // eax
  __int16 v21; // ax
  int v22; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  const char *v26; // r9
  int v27; // r8d
  __int64 v28; // [rsp+20h] [rbp-40h]
  int v29; // [rsp+28h] [rbp-38h]
  __int64 v30; // [rsp+28h] [rbp-38h]
  int v31; // [rsp+30h] [rbp-30h]
  __int16 v32; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *v34; // [rsp+50h] [rbp-10h] BYREF
  __int16 v37; // [rsp+B8h] [rbp+58h] BYREF

  v33 = 0LL;
  v10 = 0;
  *a6 = 0LL;
  v37 = -1;
  v32 = -1;
  v34 = 0LL;
  if ( !a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 560, (unsigned int)"Invalid match file length");
    return v10;
  }
  v11 = a5;
  v12 = -1LL;
  if ( *a3 == 37 )
  {
    ProcessWowInfo = AslEnvGetProcessWowInfo(&v32, &v37);
    if ( ProcessWowInfo < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpResolveMatchingFile",
        581,
        (unsigned int)"AslEnvGetProcessWowInfo failed [%x]",
        ProcessWowInfo);
      return v10;
    }
    v14 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
    if ( v14 == -1 )
      v14 = v37;
    v15 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &v33, v32, v14);
    if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741789 )
    {
      LODWORD(v28) = v15;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpResolveMatchingFile",
        598,
        (unsigned int)"AslEnvExpandStrings2 failed [%x]",
        v28);
      return v10;
    }
    v16 = 2 * v33;
  }
  else
  {
    v24 = *(unsigned int *)(a5 + 8);
    if ( v24 + a4 < v24 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 611, (unsigned int)"Invalid path size");
      return v10;
    }
    v25 = v24 + a4;
    if ( v25 + 1 < v25 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 616, (unsigned int)"Invalid path size");
      return v10;
    }
    v16 = v25 + 1;
  }
  if ( v16 + 20 < v16 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 622, (unsigned int)"Invalid path size");
    return v10;
  }
  v17 = 2 * (v16 + 20);
  if ( !is_mul_ok(v16 + 20, 2uLL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 627, (unsigned int)"Invalid buffer size");
    return v10;
  }
  v33 = 2 * (v16 + 20);
  if ( v33 < 0x208 )
    v17 = 520LL;
  v18 = (wchar_t *)AslAlloc(v16, v17);
  v19 = v18;
  if ( !v18 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 635, (unsigned int)"Out of memory");
    return v10;
  }
  if ( *a3 != 37 )
  {
    memmove(v18, *(const void **)v11, 2LL * *(unsigned int *)(v11 + 8));
    memmove(&v19[*(unsigned int *)(v11 + 8)], a3, 2LL * (a4 + 1));
    goto LABEL_18;
  }
  v20 = AslEnvGetProcessWowInfo(&v32, &v37);
  if ( v20 < 0 )
  {
    v26 = "AslEnvGetProcessWowInfo failed [%x]";
    v27 = 647;
LABEL_41:
    LODWORD(v28) = v20;
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v27, (_DWORD)v26, v28);
    goto LABEL_24;
  }
  v21 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
  if ( v21 == -1 )
    v21 = v37;
  LOWORD(v31) = v21;
  LOWORD(v29) = v32;
  v22 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v19, v17 >> 1, &v33, v29, v31);
  if ( v22 >= 0 )
  {
LABEL_18:
    v20 = AslPathClean(v19, v19);
    if ( v20 >= 0 )
    {
      if ( (int)AslPathToNetworkPathNt(&v34, v19) >= 0 )
      {
        ExFreePoolWithTag(v19, 0x74705041u);
        v19 = v34;
      }
      else if ( wcsnicmp(v19, L"\\??\\", 4uLL) )
      {
        do
          ++v12;
        while ( v19[v12] );
        memmove(v19 + 4, v19, 2 * v12 + 2);
        memmove(v19, L"\\??\\", 8uLL);
      }
      v10 = 1;
      *a6 = v19;
      v19 = 0LL;
      goto LABEL_24;
    }
    v26 = "AslPathClean failed [%x]";
    v27 = 689;
    goto LABEL_41;
  }
  LODWORD(v30) = v22;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    664,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]",
    a3,
    v30);
LABEL_24:
  if ( v19 )
    ExFreePoolWithTag(v19, 0x74705041u);
  return v10;
}
