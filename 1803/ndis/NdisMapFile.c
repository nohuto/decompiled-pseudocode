/*
 * XREFs of NdisMapFile @ 0x1C010D980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  int v6; // r8d
  void *v7; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x18u, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids);
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    v6 = -1073676259;
  }
  else
  {
    v7 = *(void **)FileHandle;
    v6 = 0;
    *((_BYTE *)FileHandle + 16) = 1;
    *MappedBuffer = v7;
  }
  *Status = v6;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x19u, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids, v6);
}
