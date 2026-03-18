/*
 * XREFs of ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x18008A030
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008A440 (-GetPixelFormatInfo@CRenderTargetBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetImageSource::IsOpaque(CRenderTargetImageSource *this)
{
  char *v1; // rcx
  __int64 (__fastcall *v2)(char *, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 152;
  v2 = *(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v1 + 24LL);
  if ( (char *)v2 == (char *)CRenderTargetBitmap::GetPixelFormatInfo )
    PixelFormatInfo = CRenderTargetBitmap::GetPixelFormatInfo(v1, v5);
  else
    PixelFormatInfo = v2(v1, v5);
  return *(_DWORD *)(PixelFormatInfo + 4) == 3;
}
