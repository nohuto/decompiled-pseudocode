/*
 * XREFs of PnpIsBeingRemovedSafely @ 0x1405C9B10
 * Callers:
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405C94B4 (PnpBuildUnsafeRemovalDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpIsBeingRemovedSafely(_DWORD *a1, int a2)
{
  int v3; // ecx

  if ( (unsigned int)(a2 - 1) > 1 || (a1[140] & 0x200) != 0 )
    return 1;
  v3 = a1[75];
  if ( (unsigned int)(v3 - 782) <= 1 )
    v3 = a1[76];
  return v3 <= 774 || v3 >= 780 || v3 == 777;
}
