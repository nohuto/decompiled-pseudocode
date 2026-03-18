/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140460174
 * Callers:
 *     PiCollapseEnumRequests @ 0x140148F24 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140460088 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 776 )
    result = PipSetDevNodeFlags(a1, 8LL);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
