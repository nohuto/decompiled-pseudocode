/*
 * XREFs of FopFreeMappingTable @ 0x14083D8A8
 * Callers:
 *     FopFreeFontData @ 0x14083D834 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x1408E3B54 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
