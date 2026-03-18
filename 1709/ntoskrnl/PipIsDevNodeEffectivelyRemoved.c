/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x1401FEB8C
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x1406C0A00 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
