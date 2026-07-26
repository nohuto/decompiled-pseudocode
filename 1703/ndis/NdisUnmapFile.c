/*
 * XREFs of NdisUnmapFile @ 0x1C00DAB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 */

void __stdcall NdisUnmapFile(NDIS_HANDLE FileHandle)
{
  unsigned __int8 v2; // al

  v2 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_(0x1Au, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
    v2 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  *((_BYTE *)FileHandle + 16) = 0;
  if ( v2 >= 4u )
    WPP_SF_(0x1Bu, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
}
