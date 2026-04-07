/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180004540 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180004D68 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180005D7C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800079B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180009AFC (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009B94 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180010414 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180013248 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013270 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017090 (-GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800170F0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017100 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017340 (-GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800173D0 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  CTransitionVisualController *v7; // r15
  struct _LIST_ENTRY *i; // rsi
  const struct StoryboardInfo *(__fastcall *v9)(CWindowClose *__hidden); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax
  int Blink; // r12d
  __int64 v12; // rbp
  const struct StoryboardInfo *j; // rdi
  CTransitionVisualController *Blink_low; // rcx
  HWND v16; // rdx
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  struct CVisual *v19; // r15
  int v20; // eax
  int v21; // eax
  int inserted; // eax
  unsigned __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  struct CTransitionWindowSnapshot *v24; // [rsp+38h] [rbp-50h] BYREF
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = this;
  v23 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v23) )
      return (unsigned int)-2147467259;
    v6 = v23;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                           v6);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    v9 = *(const struct StoryboardInfo *(__fastcall **)(CWindowClose *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v9 == CWindowClose::GetStoryboardInfo )
    {
      StoryboardInfo = CWindowClose::GetStoryboardInfo(a2);
    }
    else if ( v9 == CLauncherLaunch::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a2);
    }
    else if ( v9 == CLauncherDismiss::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a2);
    }
    else if ( v9 == CFadeIn::GetStoryboardInfo )
    {
      StoryboardInfo = CFadeIn::GetStoryboardInfo(a2);
    }
    else if ( v9 == CSlideOutCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(a2);
    }
    else
    {
      StoryboardInfo = v9(a2);
    }
    Blink = (int)i[37].Blink;
    v12 = 0LL;
    for ( j = StoryboardInfo; (unsigned int)v12 < *((_DWORD *)j + 1); v12 = (unsigned int)(v12 + 1) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)j + 1) + 4 * v12) & 0xFFF) == (Blink & 0xFFF) )
      {
        Blink_low = (CTransitionVisualController *)LODWORD(i[37].Blink);
        if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
          LODWORD(i[37].Blink) = (unsigned int)Blink_low & (a4 | 0x2000000) | 0xFFF;
        if ( a3 )
        {
          CTransitionVisualController::_StopAnimations(Blink_low, (HWND *)i);
          if ( (Blink & 0x20100000) == 0x20100000 )
          {
            v16 = (HWND)i[2].Blink;
            v24 = 0LL;
            SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(v7, v16);
            if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v24) >= 0 )
            {
              if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
                      (HWND)i[2].Blink,
                      -1,
                      0) )
                CTransitionVisualController::RestoreWindow(v7, (struct CWindowData *)i, (Blink & 0x10000000) != 0);
              v19 = v24;
              v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v24 + 3) + 32LL), v24);
              v5 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  v20,
                  0x258u);
                return v5;
              }
              v21 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
              v5 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  v21,
                  0x259u);
                return v5;
              }
              inserted = VisualCollection::InsertRelative(
                           (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                           v19,
                           0LL,
                           0,
                           1);
              v5 = inserted;
              if ( inserted < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  inserted,
                  0x25Au);
                return v5;
              }
              v7 = this;
            }
          }
        }
      }
    }
  }
  return v5;
}
