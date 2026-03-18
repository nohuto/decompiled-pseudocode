/*
 * XREFs of ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800C4B9C
 * Callers:
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180043B88 (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800C4C9C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800C4FBC (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        bool a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        bool a6,
        unsigned int a7,
        _QWORD *a8)
{
  int v9; // eax
  CMILPoolResource *v10; // rsi
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  CMILPoolResource *v15; // [rsp+40h] [rbp-88h] BYREF
  int v16; // [rsp+48h] [rbp-80h]
  int v17; // [rsp+4Ch] [rbp-7Ch]
  struct D3D11_TEXTURE2D_DESC v18; // [rsp+50h] [rbp-78h] BYREF

  v15 = 0LL;
  *a8 = 0LL;
  v9 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v18, a2, a1, a5, a6, a7, &v15);
  v10 = v15;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x230u);
  }
  else
  {
    v12 = *((_DWORD *)v15 + 34);
    v15 = 0LL;
    v16 = v12;
    v17 = v12;
    v13 = CHwDeviceBitmapColorSource::CreateFromExistingTexture(a1, (__int64)&v15, (__int64)v10, (__int64)a8);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x245u);
  }
  if ( v10 )
    CMILPoolResource::Release(v10);
  return v11;
}
