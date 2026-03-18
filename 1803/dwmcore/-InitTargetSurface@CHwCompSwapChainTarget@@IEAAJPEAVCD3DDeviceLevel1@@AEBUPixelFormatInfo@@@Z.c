/*
 * XREFs of ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x1801E48BC
 * Callers:
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z @ 0x1801E47A8 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800218B0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCD3DVidMemOnlyTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E49BC (-InternalRelease@-$ComPtr@VCD3DVidMemOnlyTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::InitTargetSurface(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2,
        const struct PixelFormatInfo *a3)
{
  __int64 v3; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int D3DSurfaceLevel; // eax
  struct CD3DVidMemOnlyTexture *v13; // [rsp+50h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 28);
  v14 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v3 + 72LL))(
         v3,
         0LL,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x64u);
  }
  else
  {
    Microsoft::WRL::ComPtr<CD3DVidMemOnlyTexture>::InternalRelease(&v13);
    v9 = CD3DVidMemOnlyTexture::CreateFromTexture(v14, 0, 1, a2, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x6Bu);
    }
    else
    {
      D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v13, v10, (struct CD3DSurface **)this + 25);
      v8 = D3DSurfaceLevel;
      if ( D3DSurfaceLevel < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSurfaceLevel, 0x6Eu);
      else
        (*(void (__fastcall **)(CHwCompSwapChainTarget *, const struct PixelFormatInfo *))(*(_QWORD *)this + 248LL))(
          this,
          a3);
    }
  }
  Microsoft::WRL::ComPtr<CD3DVidMemOnlyTexture>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
  return v8;
}
