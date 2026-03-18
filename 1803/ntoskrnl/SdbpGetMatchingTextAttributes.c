/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x1407D6AB4
 * Callers:
 *     SdbpCheckMatchingText @ 0x1407D5BC0 (SdbpCheckMatchingText.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbReadBinaryTag @ 0x1405FFA10 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  unsigned int v9; // r12d
  void *v11; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int TagDataSize; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebp
  PVOID v20; // rax
  unsigned int v21; // eax
  int DWORDTag; // r14d
  unsigned int v23; // eax

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1564,
      (unsigned int)"Failed to get MATCHING_TEXT file path");
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v14 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1570,
      (unsigned int)"Failed to read MATCHING_TEXT file path");
LABEL_22:
    if ( v11 )
      ExFreePoolWithTag(v11, 0x74705041u);
    return v7;
  }
  v15 = SdbFindFirstTag(a1, v9, 36883);
  v16 = v15;
  if ( !v15 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1579,
      (unsigned int)"Failed to read text to match");
    return v7;
  }
  TagDataSize = SdbGetTagDataSize(a1, v15);
  v19 = TagDataSize;
  if ( !TagDataSize )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1585,
      (unsigned int)"Failed to get text to match blob");
    return v7;
  }
  v20 = AslAlloc(v18, TagDataSize + 2LL);
  v11 = v20;
  if ( !v20 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1591,
      (unsigned int)"Failed to allocate memory for text blob");
    return v7;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v16, (__int64)v20, v19) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1596,
      (unsigned int)"Failed to read matching text blob");
    goto LABEL_22;
  }
  v21 = SdbFindFirstTag(a1, v9, 16467);
  if ( !v21 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1605,
      (unsigned int)"Failed to read text encoding");
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v21, 0);
  if ( !DWORDTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1611,
      (unsigned int)"Failed to read encoding type");
    goto LABEL_22;
  }
  v23 = SdbFindFirstTag(a1, v9, 16385);
  if ( v23 )
    v8 = SdbReadDWORDTag(a1, v23, 0x2000u);
  v7 = 1;
  *a3 = v14;
  *a4 = v11;
  *a5 = v19;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
