/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DDDE0
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180155B14 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015937C (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172818 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180213CE4 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 * Callees:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18000DD28 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _LUID a5,
        unsigned int a6,
        struct ID3D11Texture2D *a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  struct CD3DDeviceLevel1 *v9; // rsi
  unsigned int v10; // r8d
  CHwTextureRenderTarget *v11; // rdi
  __int64 v12; // rdx
  int v15; // eax
  int v16; // ebx
  int D3DDevice; // eax
  int v18; // eax
  int v19; // eax
  struct CD3DDeviceLevel1 *v21; // [rsp+30h] [rbp-38h] BYREF
  CHwTextureRenderTarget *v22; // [rsp+78h] [rbp+10h] BYREF

  v8 = a8;
  v9 = 0LL;
  v10 = a6;
  v11 = 0LL;
  v12 = (__int64)a5;
  v21 = 0LL;
  *a8 = 0LL;
  v22 = 0LL;
  v15 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, v12, v10);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x42Eu);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v16, 0x514u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), a5, &v21);
    v16 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, D3DDevice, 0x516u);
      v9 = v21;
      goto LABEL_13;
    }
    v9 = v21;
    v18 = CHwTextureRenderTarget::CreateFromTexture(v21, a6, a4, a7, &v22);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v18, 0x51Fu);
      v11 = v22;
    }
    else
    {
      v11 = v22;
      v19 = (**(__int64 (__fastcall ***)(CHwTextureRenderTarget *, GUID *, _QWORD *))v22)(
              v22,
              &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
              v8);
      v16 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v19, 0x522u);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_13:
  if ( v9 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 472));
  return (unsigned int)v16;
}
