/*
 * XREFs of NdisMapFile @ 0x1C010BA00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  void *v6; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x18u, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    *Status = -1073676259;
  }
  else
  {
    v6 = *(void **)FileHandle;
    *((_BYTE *)FileHandle + 16) = 1;
    *MappedBuffer = v6;
    *Status = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x19u, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids, *Status);
}
