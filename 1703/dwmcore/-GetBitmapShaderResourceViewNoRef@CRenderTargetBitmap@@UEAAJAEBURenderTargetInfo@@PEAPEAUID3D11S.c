/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180016590
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180015208 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18001650C (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x1800168A0 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800169E4 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180079928 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmapShaderResourceViewNoRef(
        CRenderTargetBitmap *this,
        struct _LUID *a2,
        struct ID3D11ShaderResourceView **a3)
{
  int BitmapInternalNoRef; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  CHwTextureRenderTarget *v9; // rbx
  __int64 (__fastcall *v10)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **); // rax
  int BitmapTexture; // eax
  int ShaderResourceViewNoRef; // eax
  int v14; // r9d
  struct _LUID v15; // rdx
  struct ID3D11ShaderResourceView **v16; // rsi
  _QWORD *v17; // rbx
  struct ID3D11ShaderResourceView *v18; // rcx
  struct ID3D11Resource *v19; // rdi
  unsigned int v20; // [rsp+20h] [rbp-10h]
  struct CD3DTexture *v21; // [rsp+50h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 2) )
  {
    v7 = -2003292404;
    v20 = 225;
    goto LABEL_15;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v15 = *a2;
    v21 = 0LL;
    BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(
                            (CRenderTargetBitmap *)((char *)this - 104),
                            v15,
                            0LL,
                            (__int64)&v21);
    v7 = BitmapInternalNoRef;
    if ( BitmapInternalNoRef < 0 )
    {
      v20 = 236;
    }
    else
    {
      BitmapInternalNoRef = (*(__int64 (__fastcall **)(struct CD3DTexture *, struct ID3D11ShaderResourceView **))(*(_QWORD *)v21 + 80LL))(
                              v21,
                              a3);
      v7 = BitmapInternalNoRef;
      if ( BitmapInternalNoRef >= 0 )
        return v7;
      v20 = 238;
    }
    goto LABEL_36;
  }
  BitmapInternalNoRef = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
                          (__int64)this - 104,
                          (__int64)*a2,
                          a2[1].LowPart);
  v7 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    v20 = 243;
    goto LABEL_36;
  }
  if ( !*((_QWORD *)this + 3) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 168LL))(*((_QWORD *)this + 4))
      && !LOBYTE(a2[2].LowPart) )
    {
      v7 = -2147024891;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x10Fu);
      return v7;
    }
    v16 = (struct ID3D11ShaderResourceView **)((char *)this + 40);
    if ( *((_QWORD *)this + 5) )
      goto LABEL_34;
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17) )
    {
      v18 = *v16;
      v19 = (struct ID3D11Resource *)v17[17];
      if ( *v16 )
      {
        *v16 = 0LL;
        ((void (__fastcall *)(struct ID3D11ShaderResourceView *))v18->lpVtbl->Release)(v18);
      }
      BitmapInternalNoRef = CD3DDeviceLevel1::CreateShaderResourceView(
                              *(CD3DDeviceLevel1 **)(v17[2] + 128LL),
                              v19,
                              0LL,
                              v16);
      v7 = BitmapInternalNoRef;
      if ( BitmapInternalNoRef < 0 )
      {
        v20 = 287;
LABEL_36:
        v14 = BitmapInternalNoRef;
        goto LABEL_37;
      }
LABEL_34:
      *a3 = *v16;
      return v7;
    }
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 104));
    v7 = -2003304307;
    v20 = 281;
LABEL_15:
    v14 = v7;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v20);
    return v7;
  }
  v8 = *((_QWORD *)this + 2);
  v21 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8) || LOBYTE(a2[2].LowPart) )
  {
    v9 = (CHwTextureRenderTarget *)*((_QWORD *)this + 3);
    Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v21);
    v10 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v9 + 192LL);
    if ( v10 == CHwTextureRenderTarget::GetBitmapTexture )
      BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v9, &v21);
    else
      BitmapTexture = v10(v9, &v21);
    v7 = BitmapTexture;
    if ( BitmapTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapTexture, 0xFFu);
    }
    else
    {
      ShaderResourceViewNoRef = CD3DTexture::GetShaderResourceViewNoRef(v21, a3);
      v7 = ShaderResourceViewNoRef;
      if ( ShaderResourceViewNoRef < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x101u);
    }
  }
  else
  {
    v7 = -2147024891;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0xFCu);
  }
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v21);
  return v7;
}
