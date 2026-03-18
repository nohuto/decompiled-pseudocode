/*
 * XREFs of ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0039A28
 * Callers:
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C01A8D08 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01E155C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 * Callees:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C00398DC (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 */

__int64 __fastcall GetMultiScreenDefaultShellTopology(
        enum MultiScreenDefaultShellTopology *a1,
        enum MultiScreenShellCapabilities *a2)
{
  ULONG v2; // eax
  int v4; // ebx
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = `IsWindowsTeamEdition'::`2'::s_dwProductType;
  v4 = 0;
  if ( !`IsWindowsTeamEdition'::`2'::s_dwProductType )
  {
    if ( RtlGetProductInfo(0xAu, 0, 0, 0, &`IsWindowsTeamEdition'::`2'::s_dwProductType) )
    {
      v2 = `IsWindowsTeamEdition'::`2'::s_dwProductType;
    }
    else
    {
      v2 = 0;
      `IsWindowsTeamEdition'::`2'::s_dwProductType = 0;
    }
  }
  if ( v2 == 119 )
  {
    *(_WORD *)a1 = 3;
  }
  else
  {
    *(_WORD *)a1 = 0;
    v4 = DefaultMultiScreenConfig::DetermineMultiScreenCapabilities((DefaultMultiScreenConfig *)&v6, a2);
    if ( v4 >= 0 && (v6 & 0x20000000) != 0 )
      *(_WORD *)a1 = (v6 & 0x4000000) != 0 ? 5 : 3;
  }
  return (unsigned int)v4;
}
