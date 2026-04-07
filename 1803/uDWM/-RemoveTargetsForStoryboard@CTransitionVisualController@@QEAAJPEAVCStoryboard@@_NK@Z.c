/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180009DEC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000B56C (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000BCDC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000761C (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800076B0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18000786C (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180008E4C (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008EA4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x180009740 (-GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A330 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A340 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A350 (-GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000B368 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BA20 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  char v7; // r15
  struct _LIST_ENTRY *i; // rdi
  const struct StoryboardInfo *(__fastcall *v10)(CWindowClose *__hidden); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax
  int Blink; // r12d
  __int64 v13; // rbp
  const struct StoryboardInfo *v14; // rsi
  int v15; // r8d
  CTransitionVisualController *Blink_low; // rcx
  HWND v18; // rdx
  int SnapshotIndex; // eax
  CTransitionVisualController *v20; // rcx
  struct CVisual *v21; // r15
  int v22; // eax
  int v23; // eax
  int inserted; // eax
  unsigned __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  struct CTransitionWindowSnapshot *v26; // [rsp+38h] [rbp-50h] BYREF
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  v25 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v25) )
      return (unsigned int)-2147467259;
    v6 = v25;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                           v6);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    v10 = *(const struct StoryboardInfo *(__fastcall **)(CWindowClose *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v10 == CWindowClose::GetStoryboardInfo )
    {
      StoryboardInfo = CWindowClose::GetStoryboardInfo(a2);
    }
    else if ( v10 == CLauncherDismiss::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a2);
    }
    else if ( v10 == CLauncherLaunch::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a2);
    }
    else if ( v10 == CFadeIn::GetStoryboardInfo )
    {
      StoryboardInfo = CFadeIn::GetStoryboardInfo(a2);
    }
    else
    {
      StoryboardInfo = v10(a2);
    }
    Blink = (int)i[37].Blink;
    v13 = 0LL;
    v14 = StoryboardInfo;
    if ( *((_DWORD *)StoryboardInfo + 1) )
    {
      v15 = (__int64)i[37].Blink & 0xFFF;
      do
      {
        if ( (*(_DWORD *)(*((_QWORD *)v14 + 1) + 4 * v13) & 0xFFF) == v15 )
        {
          Blink_low = (CTransitionVisualController *)LODWORD(i[37].Blink);
          if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
            LODWORD(i[37].Blink) = (unsigned int)Blink_low & (a4 | 0x2000000) | 0xFFF;
          if ( v7 )
          {
            CTransitionVisualController::_StopAnimations(Blink_low, (HWND *)i);
            if ( (Blink & 0x20100000) == 0x20100000 )
            {
              v18 = (HWND)i[2].Blink;
              v26 = 0LL;
              SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, v18);
              if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v20, SnapshotIndex, &v26) >= 0 )
              {
                if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28),
                        (HWND)i[2].Blink,
                        -1,
                        0) )
                  CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)i, (Blink & 0x10000000) != 0);
                v21 = v26;
                v22 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v26 + 3) + 32LL), v26);
                v5 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v22,
                    0x24Cu);
                  return v5;
                }
                v23 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
                v5 = v23;
                if ( v23 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v23,
                    0x24Du);
                  return v5;
                }
                inserted = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                             v21,
                             0LL,
                             0,
                             1);
                v5 = inserted;
                if ( inserted < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    inserted,
                    0x24Eu);
                  return v5;
                }
                v7 = a3;
              }
            }
            v15 = Blink & 0xFFF;
          }
        }
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *((_DWORD *)v14 + 1) );
    }
  }
  return v5;
}
