/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140554D44
 * Callers:
 *     PiCollapseEnumRequests @ 0x14012EB3C (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x14055EF24 (PiProcessReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipForDeviceNodeSubtree @ 0x14055F440 (PipForDeviceNodeSubtree.c)
 */

char __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 300) == 776 )
    result = PipSetDevNodeFlags(a1, 8);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
