/*
 * XREFs of ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800119A4
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180006204 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180097558 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x18009CA60 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009DCD0 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011780 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
        CAnimatedTransitionVisual *this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v6 = CAnimatedTransitionVisual::EnsureResources(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x313u);
  }
  else
  {
    v8 = CVisual::RenderRecursive(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x317u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x318u);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tagRECT *))(**(_QWORD **)(*((_QWORD *)this + 73)
                                                                                              + 16LL)
                                                                                + 1024LL))(
                *(_QWORD *)(*((_QWORD *)this + 73) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 73) + 24LL),
                a3);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x31Du);
        }
        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTransitionProcessSnapshotOnVisual_Info);
        }
      }
    }
  }
  return v7;
}
