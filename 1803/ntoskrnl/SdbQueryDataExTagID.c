/*
 * XREFs of SdbQueryDataExTagID @ 0x1407D4E20
 * Callers:
 *     SdbQueryDataEx @ 0x1407D4D7C (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140161D3C (RtlStringCchCopyNW.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x14061DF68 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int DWORDTag; // r12d
  const wchar_t *v8; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rax
  size_t v13; // r15
  wchar_t *v14; // rax
  wchar_t *v15; // r14
  wchar_t *v16; // rax
  wchar_t *v17; // rbp
  size_t v18; // r14
  unsigned int FirstNamedTag; // eax
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v23; // ax
  unsigned int v24; // r14d
  const char *v25; // r9
  int v26; // r8d
  __int64 v27; // rax
  wchar_t *Str1; // [rsp+20h] [rbp-58h]
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h] BYREF
  int *v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  DWORDTag = 0;
  v8 = L"Policy";
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      5326,
      (unsigned int)"One of lpBuffer or lpcbBufferSize should not be null");
    return 87;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( aPolicy[v12] );
  v13 = (int)v12 + 1;
  v14 = (wchar_t *)AslAlloc(a1, 2 * v13);
  pszDest = v14;
  if ( !v14 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      5338,
      (unsigned int)"Cannot allocate temporary buffer for parsing the name \"%ws\"",
      L"Policy");
    return 8;
  }
  v15 = v14;
  while ( 1 )
  {
    v16 = wcschr(v8, 0x5Cu);
    v17 = v16;
    if ( v16 )
    {
      v18 = v16 - v8;
      if ( RtlStringCchCopyNW(pszDest, v13, v8, v18) < 0 )
      {
LABEL_60:
        v11 = 122;
        goto LABEL_61;
      }
      pszDest[v18] = 0;
      v8 = v17 + 1;
      v15 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(v15, v13, v8) < 0 )
        goto LABEL_60;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, v15);
    a2 = FirstNamedTag;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_19;
  }
  if ( !FirstNamedTag )
  {
LABEL_19:
    v11 = 1168;
    goto LABEL_61;
  }
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
  {
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  }
  else
  {
    LODWORD(Str1) = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      5387,
      (unsigned int)"The entry 0x%x does not have valuetype information",
      Str1);
  }
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_39;
    case 1:
      v23 = 24606;
      break;
    case 3:
      v23 = -28667;
      break;
    case 4:
      v23 = 16409;
      break;
    case 11:
      v23 = 20487;
      break;
    default:
      LODWORD(Str1) = a2;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbQueryDataExTagID",
        5424,
        (unsigned int)"The entry 0x%x contains bad valuetype information 0x%x",
        Str1,
        DWORDTag);
      v11 = 1358;
      goto LABEL_61;
  }
  v24 = SdbFindFirstTag(a1, a2, v23);
  if ( !v24 )
  {
    LODWORD(Str1) = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      5436,
      (unsigned int)"The entry 0x%x contains no value",
      Str1);
    goto LABEL_19;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v24);
    if ( !StringTagPtr )
    {
      v25 = "The entry 0x%x contains bad string value 0x%x";
      v26 = 5452;
      goto LABEL_49;
    }
    v27 = -1LL;
    do
      ++v27;
    while ( *((_WORD *)StringTagPtr + v27) );
    TagDataSize = 2 * v27 + 2;
LABEL_39:
    v11 = 0;
    if ( TagDataSize )
      goto LABEL_40;
    goto LABEL_54;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v24);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v24);
    if ( !StringTagPtr )
    {
      v25 = "The entry 0x%x contains bad binary value 0x%x";
      v26 = 5466;
LABEL_49:
      LODWORD(Str1) = a2;
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", v26, (_DWORD)v25, Str1, v24);
      goto LABEL_19;
    }
    goto LABEL_39;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v24, 0LL);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_39;
  }
  LODWORD(v32) = SdbReadDWORDTag(a1, v24, 0);
  StringTagPtr = &v32;
  TagDataSize = 4;
LABEL_40:
  if ( a5 && a6 && *a6 >= TagDataSize )
  {
    memmove(a5, StringTagPtr, *a6);
    v11 = 0;
  }
  else
  {
    v11 = 122;
  }
LABEL_54:
  if ( a6 )
    *a6 = TagDataSize;
  if ( v33 )
    *v33 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_61:
  ExFreePoolWithTag(pszDest, 0x74705041u);
  return v11;
}
