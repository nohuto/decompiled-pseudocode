/*
 * XREFs of ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180090440
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008B4E0 (-GetPixelFormatInfo@CRenderTargetBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetImageSource::IsOpaque(CRenderTargetImageSource *this)
{
  char *v1; // rcx
  _DWORD *(__fastcall *v2)(__int64, _DWORD *); // rax
  _DWORD *PixelFormatInfo; // rax
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 152;
  v2 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v1 + 24LL);
  if ( v2 == CRenderTargetBitmap::GetPixelFormatInfo )
    PixelFormatInfo = CRenderTargetBitmap::GetPixelFormatInfo((__int64)v1, v5);
  else
    PixelFormatInfo = v2((__int64)v1, v5);
  return PixelFormatInfo[1] == 3;
}
