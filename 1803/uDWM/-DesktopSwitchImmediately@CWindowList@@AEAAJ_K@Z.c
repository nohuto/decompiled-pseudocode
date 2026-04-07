/*
 * XREFs of ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002BD04
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180006180 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180028B10 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x1800061E0 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000C028 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027234 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180027300 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x1800390A8 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003911C (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::DesktopSwitchImmediately(CLoginTransition **this, __int64 a2)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v5; // eax
  int v6; // ebx
  CContactManager *v7; // rsi
  int v8; // eax
  int refreshed; // eax
  CBaseObject *v10; // rcx
  CLoginTransition *v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
  v5 = CWindowList::BringDesktopToFront((CWindowList *)this, RenderTargetRootVisualForDesktop);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 5796;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v13);
    goto LABEL_12;
  }
  v7 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v8 = CContactManager::Reset(v7);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x83Du);
  }
  else
  {
    refreshed = CContactManager::RefreshPresentationModeSettings(v7);
    v6 = refreshed;
    if ( refreshed < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0x83Eu);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x16A5u);
    goto LABEL_12;
  }
  v10 = this[67];
  if ( v10 )
    CBaseObject::Release(v10);
  this[67] = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
  if ( CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) )
    _InterlockedIncrement((volatile signed __int32 *)CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) + 2);
  v11 = this[66];
  if ( v11 )
    CLoginTransition::StopAnimation(v11);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 5811;
    goto LABEL_19;
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return (unsigned int)v6;
}
