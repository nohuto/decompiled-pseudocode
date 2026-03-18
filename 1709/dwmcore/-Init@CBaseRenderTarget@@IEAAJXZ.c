/*
 * XREFs of ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18008CDD4
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18008FD08 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18008FE30 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x1801AD268 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801AE3F8 (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseRenderTarget::Init(CBaseRenderTarget *this)
{
  int v1; // eax
  int v3; // edx
  int v5; // edx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = v1;
  *((_DWORD *)this + 24) = *((_DWORD *)this + 3);
  v3 = *(_DWORD *)((*(__int64 (__fastcall **)(CBaseRenderTarget *, _BYTE *))(*(_QWORD *)this + 24LL))(this, v6) + 8);
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( !v5 || v5 == 11 )
      *((_DWORD *)this + 34) = 0x800000;
  }
  else
  {
    *((_DWORD *)this + 34) = 958157110;
  }
  return 0LL;
}
