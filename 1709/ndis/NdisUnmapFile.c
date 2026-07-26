/*
 * XREFs of NdisUnmapFile @ 0x1C00E4B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 */

void __stdcall NdisUnmapFile(NDIS_HANDLE FileHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x1Au, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
  *((_BYTE *)FileHandle + 16) = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x1Bu, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
}
