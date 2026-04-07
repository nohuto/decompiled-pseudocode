/*
 * XREFs of ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C
 * Callers:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x18000859C (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000EEE4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180015730 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180038F34 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18003D364 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180075E18 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?Initialize@CAccentBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x180076ED0 (-Initialize@CAccentBlurBehind@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008BA8C (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180014FB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::Create(struct IDwmChannel *a1, struct CRenderDataVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CRenderDataVisual *v5; // rax
  CVisual *v6; // rbx
  __int64 (__fastcall *v7)(CVisual *__hidden, struct IDwmChannel *); // rax
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x15u);
    return v9;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CRenderDataVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x118uLL);
  else
    v5 = (CRenderDataVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 280LL);
  if ( v5 )
    v6 = CRenderDataVisual::CRenderDataVisual(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_19;
  }
  v7 = *(__int64 (__fastcall **)(CVisual *__hidden, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CVisual::Initialize )
    v8 = CVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x15u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
