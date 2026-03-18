/*
 * XREFs of ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180070ADC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180071A64 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C58C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?Render@CDwm3DRECallbackRenderer@@UEAAJXZ @ 0x18017BA70 (-Render@CDwm3DRECallbackRenderer@@UEAAJXZ.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801C8ABC (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::GetDefaultD3DDevice(CD3DDeviceManager *this, struct CD3DDeviceLevel1 **a2)
{
  int D3DDevice; // eax
  struct CDXGIEnumeration *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct CDXGIEnumeration *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  D3DDevice = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v9);
  v5 = v9;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v8 = 536;
  }
  else
  {
    if ( !*((_DWORD *)v9 + 22) )
    {
      v6 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x224u);
      goto LABEL_8;
    }
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, *(struct _LUID *)(**((_QWORD **)v9 + 8) + 336LL), a2);
    v6 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_8;
    v8 = 544;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, D3DDevice, v8);
LABEL_8:
  if ( v5 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v5 + 8LL))(v5);
  return v6;
}
