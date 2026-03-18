/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A1B0
 * Callers:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B4370 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800780D4 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Validate@CRenderTargetBitmap@@IEAAJXZ @ 0x18008A884 (-Validate@CRenderTargetBitmap@@IEAAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18008A8BC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rbp
  int DeviceTextureInternal; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  struct IDeviceTexture *v10; // rdi
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct IDeviceTexture *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = (CRenderTargetBitmap *)((char *)this - 144);
  DeviceTextureInternal = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)((char *)this - 144));
  v8 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
  {
    v13 = 217;
    goto LABEL_18;
  }
  if ( !*((_BYTE *)this + 32) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, &v14);
    v8 = DeviceTextureInternal;
    if ( DeviceTextureInternal >= 0 )
    {
      v10 = v14;
      goto LABEL_7;
    }
    v13 = 222;
LABEL_18:
    v12 = DeviceTextureInternal;
    goto LABEL_19;
  }
  DeviceTextureInternal = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
                            v3,
                            *(_QWORD *)a2,
                            *((unsigned int *)a2 + 2));
  v8 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
  {
    v13 = 227;
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 160LL))(*((_QWORD *)this + 1))
    && !*((_BYTE *)a2 + 16) )
  {
    v8 = -2147024891;
    v13 = 232;
LABEL_15:
    v12 = v8;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) )
  {
    v8 = -2003304307;
    v13 = 238;
    goto LABEL_15;
  }
  v10 = (struct IDeviceTexture *)(v9 + 120);
  v14 = v10;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v14);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
LABEL_7:
  v14 = 0LL;
  *a3 = v10;
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
  return v8;
}
