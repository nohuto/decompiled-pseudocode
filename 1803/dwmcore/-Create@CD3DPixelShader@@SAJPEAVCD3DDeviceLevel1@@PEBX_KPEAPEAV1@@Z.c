/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18001F4A4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180071A64 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E006C (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180021A80 (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x180021AD4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180075784 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CA1F0 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 *this,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  struct ID3D11ClassLinkage *v11; // r9
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r10
  struct ID3D11PixelShader *v16; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v16 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DResource *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CD3DResource::CD3DResource(v8, 0);
  *((_QWORD *)v9 + 15) &= v10;
  *(_QWORD *)v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v9 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  CManipulationFrame::AddRef(v9);
  v12 = CD3DDeviceLevel1::CreatePixelShader(this, a2, a3, v11, &v16);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x30u);
  }
  else
  {
    CD3DResource::Init(v9, (struct CD3DDeviceLevel1 *)((char *)this + 896), a3);
    *((_QWORD *)v9 + 15) = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v13 = 0;
    *a4 = v9;
    v9 = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v16->lpVtbl->Release)(v16);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *))(*(_QWORD *)v9 + 8LL))(v9);
  return v13;
}
