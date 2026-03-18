/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1400466E0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140491840 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140491FC0 (PfpPrefetchDirectoryStream.c)
 *     PfpOpenHandleCreate @ 0x1404A2488 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1405E85E4 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x14075B918 (PfpPrefetchFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
