/*
 * XREFs of ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006A38
 * Callers:
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x18000220C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800022E4 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180005EC8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___ @ 0x180005EFC (CTransitionVisualController--ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800076B0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800083B8 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800092C8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800094AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004203C (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x180098380 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18001DC88 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CTransitionVisualController::_MoveWindowOffscreen(struct CTopLevelWindow *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  CThumbnailVisual *v7; // rcx
  int updated; // eax

  CTopLevelWindow::SetWindowOffscreen(a1, a2);
  v4 = *((_QWORD *)a1 + 90);
  if ( v4 && (!a2 || (*(_DWORD *)(v4 + 600) & 0x8000000) != 0) && *(_DWORD *)(v4 + 536) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 512) + 8 * v5);
      if ( a2 != *(_BYTE *)(v6 + 35) )
      {
        v7 = *(CThumbnailVisual **)(v6 + 88);
        *(_BYTE *)(v6 + 35) = a2;
        if ( v7 )
        {
          updated = CThumbnailVisual::UpdateProperties(v7, 4u);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1DF0u);
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v4 + 536) );
  }
}
