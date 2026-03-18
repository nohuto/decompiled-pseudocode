/*
 * XREFs of ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDeviceLevel1@@@Z @ 0x180075100
 * Callers:
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180074CC4 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::CSurfaceShaderComposer(
        CSurfaceShaderComposer *this,
        struct ID3D11VertexShader *a2,
        struct ID3D11InputLayout *a3,
        struct ID3D11Buffer *a4,
        struct ID3DDeviceContextState *a5,
        struct CD3DDeviceLevel1 *a6)
{
  `vector constructor iterator'(
    this,
    8LL,
    3LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D11VertexShader *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D11InputLayout *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 5) = a4;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 40);
  *((_QWORD *)this + 6) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct ID3DDeviceContextState *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = a6;
  return this;
}
