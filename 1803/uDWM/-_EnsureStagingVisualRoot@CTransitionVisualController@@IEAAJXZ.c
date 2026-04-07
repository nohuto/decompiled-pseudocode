/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008EA4
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180001D0C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800022E4 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180007AD4 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180007BAC (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800083B8 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008F90 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FDD8 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  int inserted; // edi
  int v4; // eax
  int v5; // eax
  struct CVisual *v6; // rbx
  CVisual *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  struct CVisual *v10; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v11; // [rsp+48h] [rbp+10h] BYREF

  inserted = 0;
  v10 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  inserted = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v4,
      0x2A3u);
    return (unsigned int)inserted;
  }
  v5 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v10);
  v6 = v10;
  inserted = v5;
  if ( v5 < 0 )
  {
    v8 = 676;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      inserted,
      v8);
    if ( !v6 )
      return (unsigned int)inserted;
    v9 = *((_QWORD *)this + 1);
    if ( *((_QWORD *)v6 + 3) == v9 )
      VisualCollection::Remove((VisualCollection *)(v9 + 32), v6);
    goto LABEL_9;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), v10, 0LL, 1, 1);
  if ( inserted < 0 )
  {
    v8 = 679;
    goto LABEL_15;
  }
  *((_QWORD *)this + 18) = v6;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v6 = v10;
  }
  v7 = (CVisual *)*((_QWORD *)this + 18);
  v11.x = -32000;
  v11.y = -32000;
  CVisual::SetOffset(v7, &v11);
  inserted = CVisual::RenderRecursive(*((CVisual **)this + 18));
  if ( inserted < 0 )
  {
    v8 = 691;
    goto LABEL_15;
  }
LABEL_9:
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)inserted;
}
