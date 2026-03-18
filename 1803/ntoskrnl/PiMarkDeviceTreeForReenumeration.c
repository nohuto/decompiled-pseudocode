/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x1405CA6C0
 * Callers:
 *     PiCollapseEnumRequests @ 0x140163714 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x1405CA710 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1405CA500 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 776 )
    result = PipSetDevNodeFlags(a1, 8LL);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
