/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x1405FCE50
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x1405FCDAC (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbpBinarySearchFirst @ 0x1405FD954 (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x1405FF760 (SdbpBinarySearchUnique.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // r14d
  __int64 MappedTagData; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  _DWORD *v13; // r9
  int v14; // eax
  int v16; // edx
  const char *v17; // r9
  int v18; // r8d

  if ( (unsigned __int16)SdbGetTagFromTagID() != 0x9801 )
  {
    v17 = "The tag 0x%lx is not an index tag";
    v18 = 430;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetFirstIndexedRecord", v18, (_DWORD)v17, a2);
    return 0LL;
  }
  v8 = (unsigned int)SdbGetTagDataSize(a1, a2) / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, a2);
  v10 = 0;
  v11 = MappedTagData;
  if ( !MappedTagData )
  {
    v17 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v18 = 439;
    goto LABEL_13;
  }
  v12 = a4 + 4;
  v13 = a4 + 4;
  if ( (a4[5] & 1) != 0 )
  {
    v14 = SdbpBinarySearchUnique(MappedTagData, v8, a3, v13);
    if ( v14 && *v12 < v8 - 1 )
      v16 = *(_DWORD *)(v11 + 12LL * (unsigned int)(*v12 + 1) + 8);
    else
      v16 = 0;
    a4[2] = v16;
    a4[1] = 0;
  }
  else
  {
    v14 = SdbpBinarySearchFirst(MappedTagData, v8, a3, v13);
  }
  if ( v14 )
    return *(unsigned int *)(v11 + 12LL * (unsigned int)*v12 + 8);
  return v10;
}
