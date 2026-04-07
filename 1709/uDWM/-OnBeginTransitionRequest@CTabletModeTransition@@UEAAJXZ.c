/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x180093D80
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000465C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E944 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  HMONITOR v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  RECT *p_rcMonitor; // rax
  int DesktopSnapshotComponent; // eax
  CBaseObject *v7; // rbx
  int v8; // eax
  struct CAnimationComponent *v10; // [rsp+30h] [rbp-50h] BYREF
  POINT pt[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF

  pt[0] = 0LL;
  v10 = 0LL;
  mi.cbSize = 40;
  v2 = MonitorFromPoint(0LL, 1u);
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  v3 = 0;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    p_rcMonitor = &mi.rcMonitor;
    if ( *((_BYTE *)this + 120) )
      p_rcMonitor = &mi.rcWork;
    *(RECT *)&pt[0].x = *p_rcMonitor;
    DesktopSnapshotComponent = CTransitionVisualController::CreateDesktopSnapshotComponent(
                                 *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
                                 v4,
                                 (const struct tagRECT *)pt,
                                 this,
                                 (__int64 *)&v10);
    v7 = v10;
    v3 = DesktopSnapshotComponent;
    if ( DesktopSnapshotComponent >= 0 )
    {
      v8 = CStoryboard::_AddAnimationComponent(this, v10);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v8, 0x1312u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        DesktopSnapshotComponent,
        0x1311u);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return v3;
}
