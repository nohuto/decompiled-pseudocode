/*
 * XREFs of SdbGetNextChild @ 0x140526D20
 * Callers:
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x140541DF0 (SdbpMatchList.c)
 *     SdbFindNextTag @ 0x14058EB9C (SdbFindNextTag.c)
 *     SdbFindFirstNamedTag @ 0x14076FE2C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14076FEF4 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x140524BBC (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
