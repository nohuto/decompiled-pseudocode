/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x1405D63E4
 * Callers:
 *     WmipSendEnableRequest @ 0x1405577A8 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140581C00 (WmipDoDisableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
