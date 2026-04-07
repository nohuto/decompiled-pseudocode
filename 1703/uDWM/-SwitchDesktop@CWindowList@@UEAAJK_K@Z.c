/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800302A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z @ 0x1800102E4 (-SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180010544 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x1800166B4 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002EEB0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002EF7C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800330D8 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800419B0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800823D8 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180094EB0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  char v6; // r14
  int v7; // eax
  int v8; // ebx
  CScreenRotation *v9; // rcx
  CScreenRotation *v10; // rcx
  unsigned int v11; // edx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  CLoginTransition *v17; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  CLoginTransition *v20; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1577u);
    goto LABEL_8;
  }
  v9 = (CScreenRotation *)*((_QWORD *)this + 63);
  if ( v9 && *((_QWORD *)v9 + 3) )
    CScreenRotation::Stop(v9, 0);
  v10 = (CScreenRotation *)*((_QWORD *)this + 64);
  if ( v10 && *((_QWORD *)v10 + 3) )
    CScreenRotation::Stop(v10, 0);
  if ( !*((_QWORD *)this + 67) || a2 != 55 && a2 != 65 || !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    goto LABEL_7;
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
  v14 = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x158Du);
    goto LABEL_8;
  }
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1591u);
    goto LABEL_8;
  }
  if ( *((_QWORD *)this + 66) )
    goto LABEL_19;
  v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v16 )
  {
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)v16 = &CLoginTransition::`vftable';
    *(_DWORD *)(v16 + 72) = -1;
    *(_QWORD *)(v16 + 80) = -1LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_BYTE *)(v16 + 68) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 66) = v16;
  if ( v16 )
  {
LABEL_19:
    v17 = (CLoginTransition *)*((_QWORD *)this + 66);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v17, a2, *((struct CVisual **)this + 67), RootVisualForDesktop, a3);
    v8 = started;
    if ( started >= 0 )
    {
      v6 = 0;
LABEL_7:
      GetDesktopID(2LL, &v22);
      CAnalogCompositorManager::SetIdleState(0, a3 != v22);
      goto LABEL_8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x159Au);
LABEL_8:
    if ( v8 >= 0 )
      goto LABEL_9;
    goto LABEL_31;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1596u);
LABEL_31:
  v20 = (CLoginTransition *)*((_QWORD *)this + 66);
  if ( v20 )
  {
    CLoginTransition::`scalar deleting destructor'(v20, v11);
    *((_QWORD *)this + 66) = 0LL;
  }
LABEL_9:
  if ( v6 )
    v8 = CWindowList::DesktopSwitchImmediately(this, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v8;
}
