/*
 * XREFs of MmMdlPageContentsState @ 0x14011E040
 * Callers:
 *     SmKmIssueVolumeIo @ 0x140273624 (SmKmIssueVolumeIo.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  if ( a2 == 2 )
    return (*(unsigned __int16 *)(a1 + 10) >> 14) & 1;
  if ( a2 == 1 )
    *(_WORD *)(a1 + 10) |= 0x4000u;
  else
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  return a2;
}
