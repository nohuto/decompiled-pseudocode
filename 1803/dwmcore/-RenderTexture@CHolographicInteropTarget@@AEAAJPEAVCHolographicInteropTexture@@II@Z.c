/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801FDE00 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800422F4 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x1800C0600 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18013E76C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x1801FAA74 (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z.c)
 *     ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x1801FAE28 (-EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801FAEA4 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x1801FBD88 (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801FE024 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(
        struct CComposition **this,
        struct CVisualTree **a2,
        int a3,
        unsigned int a4)
{
  struct CDrawingContext *DrawingContext; // rax
  enum DXGI_FORMAT v8; // r8d
  struct CD3DDeviceLevel1 *v9; // rdx
  CDrawingContext *v10; // r14
  char v11; // r15
  int v12; // eax
  unsigned int v13; // edi
  struct CVisualTree *v14; // r12
  __int64 v15; // rdx
  CDirtyRegion *v16; // rsi
  struct IRenderTargetBitmap *v17; // rax
  __int64 v18; // rdx
  struct IRenderTarget *v19; // rbx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-68h]
  struct IRenderTargetBitmap *v25; // [rsp+30h] [rbp-58h]
  CDirtyRegion *v26; // [rsp+40h] [rbp-48h] BYREF
  struct IRenderTarget *v27; // [rsp+90h] [rbp+8h] BYREF
  int v28; // [rsp+A0h] [rbp+18h]
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = 0LL;
  DrawingContext = CRenderTarget::GetDrawingContext(this);
  v8 = *((_DWORD *)this + 47);
  v9 = this[22];
  v10 = DrawingContext;
  LOBYTE(v28) = 0;
  v11 = 0;
  v26 = 0LL;
  v12 = CHolographicInteropTexture::EnsureRenderBuffers((CHolographicInteropTexture *)a2, v9, v8);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x159u);
    goto LABEL_22;
  }
  v14 = a2[10];
  CHolographicInteropTexture::TryGetDirtyRegion((CHolographicInteropTexture *)a2, &v26);
  v16 = v26;
  if ( ((_BYTE)a2[16] & 1) == 0 )
  {
    if ( v14 )
    {
      v17 = CHolographicInteropTexture::BeginFrame((RTL_SRWLOCK *)a2, v15, a4);
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((__int64 *)&v27, (__int64)v17);
      v19 = v27;
      if ( v27 )
      {
        if ( v16 && !CDirtyRegion::IsEmpty(v16) || *((_BYTE *)a2 + 132) )
        {
          v20 = CDrawingContext::BeginFrame(v10, v19, (_OWORD *)this + 12, 1, (__int64)(a2 + 20), 0LL, 0, 0LL);
          v13 = v20;
          if ( v20 >= 0 )
          {
            v25 = v19;
            v21 = v29;
            LOBYTE(v28) = 1;
            v22 = CHolographicInteropTarget::RenderDirtyRegion(
                    (CHolographicInteropTarget *)this,
                    (struct CHolographicInteropTexture *)a2,
                    v14,
                    v16,
                    v24,
                    v29,
                    v25,
                    v10);
            v13 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x181u);
            else
              v11 = *((_BYTE *)v10 + 6834) || *((_BYTE *)v10 + 6836);
LABEL_17:
            CHolographicInteropTexture::EndFrame((RTL_SRWLOCK *)a2, v18, v21, v11);
            if ( (_BYTE)v28 )
              CDrawingContext::EndFrame(v10);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x16Du);
        }
        v21 = v29;
        goto LABEL_17;
      }
    }
  }
LABEL_19:
  if ( v16 )
    (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v16 + 8LL))(v16);
LABEL_22:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  return v13;
}
