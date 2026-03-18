/*
 * XREFs of AslEnvExpandStrings2 @ 0x14061EB74
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslpEnvResolveVars @ 0x14061ED10 (AslpEnvResolveVars.c)
 *     AslEnvExpandStrings @ 0x14061EF34 (AslEnvExpandStrings.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        int a1,
        const wchar_t *a2,
        _WORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rbx
  const wchar_t *v10; // rsi
  wchar_t *v11; // rdi
  int v12; // ebx
  __int64 v13; // r15
  __int16 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int16 v20[4]; // [rsp+20h] [rbp-58h]
  __int16 v21[4]; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v7 = (int)a3;
  v8 = -1LL;
  LODWORD(v23) = 0;
  v9 = -1LL;
  v10 = a2;
  v11 = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = (__int64)a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v23) != -1073741789 )
  {
    v18 = -1073741595;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslEnvExpandStrings2",
      775,
      (unsigned int)"AslpEnvResolveVars failed to fail properly for null buffer");
    return v18;
  }
  if ( v12 == (_DWORD)v23 )
    goto LABEL_14;
  v11 = (wchar_t *)AslAlloc(v15, 2LL * (unsigned int)v23);
  if ( !v11 )
  {
    v18 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", 783, (unsigned int)"Out of memory");
    return v18;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( v10[v16] );
  v17 = AslpEnvResolveVars(v10, a6, v14, (__int64)&v23);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v10 = v11;
    do
LABEL_14:
      ++v8;
    while ( v10[v8] );
    v18 = AslEnvExpandStrings(a1, (_DWORD)v10, v8, v7, v24, v13);
    if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741789 )
    {
      *(_DWORD *)v21 = v18;
      AslLogCallPrintf(
        1,
        (unsigned int)"AslEnvExpandStrings2",
        810,
        (unsigned int)"AslEnvExpandStrings failed [%x]",
        *(_QWORD *)v21);
    }
    goto LABEL_16;
  }
  *(_DWORD *)v20 = v17;
  AslLogCallPrintf(
    1,
    (unsigned int)"AslEnvExpandStrings2",
    795,
    (unsigned int)"AslpEnvResolveVars failed [%x]",
    *(_QWORD *)v20);
LABEL_16:
  if ( v11 )
    ExFreePoolWithTag(v11, 0x74705041u);
  return v18;
}
