/*
 * XREFs of ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AEF4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180017FC4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800181C4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18001C59C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18019A73C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::GetFirstAvailableD3DDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct CD3DDeviceLevel1 **a3)
{
  int D3DDevice; // eax
  struct CDXGIEnumeration *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct CDXGIEnumeration *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  *a3 = 0LL;
  D3DDevice = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v11);
  v7 = v11;
  v8 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v10 = 534;
  }
  else
  {
    if ( !*((_DWORD *)v11 + 22) )
    {
      v8 = -2003304307;
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x223u);
      goto LABEL_4;
    }
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, *(struct _LUID *)(**((_QWORD **)v11 + 8) + 336LL), a3);
    v8 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_4;
    v10 = 543;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, v10);
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v7 + 8LL))(v7);
  return v8;
}
