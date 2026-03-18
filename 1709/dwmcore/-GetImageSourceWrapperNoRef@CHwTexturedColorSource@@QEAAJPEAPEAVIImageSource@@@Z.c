/*
 * XREFs of ?GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801AD7C0
 * Callers:
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x180190FC8 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z @ 0x1801D4690 (-Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwTexturedColorSource::GetImageSourceWrapperNoRef(
        CHwTexturedColorSource *this,
        struct IImageSource **a2)
{
  int v2; // ebx
  _QWORD *v3; // rdi
  unsigned int *v6; // rbx
  __int64 v7; // rax
  signed int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (_QWORD *)((char *)this + 104);
  v10 = 0;
  if ( *((_QWORD *)this + 13)
    || (v6 = (unsigned int *)(*(__int64 (__fastcall **)(CHwTexturedColorSource *, unsigned int *))(*(_QWORD *)this + 64LL))(
                               this,
                               &v10),
        v7 = (*(__int64 (__fastcall **)(CHwTexturedColorSource *))(*(_QWORD *)this + 56LL))(this),
        v8 = CDeviceTextureImageSource::Create(v7, *v6, v3),
        v10 = v8,
        v2 = v8,
        v8 >= 0) )
  {
    *a2 = (struct IImageSource *)((*v3 + 16LL) & -(__int64)(*v3 != 0LL));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x94u);
  }
  TranslateDXGIorD3DErrorInContext(v2, 13, &v10);
  return v10;
}
