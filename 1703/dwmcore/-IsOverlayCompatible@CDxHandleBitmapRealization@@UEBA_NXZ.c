/*
 * XREFs of ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000B440
 * Callers:
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000AC20 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsOverlayCompatible(CDxHandleBitmapRealization *this)
{
  bool result; // al

  result = (*((_DWORD *)this + 33) & 0x40) != 0;
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
    return 1;
  return result;
}
