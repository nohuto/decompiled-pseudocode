/*
 * XREFs of ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x1801E4308
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E3FB4 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x1801E428C (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 */

bool __fastcall CD3DTexture::IsRenderTarget(CD3DTexture *this)
{
  bool v1; // bl
  bool v2; // zf
  int DXGIResource; // eax
  int v4; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIResource *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (*((_BYTE *)this + 160) & 0x20) == 0;
  v7 = 0LL;
  if ( !v2 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(this, &v7);
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DXGIResource, 0x25Fu);
    }
    else
    {
      v4 = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v7->lpVtbl->GetUsage)(v7, &v6);
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x261u);
      else
        v1 = (v6 & 0x100) == 0;
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v7);
  return v1;
}
