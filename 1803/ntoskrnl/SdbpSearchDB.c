/*
 * XREFs of SdbpSearchDB @ 0x1405FD77C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1405FC168 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1405FCDAC (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x1405FD89C (SdbGetIndex.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbpCheckExe @ 0x1407D5394 (SdbpCheckExe.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1407D71F4 (SdbpFindNextNamedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x1407D8DE8 (SdbFindNextStringIndexedTag.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, void *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r15
  unsigned int v9; // edi
  wchar_t *Str1; // r14
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  int FirstStringIndexedTag; // eax
  int v16; // r14d
  __int64 v17; // r8
  int i; // eax
  int v20; // eax
  int FirstTag; // eax
  int v22; // r8d
  int v23; // eax
  __int64 v24; // r12
  int FirstNamedTag; // eax
  int v26; // eax
  int v27; // r14d
  int j; // eax
  int v29; // eax
  unsigned int v30; // eax
  wchar_t *v31; // [rsp+40h] [rbp-30h]
  unsigned int v32[10]; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  v9 = 0;
  a6 = 0;
  v34 = 0;
  memset(a5, 0, 0x80uLL);
  Str1 = *(wchar_t **)(a4 + 40);
  v31 = Str1;
  v13 = 16LL;
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 0x7007u, v12, (__int64)Str1, v32);
          i;
          i = SdbpFindNextIndexedWildCardTag(a2, v32) )
    {
      v20 = SdbpCheckExe(a1, (int)a2, i, (int)&v34, a4, 1, (__int64)&v35, v6);
      v9 = v34;
      if ( v20 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_51;
      }
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    v14 = 1LL;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 0x7007u, 0x6001u, (__int64)Str1, v32);
    goto LABEL_4;
  }
  v14 = 0LL;
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  a6 = FirstTag;
  if ( !FirstTag )
  {
    v22 = 3352;
LABEL_21:
    AslLogCallPrintf(1, (unsigned int)"SdbpSearchDB", v22, (unsigned int)"No DATABASE tag found");
    goto LABEL_7;
  }
  FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v23 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v34, a4, 0, (__int64)&v35, v6);
    v9 = v34;
    if ( v23 )
    {
      if ( (_DWORD)v35 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v34 > 0x10 )
    {
      goto LABEL_51;
    }
    if ( v14 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v32);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTag((int)a2, a6, v16, 24577, v31);
  }
  if ( *(_QWORD *)(a4 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2) )
    {
      v24 = 1LL;
      FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 0x7007u, 0x6020u, *(_QWORD *)(a4 + 48), v32);
      goto LABEL_41;
    }
    v24 = 0LL;
    a6 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    if ( a6 )
    {
      v22 = 3424;
      goto LABEL_21;
    }
    FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_41:
    while ( 1 )
    {
      v27 = FirstNamedTag;
      if ( !FirstNamedTag )
        break;
      v26 = SdbpCheckExe(a1, (int)a2, FirstNamedTag, (int)&v34, a4, 0, (__int64)&v35, v6);
      v9 = v34;
      if ( v26 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_51;
      }
      if ( v24 )
        FirstNamedTag = SdbFindNextStringIndexedTag(a2, v32);
      else
        FirstNamedTag = SdbpFindNextNamedTag((int)a2, a6, v27, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 0x7007u, v17, (__int64)v31, v32);
          j;
          j = SdbpFindNextIndexedWildCardTag(a2, v32) )
    {
      v29 = SdbpCheckExe(a1, (int)a2, j, (int)&v34, a4, 2, (__int64)&v35, v6);
      v9 = v34;
      if ( v29 )
      {
        if ( (_DWORD)v35 != 2 )
          break;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_51;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
    do
    {
LABEL_51:
      v30 = SdbFindFirstTag((__int64)a2, *v6, 24582);
      if ( v30 )
        SdbGetStringTagPtr(a2, v30);
      v6 += 2;
      --v13;
    }
    while ( v13 );
  }
  return v9;
}
