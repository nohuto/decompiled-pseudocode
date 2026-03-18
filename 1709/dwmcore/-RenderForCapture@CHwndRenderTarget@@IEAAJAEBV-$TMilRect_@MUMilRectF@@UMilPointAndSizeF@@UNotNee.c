/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180019D10 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180079258 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800AA880 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800AA8B8 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800BA02C (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18013E6D8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D57C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(CRenderTarget *this, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // r8
  int DrawingContext; // eax
  CDrawingContext *v9; // rsi
  int v10; // eax
  struct CVisualTree *v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-58h]
  CDrawingContext *v20; // [rsp+80h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 10);
  v20 = 0LL;
  v5 = 0;
  if ( !v3 )
    return v5;
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 24) + 88LL) & 0x7F) != 0 )
  {
    if ( *(_BYTE *)(v3 + 32) )
    {
      v16 = *(_QWORD *)(v3 + 16) + 552LL;
      AcquireSRWLockExclusive((PSRWLOCK)v16);
      *(_DWORD *)(v16 + 8) = GetCurrentThreadId();
      v5 = CVisualTree::PreCompute(*((CVisualTree **)this + 10));
      v17 = *(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 552LL;
      *(_DWORD *)(v17 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v17);
      if ( (v5 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4AEu);
        return v5;
      }
    }
    else
    {
      v6 = CVisualTree::PreCompute((CVisualTree *)v3);
      v5 = v6;
      if ( v6 < 0 )
      {
        v19 = 1202;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v19);
        return v5;
      }
    }
  }
  v6 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 16LL),
         *((struct IRenderTargetDisplay **)this + 15));
  v5 = v6;
  if ( v6 < 0 )
  {
    v19 = 1209;
    goto LABEL_25;
  }
  CComposition::ShowHideCursors(*((CComposition **)this + 2), 0);
  *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) = 1;
  DrawingContext = CRenderTarget::GetDrawingContext(this, &v20, v7);
  v5 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawingContext, 0x4C4u);
  }
  else
  {
    v9 = v20;
    v10 = CDrawingContext::BeginFrame(v20, *((CSwRenderTargetGetBounds **)this + 15), (__int64)this + 164, 0LL, 0, 0LL);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4C9u);
    }
    else
    {
      v11 = (struct CVisualTree *)*((_QWORD *)this + 10);
      v20 = 0LL;
      CDrawingContext::CalculateOcclusion(v9, v11, 0, 0, (__int64)&v20);
      v12 = CDrawingContext::DrawVisualTree(v9, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0, 0);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x4DEu);
      }
      else
      {
        v13 = *((_QWORD *)this + 17);
        if ( v13
          && (v14 = *(_QWORD *)(v13 + 368)) != 0
          && (v18 = CComposeTop::FullRender(v14, v9, (char *)this + 164, a2), v5 = v18, v18 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x4EDu);
        }
        else if ( g_LockAndReadOffscreenTarget )
        {
          CDrawingContext::ReadTexture(v9);
        }
      }
      CDrawingContext::EndFrame(v9);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) = 0;
  CComposition::RestoreCursors(*((CComposition **)this + 2));
  return v5;
}
