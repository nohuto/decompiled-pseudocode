/*
 * XREFs of ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x1801A0D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x1800151D4 (--$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z.c)
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800169E4 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18003F7F8 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::HDRConvertFromIntermediateTargetBitmap(
        CHwFullScreenRenderTarget *this,
        struct tagRECT *a2)
{
  __int64 v3; // rcx
  CMILPoolResource *v5; // rbp
  int v6; // eax
  unsigned int v7; // ebx
  int ShaderResourceViewNoRef; // eax
  __int64 v9; // rdx
  int BackBuffer; // eax
  struct ID3D11RenderTargetView *v11; // rsi
  char v12; // bl
  enum DXGI_ALPHA_MODE v13; // eax
  int v14; // eax
  enum DXGI_COLOR_SPACE_TYPE v16; // [rsp+28h] [rbp-50h]
  enum DXGI_COLOR_SPACE_TYPE v17; // [rsp+40h] [rbp-38h]
  CMILPoolResource *v18; // [rsp+80h] [rbp+8h] BYREF
  CD3DTexture *v19; // [rsp+90h] [rbp+18h] BYREF
  struct ID3D11ShaderResourceView *v20; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  v3 = *((_QWORD *)this + 21);
  v5 = 0LL;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, CD3DTexture **))(*(_QWORD *)v3 + 192LL))(v3, &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x360u);
  }
  else
  {
    ShaderResourceViewNoRef = CD3DTexture::GetShaderResourceViewNoRef(v19, &v20);
    v7 = ShaderResourceViewNoRef;
    if ( ShaderResourceViewNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x362u);
      goto LABEL_11;
    }
    BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)this + 5), v9, &v18);
    v7 = BackBuffer;
    if ( BackBuffer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x364u);
      v5 = v18;
    }
    else
    {
      v5 = v18;
      v11 = (struct ID3D11RenderTargetView *)*((_QWORD *)v18 + 25);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 168LL))(*((_QWORD *)this + 21));
      v13 = (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 22) + 32LL))((char *)this - 176);
      v14 = CD3DDeviceLevel1::HDRConvert(
              *((CD3DDeviceLevel1 **)this + 1),
              v20,
              *((_DWORD *)this + 12),
              *((_DWORD *)this + 13),
              v13,
              v16,
              v12,
              v11,
              v17,
              a2);
      v7 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x36Eu);
    }
  }
  if ( v5 )
    CMILPoolResource::Release(v5);
LABEL_11:
  ReleaseInterfaceNoNULL<CD3DTexture>(v19);
  return v7;
}
