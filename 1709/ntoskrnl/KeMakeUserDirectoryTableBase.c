/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14017BD48
 * Callers:
 *     MmStealTopLevelPage @ 0x1400D08FC (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x14017BF70 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x14043CF0C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
