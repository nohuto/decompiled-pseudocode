/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002123C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180070ADC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180021A80 (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x180021AD4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800757D4 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDeviceLevel1 *this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  void *v8; // rax
  void *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  struct ID3D11Buffer *v13; // rdi
  struct ID3D11Buffer *v15; // [rsp+30h] [rbp-40h] BYREF
  struct ID3D11Buffer *v16; // [rsp+38h] [rbp-38h] BYREF
  const void *v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  D3D11_BUFFER_DESC v20; // [rsp+50h] [rbp-20h] BYREF

  v16 = 0LL;
  v8 = HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x90uLL);
    CD3DResource::CD3DResource((CD3DResource *)v9, 0);
    *((_QWORD *)v9 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD3DConstantBuffer::`vftable'{for `CMILPoolResource'};
    *((_QWORD *)v9 + 15) &= v10;
    *((_DWORD *)v9 + 32) &= v10;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v20.MiscFlags = 0;
    v20.StructureByteStride = 0;
    v18 = 0;
    v19 = 0;
    v17 = a4;
    v20.BindFlags = 4;
    v20.ByteWidth = a2;
    v20.Usage = D3D11_USAGE_DYNAMIC;
    v20.CPUAccessFlags = 0x10000;
    v11 = CD3DDeviceLevel1::CreateBuffer(
            this,
            &v20,
            (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)&v17 & -(__int64)(a4 != 0LL)),
            &v16);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x32u);
    }
    else
    {
      v13 = v16;
      CD3DResource::Init((CD3DResource *)v9, (struct CD3DDeviceLevel1 *)((char *)this + 896), a2);
      if ( *((struct ID3D11Buffer **)v9 + 15) != v13 )
      {
        v15 = v13;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v15);
        v15 = (struct ID3D11Buffer *)*((_QWORD *)v9 + 15);
        *((_QWORD *)v9 + 15) = v13;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v15);
      }
      *((_DWORD *)v9 + 32) = a2;
      v12 = 0;
      *a5 = (struct CD3DConstantBuffer *)v9;
      v9 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x20u);
  }
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v16->lpVtbl->Release)(v16);
  if ( v9 )
    CMILPoolResource::Release((CMILPoolResource *)v9);
  return v12;
}
