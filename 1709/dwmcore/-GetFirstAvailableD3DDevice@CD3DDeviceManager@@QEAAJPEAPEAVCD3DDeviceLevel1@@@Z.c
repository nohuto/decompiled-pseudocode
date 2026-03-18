/*
 * XREFs of ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801A57A4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18006DF98 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18006E380 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x180191CD4 (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801AB318 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::GetFirstAvailableD3DDevice(CD3DDeviceManager *this, struct CD3DDeviceLevel1 **a2)
{
  signed int D3DDevice; // eax
  struct CDXGIEnumeration *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct CDXGIEnumeration *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  D3DDevice = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v9);
  v5 = v9;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v8 = 538;
  }
  else
  {
    if ( !*((_DWORD *)v9 + 22) )
    {
      v6 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, 0x8898008D, 0x226u);
      goto LABEL_8;
    }
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, *(struct _LUID *)(**((_QWORD **)v9 + 8) + 336LL), a2);
    v6 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_8;
    v8 = 546;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, D3DDevice, v8);
LABEL_8:
  if ( v5 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v5 + 8LL))(v5);
  return v6;
}
