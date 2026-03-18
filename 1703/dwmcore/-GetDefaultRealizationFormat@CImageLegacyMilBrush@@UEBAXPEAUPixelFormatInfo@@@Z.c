/*
 * XREFs of ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007B8E0
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18004AE10 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18004AF90 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18007CD80 (-GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18007CDD0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapResource@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007CE10 (-GetColorSpace@CBitmapResource@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImageLegacyMilBrush::GetDefaultRealizationFormat(CImageLegacyMilBrush *this, enum DXGI_FORMAT *a2)
{
  CBitmapResource *v4; // rcx
  __int64 (__fastcall *v5)(CBitmapResource *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  CBitmapResource *v7; // rcx
  __int64 (*v8)(void); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  CBitmapResource *v10; // rcx
  __int64 (*v11)(void); // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax

  v4 = (CBitmapResource *)*((_QWORD *)this + 66);
  if ( v4
    && ((v5 = *(__int64 (__fastcall **)(CBitmapResource *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v4 + 24LL),
         v5 != CBitmapResource::GetPixelFormat)
      ? (PixelFormat = ((__int64 (*)(void))v5)())
      : (PixelFormat = CBitmapResource::GetPixelFormat(v4, a2)),
        PixelFormat >= 0) )
  {
    v7 = (CBitmapResource *)*((_QWORD *)this + 66);
    v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 32LL);
    if ( (char *)v8 == (char *)CBitmapResource::GetAlphaMode )
      AlphaMode = CBitmapResource::GetAlphaMode(v7);
    else
      AlphaMode = (unsigned int)v8();
    *((_DWORD *)a2 + 1) = AlphaMode;
    v10 = (CBitmapResource *)*((_QWORD *)this + 66);
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 40LL);
    if ( (char *)v11 == (char *)CBitmapResource::GetColorSpace )
      ColorSpace = CBitmapResource::GetColorSpace(v10);
    else
      ColorSpace = (unsigned int)v11();
    *((_DWORD *)a2 + 2) = ColorSpace;
  }
  else
  {
    CLegacyMilBrush::GetDefaultRealizationFormat(this, (struct PixelFormatInfo *)a2);
  }
}
