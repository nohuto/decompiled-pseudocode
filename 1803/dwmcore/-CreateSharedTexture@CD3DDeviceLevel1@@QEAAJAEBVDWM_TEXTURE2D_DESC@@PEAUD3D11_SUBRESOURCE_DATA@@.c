/*
 * XREFs of ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x1801DF81C
 * Callers:
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x1801EDDB0 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800767F0 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void **a4,
        struct ID3D11Texture2D **a5)
{
  struct ID3D11Texture2D **v6; // rsi
  int Texture; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v6 = a5;
  v13 = 0LL;
  Texture = CD3DDeviceLevel1::CreateTexture(this, a2, 0LL, a5);
  v9 = Texture;
  if ( Texture < 0 )
  {
    v12 = 1921;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  Texture = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))(*v6)->lpVtbl->QueryInterface)(
              *v6,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v13);
  v9 = Texture;
  if ( Texture < 0 )
  {
    v12 = 1923;
    goto LABEL_9;
  }
  Texture = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 64LL))(v13, a4);
  v9 = Texture;
  if ( Texture < 0 )
  {
    v12 = 1925;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Texture, v12);
    goto LABEL_10;
  }
  if ( !*a4 )
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x78Eu);
  }
LABEL_10:
  v10 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v10;
}
