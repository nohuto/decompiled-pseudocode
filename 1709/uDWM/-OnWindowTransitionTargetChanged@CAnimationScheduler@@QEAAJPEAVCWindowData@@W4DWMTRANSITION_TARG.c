/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18000DA30
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002B6A0 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x1800035F8 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000A874 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C938 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18000C960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pq @ 0x180079638 (McTemplateU0pq.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  int v12; // edx
  __int64 i; // rdi
  _DWORD *v15; // rcx
  int SnapshotIndex; // eax
  CTransitionVisualController *v17; // rcx
  struct CTransitionWindowSnapshot *v18; // [rsp+30h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pq(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 604), a4);
  CopyRect((LPRECT)(a2 + 620), lprcSrc);
  CopyRect((LPRECT)(a2 + 636), a6);
  CopyRect((LPRECT)(a2 + 652), a7);
  CopyRect((LPRECT)(a2 + 668), a8);
  *(_DWORD *)(a2 + 600) &= 0x2000000u;
  *(_DWORD *)(a2 + 600) |= a3;
  v12 = *(_DWORD *)(a2 + 600);
  if ( *(_QWORD *)(a2 + 400) )
  {
    if ( (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
    {
      if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28), v12, 0LL) )
      {
        if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
        {
          CTransitionVisualController::EnsureSnapshot(
            *((CVisual ***)CDesktopManager::s_pDesktopManagerInstance + 29),
            (struct CWindowData *)a2);
          *(_DWORD *)(a2 + 600) |= 0x4000000u;
          SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
                            *(HWND *)(a2 + 40));
          if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v17, SnapshotIndex, &v18) >= 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 35) + 32LL) + 600LL) = *(_DWORD *)(a2 + 600);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v15 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v15[6] )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v15 + 80LL))(v15, a2, a3);
  }
  return 0LL;
}
