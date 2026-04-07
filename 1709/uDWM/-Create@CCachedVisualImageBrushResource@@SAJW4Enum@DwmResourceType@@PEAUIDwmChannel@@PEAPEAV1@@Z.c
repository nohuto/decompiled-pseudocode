/*
 * XREFs of ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CFFC
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x180005718 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000C5B0 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x18000DCAC (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E9E4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18006C508 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180075E18 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x18009B388 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180024C3C (-Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImageBrushResource::Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  if ( a3 )
  {
    v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v5 == WPF::ProcessHeapImpl::AllocClear )
      v6 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v6 = (_QWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(WPF::g_pProcessHeap, 32LL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x20uLL);
      v7[2] = 0LL;
      *v7 = &CCachedVisualImageBrushResource::`vftable';
      *((_DWORD *)v7 + 2) = 1;
    }
    if ( v7 )
    {
      v8 = CResource::Initialize(v7, 17LL, a2);
      v9 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x47u);
      }
      else
      {
        *a3 = v7;
        v7 = 0LL;
      }
      if ( v7 )
        CBaseObject::Release((CBaseObject *)v7);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
    }
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x42u);
  }
  return v9;
}
