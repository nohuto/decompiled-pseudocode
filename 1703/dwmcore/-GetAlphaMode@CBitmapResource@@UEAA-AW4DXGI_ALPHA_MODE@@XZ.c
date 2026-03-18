/*
 * XREFs of ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18007CDD0
 * Callers:
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x180056DC0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007B8E0 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180056490 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

__int64 __fastcall CBitmapResource::GetAlphaMode(CBitmapResource *this)
{
  CBitmap *v1; // rcx
  __int64 result; // rax
  __int64 (*v3)(void); // rax

  v1 = (CBitmap *)*((_QWORD *)this + 10);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
    if ( (char *)v3 == (char *)CBitmap::GetAlphaMode )
      return CBitmap::GetAlphaMode(v1);
    else
      return v3();
  }
  return result;
}
