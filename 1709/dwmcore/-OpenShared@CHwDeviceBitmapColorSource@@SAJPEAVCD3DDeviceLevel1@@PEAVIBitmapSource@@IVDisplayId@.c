/*
 * XREFs of ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1801B70CC
 * Callers:
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801AF30C (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18008573C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801B7AA0 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        bool a6,
        unsigned int a7,
        CHwDeviceBitmapColorSource **a8)
{
  signed int v12; // eax
  CMILPoolResource *v13; // rsi
  unsigned int v14; // edi
  int v15; // eax
  signed int v16; // eax
  CMILPoolResource *v18; // [rsp+40h] [rbp-88h] BYREF
  int v19; // [rsp+48h] [rbp-80h]
  int v20; // [rsp+4Ch] [rbp-7Ch]
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+50h] [rbp-78h] BYREF

  v18 = 0LL;
  *a8 = 0LL;
  v12 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v21, a1, a5, a6, a7, &v18);
  v13 = v18;
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x22Eu);
  }
  else
  {
    v15 = *((_DWORD *)v18 + 32);
    v18 = 0LL;
    v19 = v15;
    v20 = v15;
    v16 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(a1, a2, a3, a4, (__int64)&v18, (__int64)v13, a8);
    v14 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x243u);
  }
  if ( v13 )
    CMILPoolResource::Release(v13);
  return v14;
}
