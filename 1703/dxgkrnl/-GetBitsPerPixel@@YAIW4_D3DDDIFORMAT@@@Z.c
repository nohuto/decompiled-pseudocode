/*
 * XREFs of ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003A18
 * Callers:
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C0007434 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     DxgkCddVerifyCddDevMode @ 0x1C00A8160 (DxgkCddVerifyCddDevMode.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C00A8210 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitsPerPixel(int a1)
{
  __int64 result; // rax

  if ( a1 == 20 )
    return 24LL;
  if ( a1 <= 20 )
    return 0LL;
  result = 32LL;
  if ( a1 > 22 )
  {
    if ( a1 == 23 )
      return 16LL;
    if ( a1 != 32 )
    {
      if ( a1 == 41 )
        return 8LL;
      return 0LL;
    }
  }
  return result;
}
