/*
 * XREFs of NdisUnmapFile @ 0x1C00E6380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 */

void __stdcall NdisUnmapFile(NDIS_HANDLE FileHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x1Au, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids);
  *((_BYTE *)FileHandle + 16) = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x1Bu, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids);
}
