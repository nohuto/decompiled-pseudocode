/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x180197264
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?RegisterSource@CHolographicViewerContent@@UEAAJPEAX@Z @ 0x1801A57E0 (-RegisterSource@CHolographicViewerContent@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF

  v6 = a6;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *a6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v22);
  v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 600))(
          *(_QWORD *)(a1 + 600),
          &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
          &v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x729u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 48LL))(
            v22,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v20);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x72Bu);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL))(
              v20,
              &GUID_b14887d9_f537_4af5_b379_7d33031be773,
              &v21);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x72Cu);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v21 + 32LL))(
                v21,
                v22,
                a2,
                0LL,
                a4,
                a5,
                v6);
        v11 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x734u);
      }
    }
  }
  v15 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v11, 0);
  v16 = v21;
  v17 = v15;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v22);
  return v17;
}
