/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D14
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800629E0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034830 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180034868 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800422F4 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180082F88 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADA10 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct CDrawingContext *DrawingContext; // rax
  __int64 v6; // rcx
  CDrawingContext *v7; // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)a1);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = DrawingContext;
  if ( !v6 )
    return v3;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 88LL) & 0x7F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 32) )
    {
      v14 = *(_QWORD *)(v6 + 16) + 576LL;
      AcquireSRWLockExclusive((PSRWLOCK)v14);
      *(_DWORD *)(v14 + 8) = GetCurrentThreadId();
      v3 = CVisualTree::PreCompute(*(struct CVisualTree **)(a1 + 120), 0LL);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 576LL;
      *(_DWORD *)(v15 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v15);
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4F9u);
        return v3;
      }
    }
    else
    {
      v8 = CVisualTree::PreCompute((struct CVisualTree *)v6, 0LL);
      v3 = v8;
      if ( v8 < 0 )
      {
        v17 = 1277;
LABEL_23:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v17);
        return v3;
      }
    }
  }
  v8 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL) + 16LL),
         *(struct IRenderTargetDisplay **)(a1 + 176));
  v3 = v8;
  if ( v8 < 0 )
  {
    v17 = 1284;
    goto LABEL_23;
  }
  CComposition::ShowHideCursors(*(CComposition **)(a1 + 16), 0);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1344LL) = 1;
  v9 = CDrawingContext::BeginFrame(v7, *(struct IRenderTarget **)(a1 + 176), a1 + 220, 0LL, 0, 0LL);
  v3 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x512u);
  }
  else
  {
    CDrawingContext::CalculateOcclusion(v7, *(struct CVisualTree **)(a1 + 120), 0, 0, (__int64)&v18);
    v10 = CDrawingContext::DrawVisualTree(v7, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0, 0);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x527u);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 192);
      if ( v11
        && (v12 = *(_QWORD *)(v11 + 320)) != 0
        && (v16 = CComposeTop::FullRender(v12, v7, a1 + 220, a2), v3 = v16, v16 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x536u);
      }
      else if ( g_LockAndReadOffscreenTarget )
      {
        CDrawingContext::ReadTexture(v7);
      }
    }
    CDrawingContext::EndFrame(v7);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1344LL) = 0;
  CComposition::RestoreCursors(*(CComposition **)(a1 + 16));
  return v3;
}
