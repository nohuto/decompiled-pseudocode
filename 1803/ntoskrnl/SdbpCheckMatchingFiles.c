/*
 * XREFs of SdbpCheckMatchingFiles @ 0x14061E740
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     SdbpInitializeSearchDBContext @ 0x14061F27C (SdbpInitializeSearchDBContext.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     AslFileNotFound @ 0x14064DF4C (AslFileNotFound.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v8; // r15d
  int *v9; // r13
  unsigned int v10; // r14d
  PVOID v11; // rdi
  PVOID *v12; // r12
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r13
  __int64 v15; // rdx
  int v16; // eax
  int *v17; // r8
  int v18; // r15d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 result; // rax
  unsigned int v22; // eax
  int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  int *v28; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+A0h] [rbp+50h]

  v31 = a3;
  v6 = a6;
  v25 = 0;
  v8 = a2;
  P = 0LL;
  v9 = a1;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a6[11] )
  {
    v25 = 1;
    goto LABEL_21;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      if ( v6[1] && *StringTagPtr == 42 )
      {
        v22 = SdbpCheckAllAttributes((unsigned int)&v25, v8, a3, a5, v6[1]);
        if ( (unsigned int)AslFileNotFound(v22) || v23 >= 0 )
        {
          v10 = 1;
        }
        else
        {
          LODWORD(v24) = v23;
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpCheckMatchingFiles",
            2342,
            (unsigned int)"Failed to check file attributes [%x]",
            v24);
        }
        goto LABEL_29;
      }
      v15 = -1LL;
      do
        ++v15;
      while ( StringTagPtr[v15] );
      v16 = *(_DWORD *)v6;
      v27 = v15;
      if ( (v16 & 1) != 0 )
      {
LABEL_10:
        v17 = (int *)v6[9];
        v18 = 0;
        v28 = v17;
        if ( *v17 <= 0 )
          goto LABEL_17;
        while ( 1 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, (unsigned int)v15, &v17[12 * v18 + 2], &P) )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpCheckMatchingFiles",
              2392,
              (unsigned int)"Failed to resolve matching file");
            v11 = P;
            goto LABEL_29;
          }
          v11 = P;
          a6 = 0LL;
          if ( (int)AslFileMappingCreate((PVOID **)&a6, (const WCHAR *)P, 0LL, 0LL, 0LL) >= 0 )
          {
            v12 = (PVOID *)a6;
            if ( (int)SdbpCheckAllAttributes((unsigned int)&v25, a2, v31, a5, (__int64)a6) >= 0 )
            {
              if ( v18 > 0 )
                *((_DWORD *)v6 + 20) = 1;
LABEL_17:
              v19 = (unsigned __int16)*StringTagPtr;
              LOWORD(v19) = v19 - 37;
              if ( (unsigned __int16)v19 <= 0x37u )
              {
                v20 = 0x80000000000201LL;
                if ( _bittest64(&v20, v19) )
                  *((_DWORD *)v6 + 20) = 1;
              }
              v9 = a1;
LABEL_21:
              v10 = 1;
              goto LABEL_22;
            }
            AslFileMappingDelete(v12);
            v12 = 0LL;
            if ( v11 )
              ExFreePoolWithTag(v11, 0x74705041u);
          }
          else
          {
            if ( v11 )
              ExFreePoolWithTag(v11, 0x74705041u);
            v12 = (PVOID *)a6;
          }
          v17 = v28;
          ++v18;
          LODWORD(v15) = v27;
          v11 = 0LL;
          P = 0LL;
          if ( v18 >= *v28 )
            goto LABEL_17;
        }
      }
      if ( (unsigned int)SdbpInitializeSearchDBContext(v6) )
      {
        LODWORD(v15) = v27;
        goto LABEL_10;
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingFiles",
        2368,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingFiles",
        2317,
        (unsigned int)"Failed to get the string from the database");
    }
LABEL_29:
    v9 = a1;
  }
LABEL_22:
  AslFileMappingDelete(v12);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x74705041u);
  result = v10;
  *v9 = v25;
  return result;
}
