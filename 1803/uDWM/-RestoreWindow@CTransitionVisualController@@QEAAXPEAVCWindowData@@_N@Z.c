/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800076B0
 * Callers:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x180006DFC (--1CAnimationComponent@@UEAA@XZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x1800070A4 (CTransitionVisualController--ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800092C8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000A388 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006A38 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x1800070A4 (CTransitionVisualController--ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000944C (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180016304 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     McTemplateU0p @ 0x18008273C (McTemplateU0p.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r14d
  struct CTopLevelWindow *v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx
  char v12; // bp
  __int64 v13; // rax
  unsigned int Clone; // eax
  char v15; // r8
  __int64 v16; // rcx
  CVisual *v17; // rcx
  CTransitionVisualController *v18; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 49);
    if ( v6 )
      *(_BYTE *)(v6 + 241) &= ~1u;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a2 + 150);
      v9 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 49);
      *((_DWORD *)a2 + 150) = v8 & 0xFFEFFFFF;
      if ( v9 && (*((_BYTE *)v9 + 241) & 2) != 0 )
      {
        v10 = *((_DWORD *)this + 34);
        v11 = 0LL;
        v12 = 1;
        if ( v10 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v11);
            if ( *(_QWORD *)(v13 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v13 + 128) + 24LL) == 3 )
              break;
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= v10 )
              goto LABEL_11;
          }
          v12 = 0;
        }
LABEL_11:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v15 = 0;
        if ( Clone >= *((_DWORD *)this + 12) )
          v15 = v12;
        if ( v15 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v9, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p(v16, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56), a2, 0);
      CWindowList::UpdateWindowScale(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56), a2, 0);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      v17 = (CVisual *)*((_QWORD *)a2 + 49);
      if ( v17 )
        CVisual::SetDirtyFlags(v17, 0x4000000u);
      *((_DWORD *)a2 + 150) = v8;
    }
    if ( a3 )
    {
      v18 = this;
      CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___((__int64)a2, &v18, 1);
    }
  }
}
