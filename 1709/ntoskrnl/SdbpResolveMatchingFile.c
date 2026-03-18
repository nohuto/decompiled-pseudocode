/*
 * XREFs of SdbpResolveMatchingFile @ 0x140542220
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140541F70 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x14076EAE4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslPathClean @ 0x1405417F0 (AslPathClean.c)
 *     AslPathToNetworkPathNt @ 0x140541914 (AslPathToNetworkPathNt.c)
 *     AslEnvGetProcessWowInfo @ 0x14054213C (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1405421F4 (AslImageFileToArchitecture.c)
 *     AslEnvExpandStrings2 @ 0x1405426EC (AslEnvExpandStrings2.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
  __int16 v13; // ax
  int v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  wchar_t *v17; // rax
  wchar_t *v18; // rbx
  __int16 v19; // ax
  const char *v21; // r9
  int v22; // r8d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  const char *v25; // r9
  int v26; // r8d
  int v27; // [rsp+28h] [rbp-38h]
  int v28; // [rsp+30h] [rbp-30h]
  __int16 v29; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *v31; // [rsp+50h] [rbp-10h] BYREF
  __int16 v34; // [rsp+B8h] [rbp+58h] BYREF

  v30 = 0LL;
  v10 = 0;
  *a6 = 0LL;
  v34 = -1;
  v29 = -1;
  v31 = 0LL;
  if ( !a4 )
  {
    v21 = "Invalid match file length";
    v22 = 541;
    goto LABEL_31;
  }
  v11 = a5;
  v12 = -1LL;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&v29, &v34) < 0 )
    {
      v21 = "AslEnvGetProcessWowInfo failed [%x]";
      v22 = 562;
      goto LABEL_31;
    }
    v13 = AslImageFileToArchitecture(*(_WORD *)(a1 + 576));
    if ( v13 == -1 )
      v13 = v34;
    v14 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &v30, v29, v13);
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
    {
      v21 = "AslEnvExpandStrings2 failed [%x]";
      v22 = 579;
LABEL_31:
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v22, (_DWORD)v21);
      return v10;
    }
    v15 = 2 * v30;
  }
  else
  {
    v23 = *(unsigned int *)(a5 + 8);
    if ( v23 + a4 < v23 )
    {
      v21 = "Invalid path size";
      v22 = 592;
      goto LABEL_31;
    }
    v24 = v23 + a4;
    if ( v24 + 1 < v24 )
    {
      v21 = "Invalid path size";
      v22 = 597;
      goto LABEL_31;
    }
    v15 = v24 + 1;
  }
  if ( v15 + 20 < v15 )
  {
    v21 = "Invalid path size";
    v22 = 603;
    goto LABEL_31;
  }
  v16 = 2 * (v15 + 20);
  if ( !is_mul_ok(v15 + 20, 2uLL) )
  {
    v21 = "Invalid buffer size";
    v22 = 608;
    goto LABEL_31;
  }
  v30 = 2 * (v15 + 20);
  if ( v30 < 0x208 )
    v16 = 520LL;
  v17 = (wchar_t *)AslAlloc(v15, v16);
  v18 = v17;
  if ( !v17 )
  {
    v21 = "Out of memory";
    v22 = 616;
    goto LABEL_31;
  }
  if ( *a3 != 37 )
  {
    memmove(v17, *(const void **)v11, 2LL * *(unsigned int *)(v11 + 8));
    memmove(&v18[*(unsigned int *)(v11 + 8)], a3, 2LL * (a4 + 1));
    goto LABEL_18;
  }
  if ( (int)AslEnvGetProcessWowInfo(&v29, &v34) < 0 )
  {
    v25 = "AslEnvGetProcessWowInfo failed [%x]";
    v26 = 628;
LABEL_42:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v26, (_DWORD)v25);
    goto LABEL_24;
  }
  v19 = AslImageFileToArchitecture(*(_WORD *)(a1 + 576));
  if ( v19 == -1 )
    v19 = v34;
  LOWORD(v28) = v19;
  LOWORD(v27) = v29;
  if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v18, v16 >> 1, &v30, v27, v28) >= 0 )
  {
LABEL_18:
    if ( (int)AslPathClean(v18, v18, v16 >> 1) >= 0 )
    {
      if ( (int)AslPathToNetworkPathNt(&v31, v18) >= 0 )
      {
        ExFreePoolWithTag(v18, 0x74705041u);
        v18 = v31;
      }
      else if ( wcsnicmp(v18, L"\\??\\", 4uLL) )
      {
        do
          ++v12;
        while ( v18[v12] );
        memmove(v18 + 4, v18, 2 * v12 + 2);
        memmove(v18, L"\\??\\", 8uLL);
      }
      v10 = 1;
      *a6 = v18;
      v18 = 0LL;
      goto LABEL_24;
    }
    v25 = "AslPathClean failed [%x]";
    v26 = 670;
    goto LABEL_42;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    645,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_24:
  if ( v18 )
    ExFreePoolWithTag(v18, 0x74705041u);
  return v10;
}
