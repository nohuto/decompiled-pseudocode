/*
 * XREFs of SdbGetNextChild @ 0x1405FD384
 * Callers:
 *     SdbFindNextTag @ 0x1405FCFD8 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x14061E4E4 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1407D71F4 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x1405FD438 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v4);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, a3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetNextChild",
    1307,
    (unsigned int)"Trying to operate on non-list, non-root tag");
  return 0LL;
}
