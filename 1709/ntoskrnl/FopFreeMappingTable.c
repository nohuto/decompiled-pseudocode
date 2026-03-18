/*
 * XREFs of FopFreeMappingTable @ 0x1407CEA44
 * Callers:
 *     FopFreeFontData @ 0x1407CE9D0 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x14086F7E8 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
