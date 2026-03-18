/*
 * XREFs of SdbpGetNextTagId @ 0x1404870EC
 * Callers:
 *     SdbGetNextChild @ 0x140488AE8 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1404AFFB4 (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x1405BC47C (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x140486F3C (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpGetTagHeadSize @ 0x140487D88 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == -1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 1165, (unsigned int)"Reading from unfinished list");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v2);
  if ( (*(_DWORD *)(a1 + 1328) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagHeadSize + TagDataSize;
}
