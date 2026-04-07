/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800076B0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18001DC88 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EEF0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022F00 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18002CA64 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002E920 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F6B4 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, char a3)
{
  CTopLevelWindow *v6; // rcx
  unsigned int v7; // edi
  CTopLevelWindow3D *v8; // rcx
  CProjectionBorderVisual *v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 180), &v12, &v11);
  OffsetRect((LPRECT)a2 + 3, v12 - *((_DWORD *)a2 + 12), v11 - *((_DWORD *)a2 + 13));
  v6 = (CTopLevelWindow *)*((_QWORD *)a2 + 49);
  v7 = 0;
  if ( v6 )
    CTopLevelWindow::OnOffsetUpdated(v6);
  v8 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 50);
  if ( v8 )
    CTopLevelWindow3D::OnOffsetUpdated(v8, a3);
  v9 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 51);
  if ( v9 )
  {
    CProjectionBorderVisual::UpdateRectFromWindow(v9, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 60) + 64LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60),
      *((_QWORD *)a2 + 5));
  }
  if ( *((_DWORD *)a2 + 116) )
  {
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)a2 + 55) + 8LL * v7);
      if ( *(struct CWindowData **)(v10 + 64) == a2 && *(_DWORD *)(v10 + 72) == 1 )
        CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v10);
      ++v7;
    }
    while ( v7 < *((_DWORD *)a2 + 116) );
  }
  CWindowList::UpdateAccentBlurBehind(this, a2);
}
