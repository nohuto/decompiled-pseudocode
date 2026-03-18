/*
 * XREFs of PfpGetPageListCount @ 0x1404433AC
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1404401F8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140440598 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140442F2C (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404432A8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140453444 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1406F2B50 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpGetPageListCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
