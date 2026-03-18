/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18007ECD0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18006E380 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE@gsl@@I@Z @ 0x1801AB988 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE@gsl@@I@Z.c)
 * Callees:
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800208D0 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x18007EE78 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800928BC (--0CD3DResource@@IEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDeviceLevel1 *this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  signed int v11; // eax
  unsigned int v12; // edi
  unsigned int v14; // [rsp+20h] [rbp-50h]
  struct ID3D11Buffer *v15; // [rsp+30h] [rbp-40h] BYREF
  const void *v16; // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+44h] [rbp-2Ch]
  struct D3D11_BUFFER_DESC v19; // [rsp+48h] [rbp-28h] BYREF

  v15 = 0LL;
  v8 = (volatile signed __int32 *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0((void *)v8, 0, 0x90uLL);
    CD3DResource::CD3DResource((CD3DResource *)v9, 0);
    *((_QWORD *)v9 + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
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
    _InterlockedIncrement(v9 + 2);
    v19.MiscFlags = 0;
    v19.StructureByteStride = 0;
    v17 = 0;
    v18 = 0;
    v16 = a4;
    v19.BindFlags = 4;
    v19.ByteWidth = a2;
    v19.Usage = D3D11_USAGE_DYNAMIC;
    v19.CPUAccessFlags = 0x10000;
    v11 = CD3DDeviceLevel1::CreateBuffer(
            this,
            &v19,
            (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)&v16 & -(__int64)(a4 != 0LL)),
            &v15);
    v12 = v11;
    if ( v11 < 0 )
    {
      v14 = 50;
    }
    else
    {
      v11 = CD3DConstantBuffer::Initialize(
              (CD3DConstantBuffer *)v9,
              (struct CD3DDeviceLevel1 *)((char *)this + 896),
              a2,
              v15);
      v12 = v11;
      if ( v11 >= 0 )
      {
        *a5 = (struct CD3DConstantBuffer *)v9;
        v9 = 0LL;
        goto LABEL_7;
      }
      v14 = 52;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v14);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x20u);
  }
LABEL_7:
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v15->lpVtbl->Release)(v15);
  if ( v9 )
    CMILPoolResource::Release((CMILPoolResource *)v9);
  return v12;
}
