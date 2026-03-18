/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x14072C684
 * Callers:
 *     SdbpCheckMatchingText @ 0x14072BC90 (SdbpCheckMatchingText.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbGetTagDataSize @ 0x140486F3C (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x1404AFBE4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
  void *v11; // rdi
  unsigned int FirstTag; // eax
  const char *v13; // r9
  int v14; // r8d
  _WORD *StringTagPtr; // rax
  _WORD *v16; // r15
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int TagDataSize; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebp
  PVOID v22; // rax
  const char *v23; // r9
  int v24; // r8d
  unsigned int v25; // eax
  int DWORDTag; // r14d
  unsigned int v27; // eax

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
    v13 = "Failed to get MATCHING_TEXT file path";
    v14 = 1355;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v14, (_DWORD)v13);
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v16 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    v23 = "Failed to read MATCHING_TEXT file path";
    v24 = 1361;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v24, (_DWORD)v23);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x74705041u);
    return v7;
  }
  v17 = SdbFindFirstTag(a1, v9, 36883);
  v18 = v17;
  if ( !v17 )
  {
    v13 = "Failed to read text to match";
    v14 = 1370;
    goto LABEL_3;
  }
  TagDataSize = SdbGetTagDataSize(a1, v17);
  v21 = TagDataSize;
  if ( !TagDataSize )
  {
    v13 = "Failed to get text to match blob";
    v14 = 1376;
    goto LABEL_3;
  }
  v22 = AslAlloc(v20, TagDataSize + 2LL);
  v11 = v22;
  if ( !v22 )
  {
    v13 = "Failed to allocate memory for text blob";
    v14 = 1382;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v18, (__int64)v22, v21) )
  {
    v23 = "Failed to read matching text blob";
    v24 = 1387;
    goto LABEL_22;
  }
  v25 = SdbFindFirstTag(a1, v9, 16467);
  if ( !v25 )
  {
    v23 = "Failed to read text encoding";
    v24 = 1396;
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v25, 0);
  if ( !DWORDTag )
  {
    v23 = "Failed to read encoding type";
    v24 = 1402;
    goto LABEL_22;
  }
  v27 = SdbFindFirstTag(a1, v9, 16385);
  if ( v27 )
    v8 = SdbReadDWORDTag(a1, v27, 0x2000u);
  v7 = 1;
  *a3 = v16;
  *a4 = v11;
  *a5 = v21;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
