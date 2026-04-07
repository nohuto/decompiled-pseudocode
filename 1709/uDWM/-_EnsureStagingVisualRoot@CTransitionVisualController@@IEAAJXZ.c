/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006DF4
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800057E0 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800058A0 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180006250 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800070A0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006EE0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D70C (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  unsigned int v1; // edi
  int v4; // eax
  int v5; // eax
  struct CVisual *v6; // rbx
  int inserted; // eax
  CVisual *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CVisual *v11; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return v1;
  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v4,
      0x2A5u);
    return v1;
  }
  v5 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v11);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v5,
      0x2A6u);
    v6 = v11;
LABEL_15:
    if ( !v6 )
      return v1;
    v10 = *((_QWORD *)this + 1);
    if ( *((_QWORD *)v6 + 3) == v10 )
      VisualCollection::Remove((VisualCollection *)(v10 + 32), v6);
    goto LABEL_9;
  }
  v6 = v11;
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), v11, 0LL, 1, 1);
  v1 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      inserted,
      0x2A9u);
    goto LABEL_15;
  }
  *((_QWORD *)this + 18) = v6;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v6 = v11;
  }
  v8 = (CVisual *)*((_QWORD *)this + 18);
  v12.x = -32000;
  v12.y = -32000;
  CVisual::SetOffset(v8, &v12);
  v9 = CVisual::RenderRecursive(*((CVisual **)this + 18));
  v1 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v9,
      0x2B5u);
    goto LABEL_15;
  }
LABEL_9:
  if ( v6 )
    CBaseObject::Release(v6);
  return v1;
}
