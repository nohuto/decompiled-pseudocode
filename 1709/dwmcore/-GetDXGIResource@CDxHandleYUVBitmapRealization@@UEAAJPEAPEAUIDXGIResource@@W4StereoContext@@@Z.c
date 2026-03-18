/*
 * XREFs of ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801D3940
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180081D04 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D3678 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(CD3DTexture **a1, struct IDXGIResource **a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int DXGIResource; // eax
  int v7; // ebx
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x17Fu);
  }
  else
  {
    DXGIResource = CD3DTexture::GetDXGIResource(a1[50], a2);
    v9 = DXGIResource;
    v7 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DXGIResource, 0x181u);
    TranslateDXGIorD3DErrorInContext(v7, 14, &v9);
    return v9;
  }
  return v5;
}
