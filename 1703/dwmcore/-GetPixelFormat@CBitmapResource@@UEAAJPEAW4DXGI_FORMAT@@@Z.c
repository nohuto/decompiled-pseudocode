/*
 * XREFs of ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18007CD80
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007B8E0 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180056420 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetPixelFormat(CBitmapResource *this, enum DXGI_FORMAT *a2)
{
  CBitmap *v2; // rcx
  __int64 (__fastcall *v3)(CBitmap *, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  unsigned int v5; // ebx

  v2 = (CBitmap *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)v2 + 24LL);
    if ( v3 == CBitmap::GetPixelFormat )
      PixelFormat = CBitmap::GetPixelFormat(v2, a2);
    else
      PixelFormat = v3(v2, a2);
    v5 = PixelFormat;
    if ( PixelFormat < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x3Fu);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x43u);
  }
  return v5;
}
