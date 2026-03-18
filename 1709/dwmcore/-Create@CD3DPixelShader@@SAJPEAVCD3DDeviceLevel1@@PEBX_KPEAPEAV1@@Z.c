/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18007FED4
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18006DF98 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801A7528 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXG.c)
 * Callees:
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180020914 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800928BC (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800C1B10 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 ***this,
        const void *a2,
        __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  struct ID3D11ClassLinkage *v11; // r9
  signed int v12; // eax
  unsigned int v13; // edi
  struct ID3D11PixelShader *v14; // rdx
  struct CD3DDeviceLevel1 *v15; // rax
  struct CD3DDeviceLevel1 **v16; // r9
  unsigned int v17; // eax
  struct ID3D11PixelShader *v19; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v19 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DResource *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CD3DResource::CD3DResource(v8, 0);
  *((_QWORD *)v9 + 15) &= v10;
  *(_QWORD *)v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v9 + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  CManipulationFrame::AddRef(v9);
  v12 = CD3DDeviceLevel1::CreatePixelShader((CD3DDeviceLevel1 *)this, a2, a3, v11, &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x30u);
  }
  else
  {
    v14 = v19;
    *((_DWORD *)v9 + 16) = a3;
    *((_BYTE *)v9 + 69) = 1;
    v15 = (CD3DResource *)((char *)v9 + 32);
    v16 = this[117];
    if ( *v16 != (struct CD3DDeviceLevel1 *)(this + 116) )
      __fastfail(3u);
    *(_QWORD *)v15 = this + 116;
    *((_QWORD *)v9 + 5) = v16;
    *v16 = v15;
    this[117] = (struct CD3DDeviceLevel1 **)v15;
    if ( *((_BYTE *)v9 + 68) )
      ++*((_DWORD *)this + 242);
    *((_DWORD *)this + 236) += *((_DWORD *)v9 + 16);
    v17 = *((_DWORD *)this + 236);
    if ( *((_DWORD *)this + 237) < v17 )
      *((_DWORD *)this + 237) = v17;
    *((_QWORD *)v9 + 2) = this + 112;
    *((_QWORD *)v9 + 15) = v14;
    if ( v14 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v14->lpVtbl->AddRef)(v14);
    v13 = 0;
    *a4 = v9;
    v9 = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v19 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v19->lpVtbl->Release)(v19);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *))(*(_QWORD *)v9 + 8LL))(v9);
  return v13;
}
