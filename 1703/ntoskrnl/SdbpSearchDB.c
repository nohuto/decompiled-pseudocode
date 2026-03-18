/*
 * XREFs of SdbpSearchDB @ 0x1404B5980
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1404B41A0 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1404B569C (SdbFindFirstStringIndexedTag.c)
 *     SdbGetIndex @ 0x1404B5AA0 (SdbGetIndex.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     SdbpCheckExe @ 0x14072B51C (SdbpCheckExe.c)
 *     SdbFindFirstNamedTag @ 0x14072CCF4 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14072CDBC (SdbpFindNextNamedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x14072E2F0 (SdbFindNextStringIndexedTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, void *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r15
  unsigned int v9; // edi
  wchar_t *Str1; // rsi
  __int64 v12; // r8
  unsigned int v13; // r14d
  int v14; // r12d
  int FirstStringIndexedTag; // eax
  int v16; // esi
  __int64 v17; // r8
  __int64 v19; // rsi
  int i; // eax
  int v21; // eax
  int FirstTag; // eax
  int v23; // r8d
  int v24; // eax
  int v25; // r12d
  int FirstNamedTag; // eax
  int v27; // eax
  int v28; // esi
  int j; // eax
  int v30; // eax
  unsigned int v31; // eax
  wchar_t *v32; // [rsp+40h] [rbp-30h]
  unsigned int v33[10]; // [rsp+48h] [rbp-28h] BYREF
  int v35; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  v9 = 0;
  a6 = 0;
  v35 = 0;
  memset(a5, 0, 0x80uLL);
  Str1 = *(wchar_t **)(a4 + 40);
  v32 = Str1;
  v13 = 16;
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v12, (__int64)Str1, v33);
          i;
          i = SdbpFindNextIndexedWildCardTag(a2, v33) )
    {
      v21 = SdbpCheckExe(a1, (int)a2, i, (int)&v35, a4, 1, (__int64)&v36, v6);
      v9 = v35;
      if ( v21 )
      {
        if ( (_DWORD)v36 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v35 > 0x10 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    v14 = 1;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, (__int64)Str1, v33);
    goto LABEL_4;
  }
  v14 = 0;
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  a6 = FirstTag;
  if ( !FirstTag )
  {
    v23 = 2852;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbpSearchDB", v23, (unsigned int)"No DATABASE tag found");
    goto LABEL_7;
  }
  FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v24 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v35, a4, 0, (__int64)&v36, v6);
    v9 = v35;
    if ( v24 )
    {
      if ( (_DWORD)v36 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v35 > 0x10 )
    {
      goto LABEL_10;
    }
    if ( v14 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v33);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTag((int)a2, a6, v16, 24577, v32);
  }
  if ( *(_QWORD *)(a4 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2) )
    {
      v25 = 1;
      FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, *(_QWORD *)(a4 + 48), v33);
      goto LABEL_42;
    }
    v25 = 0;
    a6 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    if ( a6 )
    {
      v23 = 2924;
      goto LABEL_22;
    }
    FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_42:
    while ( 1 )
    {
      v28 = FirstNamedTag;
      if ( !FirstNamedTag )
        break;
      v27 = SdbpCheckExe(a1, (int)a2, FirstNamedTag, (int)&v35, a4, 0, (__int64)&v36, v6);
      v9 = v35;
      if ( v27 )
      {
        if ( (_DWORD)v36 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v35 > 0x10 )
      {
        goto LABEL_10;
      }
      if ( v25 )
        FirstNamedTag = SdbFindNextStringIndexedTag(a2, v33);
      else
        FirstNamedTag = SdbpFindNextNamedTag((int)a2, a6, v28, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v17, (__int64)v32, v33);
          j;
          j = SdbpFindNextIndexedWildCardTag(a2, v33) )
    {
      v30 = SdbpCheckExe(a1, (int)a2, j, (int)&v35, a4, 2, (__int64)&v36, v6);
      v9 = v35;
      if ( v30 )
      {
        if ( (_DWORD)v36 != 2 )
          break;
      }
      else if ( (unsigned int)v35 > 0x10 )
      {
        goto LABEL_10;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
LABEL_10:
    v19 = v13;
    do
    {
      v31 = SdbFindFirstTag((__int64)a2, *v6, 24582);
      if ( v31 )
        SdbGetStringTagPtr(a2, v31);
      v6 += 2;
      --v19;
    }
    while ( v19 );
  }
  return v9;
}
