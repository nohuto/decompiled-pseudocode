/*
 * XREFs of ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18004D014
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x1800168CC (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18004955C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18019BD0C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseRenderTarget::Init(CBaseRenderTarget *this)
{
  int v1; // eax
  int v3; // eax
  int v5; // eax

  v1 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = v1;
  *((_DWORD *)this + 24) = *((_DWORD *)this + 3);
  v3 = (*(__int64 (__fastcall **)(CBaseRenderTarget *))(*(_QWORD *)this + 40LL))(this);
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( !v5 || v5 == 11 )
      *((_DWORD *)this + 30) = 0x800000;
  }
  else
  {
    *((_DWORD *)this + 30) = 958157110;
  }
  return 0LL;
}
