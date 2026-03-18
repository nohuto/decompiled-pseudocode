/*
 * XREFs of FopFreeMappingTable @ 0x140758DDC
 * Callers:
 *     FopFreeFontData @ 0x140758D6C (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x14083825C (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
