/*
 * XREFs of ?GetColorSpace@CBitmapResource@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007CE10
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007B8E0 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800563D0 (-GetColorSpace@CBitmap@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 */

__int64 __fastcall CBitmapResource::GetColorSpace(CBitmapResource *this)
{
  CBitmap *v1; // rcx
  __int64 result; // rax
  __int64 (*v3)(void); // rax

  v1 = (CBitmap *)*((_QWORD *)this + 10);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 40LL);
    if ( (char *)v3 == (char *)CBitmap::GetColorSpace )
      return CBitmap::GetColorSpace(v1);
    else
      return v3();
  }
  return result;
}
