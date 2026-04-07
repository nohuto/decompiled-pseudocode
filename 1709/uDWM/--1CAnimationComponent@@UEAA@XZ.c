/*
 * XREFs of ??1CAnimationComponent@@UEAA@XZ @ 0x1800093C4
 * Callers:
 *     ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x180009180 (--_ECAnimationComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x180009388 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000D7C4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180025658 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x180071668 (-UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@.c)
 */

void __fastcall CAnimationComponent::~CAnimationComponent(CAnimationComponent *this)
{
  HWND v2; // rdx
  CDesktopManager *v3; // rdi
  HWND v4; // rdx
  CTransitionVisualController *v5; // rsi
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  struct CIconicAnimatedVisual *v10; // rdx
  CBaseObject *v11; // rcx

  *(_QWORD *)this = &CAnimationComponent::`vftable';
  CAnimationComponent::_LogEvent((__int64)this, 1);
  v2 = (HWND)*((_QWORD *)this + 2);
  if ( (unsigned __int64)v2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
            *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28),
            v2,
            68,
            0) )
    {
      v5 = (CTransitionVisualController *)*((_QWORD *)v3 + 29);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v3 + 57), v4);
      if ( WindowDataByHwnd )
        CTransitionVisualController::RestoreWindow(v5, WindowDataByHwnd, 1);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    CBaseObject::Release((CBaseObject *)(v9 + 8));
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = (struct CIconicAnimatedVisual *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 33),
      v10);
    v11 = (CBaseObject *)*((_QWORD *)this + 17);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
