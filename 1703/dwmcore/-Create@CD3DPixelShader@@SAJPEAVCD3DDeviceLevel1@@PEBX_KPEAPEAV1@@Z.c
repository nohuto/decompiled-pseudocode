/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800C51B4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800181C4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18004C004 (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18004D2D4 (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CC240 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 *a1,
        const void *a2,
        __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edi
  bool v15; // zf
  _DWORD *v16; // r9
  __int64 v17; // r10
  char *v18; // rcx
  struct CD3DDeviceLevel1 **v19; // rdx
  struct CD3DDeviceLevel1 *v20; // rax
  unsigned int v21; // eax
  struct CD3DDeviceLevel1 **v23; // rdx
  struct CD3DDeviceLevel1 *v24; // rcx
  _QWORD v25[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v25[0] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(a1, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DResource *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  v9 = v8;
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  CD3DResource::CD3DResource(v8, 0);
  *((_QWORD *)v9 + 16) &= v10;
  *(_QWORD *)v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v9 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  CManipulationFrame::AddRef(v9);
  v11 = (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, _QWORD, _QWORD *))(**((_QWORD **)a1 + 80) + 120LL))(
          *((_QWORD *)a1 + 80),
          a2,
          a3,
          0LL,
          v25);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x60Cu);
  v13 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)a1, v12, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x30u);
  }
  else
  {
    v15 = *((_BYTE *)v9 + 68) == 0;
    v16 = (_DWORD *)((char *)a1 + 928);
    v17 = v25[0];
    *((_DWORD *)v9 + 18) = a3;
    *((_BYTE *)v9 + 77) = 1;
    if ( v15 )
    {
      v18 = (char *)a1 + 960;
      v19 = (struct CD3DDeviceLevel1 **)*((_QWORD *)a1 + 121);
      v20 = (CD3DResource *)((char *)v9 + 32);
      if ( *v19 != (struct CD3DDeviceLevel1 *)((char *)a1 + 960) )
        __fastfail(3u);
      *(_QWORD *)v20 = v18;
      *((_QWORD *)v9 + 5) = v19;
      *v19 = v20;
      *((_QWORD *)a1 + 121) = v20;
    }
    else
    {
      v23 = (struct CD3DDeviceLevel1 **)*((_QWORD *)a1 + 127);
      v24 = (CD3DResource *)((char *)v9 + 32);
      if ( *v23 != (struct CD3DDeviceLevel1 *)((char *)a1 + 1008) )
        __fastfail(3u);
      *((_QWORD *)v9 + 5) = v23;
      *(_QWORD *)v24 = (char *)a1 + 1008;
      *v23 = v24;
      *((_QWORD *)a1 + 127) = v24;
      CD3DResourceManager::Use((struct CD3DDeviceLevel1 *)((char *)a1 + 928), v9);
    }
    if ( *((_BYTE *)v9 + 76) )
      ++v16[30];
    v16[24] += *((_DWORD *)v9 + 18);
    v21 = v16[24];
    if ( v16[25] < v21 )
      v16[25] = v21;
    *((_QWORD *)v9 + 2) = v16;
    *((_QWORD *)v9 + 16) = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v14 = 0;
    *a4 = v9;
    v9 = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v18, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v25[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *))(*(_QWORD *)v9 + 8LL))(v9);
  return v14;
}
