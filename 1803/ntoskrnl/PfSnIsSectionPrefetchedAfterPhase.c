/*
 * XREFs of PfSnIsSectionPrefetchedAfterPhase @ 0x1404A21F4
 * Callers:
 *     PfSnGetSectionObject @ 0x1404A1E78 (PfSnGetSectionObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfSnIsSectionPrefetchedAfterPhase(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax

  v3 = *(_DWORD *)(a1 + 20);
  if ( a2 == 1 )
    v4 = v3 >> 8;
  else
    v4 = v3 >> 1;
  if ( !_BitScanReverse(&v6, v4 & 0x7F) )
    return 0;
  _BitScanReverse(&v7, a3);
  return v6 > v7;
}
