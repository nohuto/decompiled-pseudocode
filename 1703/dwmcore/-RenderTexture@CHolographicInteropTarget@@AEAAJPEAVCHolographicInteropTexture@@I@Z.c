/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z @ 0x1801A6AB0 (-Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180092D70 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800B4CD8 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x1800C1CD0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@I@Z @ 0x1801A3A30 (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@I@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801A3ABC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?GetDirtyRegion@CHolographicInteropTexture@@QEAAPEBVCDirtyRegion@@XZ @ 0x1801A3EAC (-GetDirtyRegion@CHolographicInteropTexture@@QEAAPEBVCDirtyRegion@@XZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801A6C4C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(CHolographicInteropTarget *this, RTL_SRWLOCK *a2, int a3)
{
  unsigned int v3; // r8d
  struct CD3DDeviceLevel1 *v5; // rdx
  bool v7; // r12
  int v8; // eax
  unsigned int v9; // edi
  struct CVisualTree *Ptr; // r13
  const struct CDirtyRegion *DirtyRegion; // r14
  struct IRenderTargetBitmap *v12; // rax
  CSwRenderTargetGetBounds *v13; // rbx
  int DrawingContext; // eax
  struct CDrawingContext *v15; // rbp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v21; // [rsp+20h] [rbp-58h]
  CSwRenderTargetGetBounds *v22; // [rsp+80h] [rbp+8h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  struct CDrawingContext *v24; // [rsp+98h] [rbp+20h] BYREF

  v23 = a3;
  v3 = *((_DWORD *)this + 34);
  v5 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 15);
  v22 = 0LL;
  v24 = 0LL;
  v7 = 0;
  LOBYTE(v23) = 0;
  v8 = CHolographicInteropTexture::EnsureRenderBuffers((CHolographicInteropTexture *)a2, v5, v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x16Eu);
  }
  else
  {
    Ptr = (struct CVisualTree *)a2[10].Ptr;
    DirtyRegion = CHolographicInteropTexture::GetDirtyRegion(a2);
    if ( SHIDWORD(a2[14].Ptr) <= 0 )
    {
      if ( Ptr )
      {
        v12 = CHolographicInteropTexture::BeginFrame(a2);
        Microsoft::WRL::ComPtr<IImageSource>::operator=((__int64 *)&v22, (__int64)v12);
        v13 = v22;
        if ( v22 )
        {
          DrawingContext = CRenderTarget::GetDrawingContext(this, &v24);
          v15 = v24;
          v9 = DrawingContext;
          if ( DrawingContext < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x179u);
          }
          else if ( DirtyRegion && !CDirtyRegion::IsEmpty(DirtyRegion) || LOBYTE(a2[14].Ptr) )
          {
            v16 = CDrawingContext::BeginFrame(
                    v15,
                    v13,
                    (CHolographicInteropTarget *)((char *)this + 140),
                    1,
                    (__int64)&a2[17].Ptr + 4,
                    0LL,
                    0,
                    0LL);
            v9 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x184u);
            }
            else
            {
              LOBYTE(v23) = 1;
              v17 = CHolographicInteropTarget::RenderDirtyRegion(
                      this,
                      (struct CHolographicInteropTexture *)a2,
                      Ptr,
                      DirtyRegion,
                      v21,
                      v13,
                      v15);
              v9 = v17;
              if ( v17 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x197u);
              else
                v7 = *((_BYTE *)v15 + 6776) || *((_BYTE *)v15 + 6778);
            }
          }
          AcquireSRWLockExclusive(a2 + 35);
          *((_BYTE *)a2[12].Ptr + 88) = v7;
          ReleaseSRWLockExclusive(a2 + 35);
          if ( (_BYTE)v23 )
            CDrawingContext::EndFrame(v15, v18, v19);
        }
      }
    }
    if ( DirtyRegion )
      (*(void (__fastcall **)(const struct CDirtyRegion *))(*(_QWORD *)DirtyRegion + 8LL))(DirtyRegion);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v22);
  return v9;
}
