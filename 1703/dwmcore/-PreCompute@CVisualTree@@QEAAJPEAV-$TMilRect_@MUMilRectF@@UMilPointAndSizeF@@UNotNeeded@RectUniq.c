/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004660 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetDirtyRegion@CHwndRenderTarget@@QEAAPEBVCDirtyRegion@@XZ @ 0x180023714 (-GetDirtyRegion@CHwndRenderTarget@@QEAAPEBVCDirtyRegion@@XZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x18006E120 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6B98 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180155D30 (-PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ.c)
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801A69E8 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CDirtyRegion@@QEAA@XZ @ 0x180092C90 (--0CDirtyRegion@@QEAA@XZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180092E00 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x1800B6B40 (-NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x1800B6CC8 (-CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x1800B6D20 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

__int64 __fastcall CVisualTree::PreCompute(CVisualTree *this, __int128 *a2)
{
  CDirtyRegion *v4; // rax
  CDirtyRegion *v5; // rax
  CDirtyRegion *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_xd(this, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, this, *((unsigned __int8 *)this + 32));
  v4 = (CDirtyRegion *)HeapAlloc(WPF::g_processHeap, 0, 0xAA8uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5 = CDirtyRegion::CDirtyRegion(v4);
  v6 = v5;
  if ( v5 )
  {
    (**(void (__fastcall ***)(CDirtyRegion *))v5)(v5);
    if ( a2 )
      v11 = *a2;
    else
      v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CDirtyRegion::Initialize(v6, *(_QWORD *)(*((_QWORD *)this + 2) + 400LL), &v11, 0);
    CVisualTree::CollectInvalidClientRects(this, v6);
    v7 = CVisualTree::PreComputeWorker(this, v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      CVisualTree::NotifyClientsOfDirty(this, v6);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v9, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, this);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA6u);
  }
  if ( v6 )
    (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v6 + 8LL))(v6);
  return v8;
}
