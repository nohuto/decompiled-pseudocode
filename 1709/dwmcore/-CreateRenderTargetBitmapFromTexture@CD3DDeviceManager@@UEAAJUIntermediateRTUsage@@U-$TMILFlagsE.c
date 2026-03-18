/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A52C0
 * Callers:
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180136EE0 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180149490 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801D1E30 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180079534 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  signed int v15; // eax
  signed int v16; // ebx
  signed int D3DDevice; // eax
  signed int v18; // eax
  signed int v19; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x42Au);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v16, 0x510u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), a5, &v21);
    v16 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, D3DDevice, 0x512u);
      v9 = v21;
      goto LABEL_13;
    }
    v9 = v21;
    v18 = CHwTextureRenderTarget::CreateFromTexture(v21, a6, a4, a7, &v22);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v18, 0x51Bu);
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v19, 0x51Eu);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_13:
  if ( v9 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 472));
  return (unsigned int)v16;
}
