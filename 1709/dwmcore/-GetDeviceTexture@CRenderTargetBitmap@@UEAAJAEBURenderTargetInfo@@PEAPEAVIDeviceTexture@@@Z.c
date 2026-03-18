/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008B210
 * Callers:
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008DE60 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A660 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Validate@CRenderTargetBitmap@@IEAAJXZ @ 0x18008B010 (-Validate@CRenderTargetBitmap@@IEAAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18008B048 (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rbp
  int DeviceTextureInternal; // eax
  unsigned int v8; // ebx
  struct IDeviceTexture *v9; // rdi
  __int64 v11; // rdi
  DWORD v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct IDeviceTexture *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = (CRenderTargetBitmap *)((char *)this - 144);
  DeviceTextureInternal = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)((char *)this - 144));
  v8 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
  {
    v13 = 212;
    goto LABEL_18;
  }
  if ( *((_BYTE *)this + 32) )
  {
    DeviceTextureInternal = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
                              (__int64)v3,
                              *(_QWORD *)a2,
                              *((_DWORD *)a2 + 2));
    v8 = DeviceTextureInternal;
    if ( DeviceTextureInternal >= 0 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 152LL))(*((_QWORD *)this + 1))
        || *((_BYTE *)a2 + 16) )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11) )
        {
          v9 = (struct IDeviceTexture *)(v11 + 120);
          v14 = v9;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v14);
          v14 = 0LL;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
          goto LABEL_5;
        }
        v8 = -2003304307;
        v13 = 233;
      }
      else
      {
        v8 = -2147024891;
        v13 = 227;
      }
      v12 = v8;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v13);
      goto LABEL_6;
    }
    v13 = 222;
LABEL_18:
    v12 = DeviceTextureInternal;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
  DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, &v14);
  v8 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
  {
    v13 = 217;
    goto LABEL_18;
  }
  v9 = v14;
LABEL_5:
  v14 = 0LL;
  *a3 = v9;
LABEL_6:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
  return v8;
}
