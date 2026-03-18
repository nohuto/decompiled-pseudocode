/*
 * XREFs of ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180195A70
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180148658 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18019BF68 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _GUID *a5,
        struct _LUID a6,
        unsigned int a7,
        __int64 a8,
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
  struct CD3DDeviceLevel1 *v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // [rsp+78h] [rbp+10h] BYREF

  v9 = a9;
  v10 = 0LL;
  v11 = a7;
  v12 = 0LL;
  v13 = (__int64)a6;
  v22 = 0LL;
  *a9 = 0LL;
  v23 = 0LL;
  v16 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, v13, v11);
  v17 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x423u);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v17, 0x7AEu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a5, a6, &v22);
    v17 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, D3DDevice, 0x7B0u);
      v10 = v22;
      goto LABEL_13;
    }
    v10 = v22;
    v19 = CHwTextureRenderTarget::OpenShared(v22, a7, a4, a8, &v23);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v19, 0x7B9u);
      v12 = v23;
    }
    else
    {
      v12 = v23;
      v20 = (**v23)(v23, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v9);
      v17 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v20, 0x7BCu);
    }
  }
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
LABEL_13:
  if ( v10 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 488));
  return (unsigned int)v17;
}
