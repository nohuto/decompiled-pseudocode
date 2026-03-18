/*
 * XREFs of PiEventRemovalPostSurpriseRemove @ 0x14056D8E4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 */

__int64 __fastcall PiEventRemovalPostSurpriseRemove(_QWORD *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  PnpUnlinkDeviceRemovalRelations(a1, *a4);
  if ( !a1[2] )
  {
    ++*(_DWORD *)(a1[81] + 656LL);
    a1[81] |= 1uLL;
  }
  return PnpQueuePendingSurpriseRemoval(a1[4], a4, *(unsigned int *)(a2 + 16), a3);
}
