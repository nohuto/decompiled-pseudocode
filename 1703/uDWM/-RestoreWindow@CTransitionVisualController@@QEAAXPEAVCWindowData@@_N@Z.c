/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800079B4
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000202C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x18000A814 (CTransitionVisualController--ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000AB28 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800132A4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180007820 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x18000A814 (CTransitionVisualController--ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035260 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800363D4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     Template_p @ 0x180081A80 (Template_p.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  int v9; // r14d
  struct CTopLevelWindow *v10; // rbx
  CVisual *v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rcx
  char v14; // bp
  __int64 v15; // rax
  unsigned int Clone; // eax
  char v17; // r8
  __int64 v18; // rcx
  CTransitionVisualController *v19; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 50);
    if ( v6 )
      *(_BYTE *)(v6 + 241) &= ~1u;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v9 = *((_DWORD *)a2 + 150);
      *((_DWORD *)a2 + 150) = v9 & 0xFFEFFFFF;
      v10 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 50);
      if ( v10 && (*((_BYTE *)v10 + 241) & 2) != 0 )
      {
        v12 = *((_DWORD *)this + 34);
        v13 = 0LL;
        v14 = 1;
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v13);
            if ( *(_QWORD *)(v15 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v15 + 128) + 24LL) == 3 )
              break;
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= v12 )
              goto LABEL_17;
          }
          v14 = 0;
        }
LABEL_17:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v17 = 0;
        if ( Clone >= *((_DWORD *)this + 12) )
          v17 = v14;
        if ( v17 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v10, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            Template_p(v18, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51), a2, 0);
      CWindowList::UpdateWindowScale(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51), a2, 0);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      v11 = (CVisual *)*((_QWORD *)a2 + 50);
      if ( v11 )
        CVisual::SetDirtyFlags(v11, 0x4000000u);
      *((_DWORD *)a2 + 150) = v9;
    }
    if ( a3 )
    {
      LOBYTE(v8) = 1;
      v19 = this;
      CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___(a2, &v19, v8);
    }
  }
}
