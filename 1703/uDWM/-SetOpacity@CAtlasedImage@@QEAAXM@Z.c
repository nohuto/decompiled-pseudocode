/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18000EB7C
 * Callers:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18000EA08 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001FC44 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180024D58 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 * Callees:
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // edx
  unsigned __int8 v4; // al

  v3 = (int)floor_0((float)(a2 * 255.0) + 0.5);
  v4 = -1;
  if ( v3 <= 255 )
  {
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v3;
  }
  CAtlasedImage::InternalSetOpacity(this, 16843009 * v4);
}
