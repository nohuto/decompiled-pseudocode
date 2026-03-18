/*
 * XREFs of SdbQueryDataExTagID @ 0x14072AFB4
 * Callers:
 *     SdbQueryDataEx @ 0x14072AF10 (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14006DBC0 (RtlStringCchCopyNW.c)
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbGetTagDataSize @ 0x140486F3C (SdbGetTagDataSize.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbpGetMappedTagData @ 0x1404B5810 (SdbpGetMappedTagData.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     SdbReadQWORDTag @ 0x1405DA234 (SdbReadQWORDTag.c)
 *     SdbFindFirstNamedTag @ 0x14072CCF4 (SdbFindFirstNamedTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  const wchar_t *v7; // rbx
  unsigned int v10; // ebx
  wchar_t *v11; // rax
  wchar_t *Str1; // rdi
  wchar_t *v13; // rax
  wchar_t *v14; // rbp
  size_t v15; // rdi
  unsigned int FirstNamedTag; // eax
  int DWORDTag; // r13d
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v21; // ax
  unsigned int v22; // r14d
  const char *v23; // r9
  int v24; // r8d
  __int64 v25; // rax
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  __int64 v29; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v7 = L"Policy";
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4826,
      (unsigned int)"One of lpBuffer or lpcbBufferSize should not be null");
    return 87;
  }
  v11 = (wchar_t *)AslAlloc(a1, 0xEuLL);
  pszDest = v11;
  if ( !v11 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4838,
      (unsigned int)"Cannot allocate temporary buffer for parsing the name \"%ws\"");
    return 8;
  }
  Str1 = v11;
  while ( 1 )
  {
    v13 = wcschr(v7, 0x5Cu);
    v14 = v13;
    if ( v13 )
    {
      v15 = v13 - v7;
      if ( RtlStringCchCopyNW(pszDest, 7uLL, v7, v15) < 0 )
      {
LABEL_58:
        v10 = 122;
        goto LABEL_59;
      }
      pszDest[v15] = 0;
      v7 = v14 + 1;
      Str1 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, 7uLL, v7) < 0 )
        goto LABEL_58;
      v7 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, Str1);
    a2 = FirstNamedTag;
    if ( !v7 || !*v7 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_17;
  }
  if ( !FirstNamedTag )
  {
LABEL_17:
    v10 = 1168;
    goto LABEL_59;
  }
  DWORDTag = 0;
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  else
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4887,
      (unsigned int)"The entry 0x%x does not have valuetype information");
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_37;
    case 1:
      v21 = 24606;
      break;
    case 3:
      v21 = -28667;
      break;
    case 4:
      v21 = 16409;
      break;
    case 11:
      v21 = 20487;
      break;
    default:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbQueryDataExTagID",
        4924,
        (unsigned int)"The entry 0x%x contains bad valuetype information 0x%x");
      v10 = 1358;
      goto LABEL_59;
  }
  v22 = SdbFindFirstTag(a1, a2, v21);
  if ( !v22 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", 4936, (unsigned int)"The entry 0x%x contains no value");
    goto LABEL_17;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v22);
    if ( !StringTagPtr )
    {
      v23 = "The entry 0x%x contains bad string value 0x%x";
      v24 = 4952;
      goto LABEL_47;
    }
    v25 = -1LL;
    do
      ++v25;
    while ( *((_WORD *)StringTagPtr + v25) );
    TagDataSize = 2 * v25 + 2;
LABEL_37:
    v10 = 0;
    if ( TagDataSize )
      goto LABEL_38;
    goto LABEL_52;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v22);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v22);
    if ( !StringTagPtr )
    {
      v23 = "The entry 0x%x contains bad binary value 0x%x";
      v24 = 4966;
LABEL_47:
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", v24, (_DWORD)v23);
      goto LABEL_17;
    }
    goto LABEL_37;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v22, 0LL);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_37;
  }
  LODWORD(v29) = SdbReadDWORDTag(a1, v22, 0);
  v10 = 0;
  StringTagPtr = &v29;
  TagDataSize = 4;
LABEL_38:
  if ( a5 && a6 && *a6 >= TagDataSize )
    memmove(a5, StringTagPtr, *a6);
  else
    v10 = 122;
LABEL_52:
  if ( a6 )
    *a6 = TagDataSize;
  if ( v30 )
    *v30 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_59:
  ExFreePoolWithTag(pszDest, 0x74705041u);
  return v10;
}
