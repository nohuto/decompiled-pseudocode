/*
 * XREFs of ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000A310
 * Callers:
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C001DA28 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D4AB4 (BmlGetNextBestSourceMode.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00DA308 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C00E5470 (DxgkConvertDisplayConfigToDevMode.c)
 *     DxgkCddVerifyCddDevMode @ 0x1C00F98C0 (DxgkCddVerifyCddDevMode.c)
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
