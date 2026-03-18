/*
 * XREFs of ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE@gsl@@@Z @ 0x18008BADC
 * Callers:
 *     ?Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V?$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4D2D1_EXTEND_MODE@@2@Z @ 0x180071CD8 (-Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V-$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18008B9CC (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x18001FECC (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x18008B9A8 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180126AC8 (McTemplateU0qqqq.c)
 */

unsigned int __fastcall CAtlasTexture::UpdateGradientStrip(CAtlasTexture *a1, __int64 a2, __int64 a3)
{
  CD3DDeviceLevel1 *Device; // rbp
  unsigned int v7; // ecx
  CD3DLockableTexture *v8; // r10
  char v9; // r11
  unsigned int v10; // ebx
  bool v12; // [rsp+28h] [rbp-30h]
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  CD3DLockableTexture *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  Device = CAtlasTexture::GetDevice(a1);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v14);
  (*(void (__fastcall **)(_QWORD *, CD3DLockableTexture **))(**((_QWORD **)a1 + 1) + 200LL))(*((_QWORD **)a1 + 1), &v14);
  v7 = GetPixelFormatSize(*((_DWORD *)v14 + 36)) >> 3;
  v10 = v7 * *((_DWORD *)v8 + 32);
  v13.top = *(_DWORD *)(a2 + 16);
  v13.bottom = v13.top + 1;
  if ( *(_DWORD *)(a3 + 8) < v10 )
    v10 = *(_DWORD *)(a3 + 8);
  v13.left = 0;
  v13.right = v10 / v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq(v7, (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT, v10 / v7, 1, v9, v7);
    v8 = v14;
  }
  CD3DDeviceLevel1::UpdateSubresource(
    Device,
    *((struct ID3D11Resource **)v8 + 15),
    &v13,
    *(const void **)a3,
    v10,
    v12,
    1);
  return Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v14);
}
