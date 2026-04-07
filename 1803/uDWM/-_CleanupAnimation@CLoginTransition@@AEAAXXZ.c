/*
 * XREFs of ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180006030
 * Callers:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x1800061E0 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180006204 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18000DD90 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18000ECE4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18000EF70 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180027300 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180039590 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

void __fastcall CLoginTransition::_CleanupAnimation(CLoginTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rbx
  __int64 v4; // r8
  struct CVisual *v5; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 16));
    CAnimationEngine::Release(v3);
  }
  if ( *((_QWORD *)this + 1) )
    CVisual::SetOffset(*((CVisual **)this + 4), &stru_1800B2450);
  if ( *((_QWORD *)this + 2) )
    CVisual::SetOffset(*((CVisual **)this + 5), &stru_1800B2450);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    VisualCollection::Remove(
      (VisualCollection *)(v4 + 32),
      (struct CVisual *)((*((_QWORD *)this + 1) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 1) >> 64)));
    VisualCollection::Remove(
      (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
      (struct CVisual *)((*((_QWORD *)this + 2) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64)));
    v5 = (struct CVisual *)*((_QWORD *)this + 6);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                                         *((_QWORD *)this + 10));
    VisualCollection::Remove((struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32), v5);
  }
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
  {
    CBaseObject::Release((CBaseObject *)(v7 + 8));
    *((_QWORD *)this + 1) = 0LL;
  }
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    CBaseObject::Release((CBaseObject *)(v8 + 8));
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 4) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 5) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoginTransition_Stop);
}
