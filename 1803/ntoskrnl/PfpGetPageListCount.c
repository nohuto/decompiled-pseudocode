/*
 * XREFs of PfpGetPageListCount @ 0x1404BBA90
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x14048E8FC (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140491FC0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404BB98C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x1405E85E4 (PfpPrefetchPrivatePages.c)
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
