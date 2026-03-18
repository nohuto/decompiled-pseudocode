/*
 * XREFs of ?D2DExtendModeFromD3DAddressMode@@YA?AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z @ 0x1800864D0
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800862E0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DExtendModeFromD3DAddressMode(enum D3D11_TEXTURE_ADDRESS_MODE a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      return 2;
  }
  else
  {
    return 1;
  }
  return v1;
}
