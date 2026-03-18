/*
 * XREFs of ?D3dPixelFormatToDisplayConfigPixelFormat@@YA?AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z @ 0x1C00F8730
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D3dPixelFormatToDisplayConfigPixelFormat(int a1)
{
  if ( a1 == 20 )
    return 3LL;
  if ( a1 <= 20 )
    return 5LL;
  if ( a1 <= 22 )
    return 4LL;
  if ( a1 != 23 )
  {
    if ( a1 == 41 )
      return 1LL;
    return 5LL;
  }
  return 2LL;
}
