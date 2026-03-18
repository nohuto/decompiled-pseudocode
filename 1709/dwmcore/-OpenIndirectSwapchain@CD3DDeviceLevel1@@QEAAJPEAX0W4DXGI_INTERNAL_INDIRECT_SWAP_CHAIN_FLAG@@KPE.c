/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1801A8104
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180137474 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  signed int v9; // eax
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x6E4u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL))(
            v20,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            v18);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x6E6u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18[0] + 48LL))(
              v18[0],
              &GUID_b14887d9_f537_4af5_b379_7d33031be773,
              &v19);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x6E7u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v19 + 32LL))(
                v19,
                v20,
                a2,
                0LL,
                5,
                0x10000000,
                v6);
        v10 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x6EFu);
      }
    }
  }
  v14 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v10, 0);
  v15 = v19;
  v16 = v14;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v16;
}
