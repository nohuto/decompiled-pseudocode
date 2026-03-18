/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x14023B584
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x140726440 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
