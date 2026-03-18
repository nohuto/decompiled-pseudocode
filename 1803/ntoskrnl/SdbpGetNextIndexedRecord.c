/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x14061F60C
 * Callers:
 *     SdbpFindMatchingName @ 0x14061F368 (SdbpFindMatchingName.c)
 *     SdbFindNextStringIndexedTag @ 0x1407D8DE8 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbpGetNextTagId @ 0x1405FD438 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  __int64 MappedTagData; // rsi
  unsigned int TagDataSize; // eax
  __int64 v8; // rcx
  unsigned int NextTagId; // edi
  const char *v11; // r9
  int v12; // r8d
  unsigned int v13; // ebp
  __int16 TagFromTagID; // si
  __int16 v15; // ax
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v11 = "The tag 0x%lx is not an index tag";
    v12 = 499;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextIndexedRecord", v12, (_DWORD)v11, v4);
    return 0LL;
  }
  MappedTagData = SdbpGetMappedTagData(a1, v4);
  if ( !MappedTagData )
  {
    v11 = "Failed to get pointer to the index data tagid x%lx";
    v12 = 506;
    goto LABEL_11;
  }
  if ( (a3[5] & 1) != 0 )
  {
    v13 = a3[1];
    if ( !v13 )
      v13 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
    NextTagId = SdbpGetNextTagId(a1, v13);
    TagFromTagID = SdbGetTagFromTagID(a1, v13);
    v15 = SdbGetTagFromTagID(a1, NextTagId);
    if ( v15 && (v15 & 0xF000) == 0x7000 && v15 == TagFromTagID && NextTagId != a3[2] )
    {
      a3[1] = NextTagId;
      return NextTagId;
    }
  }
  else
  {
    TagDataSize = SdbGetTagDataSize(a1, v4);
    v8 = (unsigned int)a3[4];
    if ( (_DWORD)v8 != TagDataSize / 0xC - 1 )
    {
      memmove(v16, (const void *)(MappedTagData + 12 * v8), 8uLL);
      memmove(&v17, (const void *)(MappedTagData + 12LL * (unsigned int)(a3[4] + 1)), 8uLL);
      if ( v16[0] == v17 )
        return *(unsigned int *)(MappedTagData + 12LL * (unsigned int)++a3[4] + 8);
    }
  }
  return 0LL;
}
