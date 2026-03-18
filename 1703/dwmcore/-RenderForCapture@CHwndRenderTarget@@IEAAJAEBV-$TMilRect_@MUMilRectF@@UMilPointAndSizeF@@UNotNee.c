/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18006D020 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18005B5EC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18005B624 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800B4CD8 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800C3F38 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18012D0E8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180134B34 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(CRenderTarget *this, __int64 a2)
{
  CComposition *v4; // rcx
  int v5; // ebx
  struct IRenderTargetDisplay *v6; // rdx
  int v7; // eax
  bool v8; // r8
  __int64 v9; // rcx
  int DrawingContext; // eax
  CDrawingContext *v11; // rsi
  int v12; // eax
  struct CVisualTree *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // r9d
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-58h]
  CDrawingContext *v23; // [rsp+80h] [rbp+8h] BYREF

  v4 = (CComposition *)*((_QWORD *)this + 2);
  v23 = 0LL;
  v5 = 0;
  CComposition::ShowHideCursors(v4, 0);
  v6 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 15);
  if ( !v6 )
  {
    v5 = -2003304442;
    v22 = 1315;
LABEL_16:
    v18 = v5;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v22);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_14;
  v7 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 16LL),
         v6);
  v5 = v7;
  if ( v7 < 0 )
  {
    v22 = 1325;
    goto LABEL_28;
  }
  v9 = *((_QWORD *)this + 10);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 24) + 88LL) & 0x1F) != 0 )
  {
    if ( *(_BYTE *)(v9 + 32) )
    {
      v19 = *(_QWORD *)(v9 + 16) + 584LL;
      AcquireSRWLockExclusive((PSRWLOCK)v19);
      *(_DWORD *)(v19 + 8) = GetCurrentThreadId();
      v5 = CVisualTree::PreCompute(*((CVisualTree **)this + 10));
      v20 = *(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 584LL;
      *(_DWORD *)(v20 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v20);
      if ( v5 >= 0 )
        goto LABEL_5;
      v22 = 1347;
      goto LABEL_16;
    }
    v7 = CVisualTree::PreCompute((CVisualTree *)v9);
    v5 = v7;
    if ( v7 >= 0 )
      goto LABEL_5;
    v22 = 1351;
LABEL_28:
    v18 = v7;
    goto LABEL_29;
  }
LABEL_5:
  *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) = 1;
  DrawingContext = CRenderTarget::GetDrawingContext(this, &v23, v8);
  v5 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x553u);
  }
  else
  {
    v11 = v23;
    v12 = CDrawingContext::BeginFrame(v23, *((CSwRenderTargetGetBounds **)this + 15), (__int64)this + 164, 0LL, 0, 0LL);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x558u);
    }
    else
    {
      v13 = (struct CVisualTree *)*((_QWORD *)this + 10);
      v23 = 0LL;
      CDrawingContext::CalculateOcclusion(v11, v13, 1, a2, 0, (__int64)&v23);
      v14 = CDrawingContext::DrawVisualTree(v11, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x56Eu);
      }
      else
      {
        v15 = *((_QWORD *)this + 17);
        if ( v15
          && (v16 = *(_QWORD *)(v15 + 368)) != 0
          && (v21 = CComposeTop::FullRender(v16, v11, (char *)this + 164, a2), v5 = v21, v21 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x581u);
        }
        else if ( g_LockAndReadOffscreenTarget )
        {
          CDrawingContext::ReadTexture(v11);
        }
      }
      CDrawingContext::EndFrame(v11);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) = 0;
LABEL_14:
  CComposition::RestoreCursors(*((CComposition **)this + 2));
  return (unsigned int)v5;
}
