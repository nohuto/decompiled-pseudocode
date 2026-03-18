/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801C1A50 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180079258 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180088984 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ??1?$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BE1B0 (--1-$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18011BB84 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@I@Z @ 0x1801BE3DC (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@I@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801BE470 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x1801BF07C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801C1C3C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(CHolographicInteropTarget *this, RTL_SRWLOCK *a2, int a3)
{
  unsigned int v3; // r8d
  struct CD3DDeviceLevel1 *v5; // rdx
  bool v7; // r12
  signed int v8; // eax
  unsigned int v9; // edi
  struct CVisualTree *Ptr; // r13
  CDirtyRegion *v11; // r14
  struct IRenderTargetBitmap *v12; // rax
  CSwRenderTargetGetBounds *v13; // rbx
  signed int DrawingContext; // eax
  struct CDrawingContext *v15; // rbp
  signed int v16; // eax
  signed int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v21; // [rsp+20h] [rbp-68h]
  struct CDrawingContext *v22; // [rsp+40h] [rbp-48h] BYREF
  CSwRenderTargetGetBounds *v23; // [rsp+90h] [rbp+8h] BYREF
  int v24; // [rsp+A0h] [rbp+18h]
  CDirtyRegion *v25; // [rsp+A8h] [rbp+20h] BYREF

  v24 = a3;
  v3 = *((_DWORD *)this + 34);
  v5 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 15);
  v23 = 0LL;
  v22 = 0LL;
  v7 = 0;
  v25 = 0LL;
  LOBYTE(v24) = 0;
  v8 = CHolographicInteropTexture::EnsureRenderBuffers((CHolographicInteropTexture *)a2, v5, v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x150u);
  }
  else
  {
    Ptr = (struct CVisualTree *)a2[10].Ptr;
    CHolographicInteropTexture::TryGetDirtyRegion(a2, &v25);
    v11 = v25;
    if ( SHIDWORD(a2[15].Ptr) <= 0 )
    {
      if ( Ptr )
      {
        v12 = CHolographicInteropTexture::BeginFrame(a2);
        Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)&v23, (__int64)v12);
        v13 = v23;
        if ( v23 )
        {
          DrawingContext = CRenderTarget::GetDrawingContext(this, &v22);
          v15 = v22;
          v9 = DrawingContext;
          if ( DrawingContext < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawingContext, 0x15Bu);
          }
          else if ( v11 && !CDirtyRegion::IsEmpty(v11) || LOBYTE(a2[15].Ptr) )
          {
            v16 = CDrawingContext::BeginFrame(
                    v15,
                    v13,
                    (CHolographicInteropTarget *)((char *)this + 140),
                    1,
                    (__int64)&a2[18].Ptr + 4,
                    0LL,
                    0,
                    0LL);
            v9 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x166u);
            }
            else
            {
              LOBYTE(v24) = 1;
              v17 = CHolographicInteropTarget::RenderDirtyRegion(
                      this,
                      (struct CHolographicInteropTexture *)a2,
                      Ptr,
                      v11,
                      v21,
                      v13,
                      (struct CComposition **)v15);
              v9 = v17;
              if ( v17 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x179u);
              else
                v7 = *((_BYTE *)v15 + 6832) || *((_BYTE *)v15 + 6834);
            }
          }
          AcquireSRWLockExclusive(a2 + 36);
          *((_BYTE *)a2[13].Ptr + 88) = v7;
          ReleaseSRWLockExclusive(a2 + 36);
          if ( (_BYTE)v24 )
            CDrawingContext::EndFrame(v15, v18, v19);
        }
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>((__int64 *)&v23);
  return v9;
}
