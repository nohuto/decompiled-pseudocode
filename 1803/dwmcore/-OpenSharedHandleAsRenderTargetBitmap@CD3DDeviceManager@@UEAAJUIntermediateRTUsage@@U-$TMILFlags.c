/*
 * XREFs of ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DE5E0
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015A628 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8 (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1801E69A4 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _LUID a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _QWORD *a9)
{
  _QWORD *v9; // r14
  struct CD3DDeviceLevel1 *v10; // rsi
  unsigned int v11; // r8d
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v13; // rdx
  int v16; // eax
  int v17; // ebx
  int D3DDevice; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-48h]
  struct CD3DDeviceLevel1 *v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // [rsp+78h] [rbp+10h] BYREF

  v9 = a9;
  v10 = 0LL;
  v11 = a6;
  v12 = 0LL;
  v13 = (__int64)a5;
  v23 = 0LL;
  *a9 = 0LL;
  v24 = 0LL;
  v16 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, v13, v11);
  v17 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x42Eu);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v17, 0x7AEu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a5, &v23);
    v17 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, D3DDevice, 0x7B0u);
      v10 = v23;
      goto LABEL_13;
    }
    v10 = v23;
    LOBYTE(v22) = a8;
    v19 = CHwTextureRenderTarget::OpenShared(v23, a6, a4, a7, v22, &v24);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v19, 0x7BAu);
      v12 = v24;
    }
    else
    {
      v12 = v24;
      v20 = (**v24)(v24, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v9);
      v17 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v20, 0x7BDu);
    }
  }
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
LABEL_13:
  if ( v10 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 472));
  return (unsigned int)v17;
}
