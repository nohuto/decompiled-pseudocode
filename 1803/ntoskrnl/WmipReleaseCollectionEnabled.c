/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140605A9C
 * Callers:
 *     WmipSendEnableRequest @ 0x14056A1B8 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x1405F0AD4 (WmipDoDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405FF1F0 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14060002C (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
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
