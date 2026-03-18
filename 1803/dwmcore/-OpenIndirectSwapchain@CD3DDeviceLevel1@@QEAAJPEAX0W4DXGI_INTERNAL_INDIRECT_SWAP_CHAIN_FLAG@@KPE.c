/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1801E0B64
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v6 = a6;
  v20 = 0LL;
  v18[0] = 0LL;
  v19 = 0LL;
  *a6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 608))(
         *(_QWORD *)(a1 + 608),
         &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
         &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x72Bu);
  }
  else
  {
    v11 = v20;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
    v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            v18);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x72Du);
    }
    else
    {
      v13 = v18[0];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 48LL))(
              v13,
              &GUID_b14887d9_f537_4af5_b379_7d33031be773,
              &v19);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x72Eu);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v19 + 32LL))(
                v19,
                v20,
                a2,
                0LL,
                5,
                0x10000000,
                v6);
        v10 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x736u);
      }
    }
  }
  v16 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v10, 0);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v16;
}
