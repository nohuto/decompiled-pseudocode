/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18008A688
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800C65E0 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x180216250 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800782E0 (-AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008A0FC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x1800C0600 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(
        CRenderTargetBitmap *this,
        __int64 (__fastcall ***a2)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **))
{
  __int64 (__fastcall **v2)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **); // rax
  int v5; // eax
  int v6; // ebx
  struct IDeviceResourceNotify *v7; // rdx
  __int64 (__fastcall *v8)(CHwTextureRenderTarget *, struct IDeviceResourceNotify *); // rax
  int v9; // eax
  int v11; // eax
  struct IRenderTargetBitmap *v12; // [rsp+58h] [rbp+28h] BYREF
  CHwTextureRenderTarget *v13; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a2;
  v13 = 0LL;
  v5 = (*v2)((struct IRenderTargetBitmap *)a2, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x35u);
  }
  else
  {
    v7 = (struct IDeviceResourceNotify *)(((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v8 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *, struct IDeviceResourceNotify *))(*(_QWORD *)v13 + 24LL);
    if ( v8 == CHwTextureRenderTarget::AddResourceNotifier )
      v9 = CHwTextureRenderTarget::AddResourceNotifier(v13, v7);
    else
      v9 = v8(v13, v7);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x36u);
    }
    else
    {
      v12 = (struct IRenderTargetBitmap *)a2;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v12);
      v12 = (struct IRenderTargetBitmap *)*((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = a2;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((char *)this + 160, a2);
      if ( !*((_BYTE *)this + 176) )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
        v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetBitmap **))this + 20))(
                *((_QWORD *)this + 20),
                &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                &v12);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3Fu);
        else
          (*(void (__fastcall **)(char *, struct IRenderTargetBitmap *))(*((_QWORD *)this + 2) + 24LL))(
            (char *)this + 16,
            v12);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
      }
    }
  }
  if ( v6 < 0 )
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v13);
  return (unsigned int)v6;
}
