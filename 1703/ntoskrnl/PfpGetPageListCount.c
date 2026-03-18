/*
 * XREFs of PfpGetPageListCount @ 0x14053D344
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140463A54 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140463E10 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x14053CED0 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14053D234 (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140564F88 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1405789F4 (PfpPrefetchPrivatePages.c)
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
