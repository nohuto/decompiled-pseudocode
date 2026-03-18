/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14017C628
 * Callers:
 *     MmStealTopLevelPage @ 0x14013497C (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
