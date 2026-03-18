/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002150C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180017FC4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@2@Z @ 0x180199AAC (-CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConst.c)
 *     ?CreateEmptyConstantBuffer@CHwLightCollectionBuffer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@1@Z @ 0x180199C18 (-CreateEmptyConstantBuffer@CHwLightCollectionBuffer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstan.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18004C004 (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18004D2D4 (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x180077E70 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDeviceLevel1 ***this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  bool v13; // zf
  _DWORD *v14; // r9
  struct ID3D11Buffer *v15; // r10
  struct CD3DDeviceLevel1 **v16; // rdx
  struct CD3DDeviceLevel1 *v17; // rax
  unsigned int v18; // eax
  struct CD3DDeviceLevel1 **v20; // rdx
  struct CD3DDeviceLevel1 *v21; // rcx
  struct ID3D11Buffer *v22; // [rsp+30h] [rbp-40h] BYREF
  const void *v23; // [rsp+38h] [rbp-38h] BYREF
  int v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+44h] [rbp-2Ch]
  D3D11_BUFFER_DESC v26; // [rsp+48h] [rbp-28h] BYREF

  v22 = 0LL;
  v8 = (CD3DResource *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  v9 = v8;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8, 0);
    *((_QWORD *)v9 + 16) &= v10;
    *((_QWORD *)v9 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v26.MiscFlags = 0;
    v26.StructureByteStride = 0;
    v24 = 0;
    v25 = 0;
    v23 = a4;
    v26.BindFlags = 4;
    v26.ByteWidth = a2;
    v26.Usage = D3D11_USAGE_DYNAMIC;
    v26.CPUAccessFlags = 0x10000;
    v11 = CD3DDeviceLevel1::CreateBuffer(
            (CD3DDeviceLevel1 *)this,
            &v26,
            (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)&v23 & -(__int64)(a4 != 0LL)),
            &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3Au);
    }
    else
    {
      v13 = *((_BYTE *)v9 + 68) == 0;
      v14 = this + 116;
      v15 = v22;
      *((_DWORD *)v9 + 18) = a2;
      *((_BYTE *)v9 + 77) = 1;
      if ( v13 )
      {
        v16 = this[121];
        v17 = (CD3DResource *)((char *)v9 + 32);
        if ( *v16 != (struct CD3DDeviceLevel1 *)(this + 120) )
          __fastfail(3u);
        *(_QWORD *)v17 = this + 120;
        *((_QWORD *)v9 + 5) = v16;
        *v16 = v17;
        this[121] = (struct CD3DDeviceLevel1 **)v17;
      }
      else
      {
        v20 = this[127];
        v21 = (CD3DResource *)((char *)v9 + 32);
        if ( *v20 != (struct CD3DDeviceLevel1 *)(this + 126) )
          __fastfail(3u);
        *((_QWORD *)v9 + 5) = v20;
        *(_QWORD *)v21 = this + 126;
        *v20 = v21;
        this[127] = (struct CD3DDeviceLevel1 **)v21;
        CD3DResourceManager::Use((CD3DResourceManager *)(this + 116), v9);
      }
      if ( *((_BYTE *)v9 + 76) )
        ++v14[30];
      v14[24] += *((_DWORD *)v9 + 18);
      v18 = v14[24];
      if ( v14[25] < v18 )
        v14[25] = v18;
      *((_QWORD *)v9 + 2) = v14;
      *((_QWORD *)v9 + 16) = v15;
      if ( v15 )
        ((void (__fastcall *)(struct ID3D11Buffer *))v15->lpVtbl->AddRef)(v15);
      v12 = 0;
      *a5 = v9;
      v9 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x28u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v22);
  if ( v9 )
    CMILPoolResource::Release(v9);
  return v12;
}
