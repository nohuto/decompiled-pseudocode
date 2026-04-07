/*
 * XREFs of ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180004820 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093330 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x180096494 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800964C4 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18009A734 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 */

char __fastcall CGrowPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  struct tagPOINT **v4; // rbx
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  CPanelAnimation *v11; // rcx
  int v12; // eax
  LONG v13; // ecx
  int v14; // eax
  int v15; // ecx
  struct tagPOINT *v16; // rcx
  int v17; // eax
  int PVLTarget; // eax
  int v19; // eax
  struct tagRECT v20; // xmm6
  struct tagPOINT *v21; // rcx
  struct tagPOINT *v22; // rcx
  __int128 v23; // xmm0
  char result; // al
  struct tagRECT v25; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-20h] BYREF
  struct CAnimationComponent *v27; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0LL;
  v27 = 0LL;
  v8 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x28 )
      goto LABEL_31;
    v23 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v23;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(a2 + 600) & 0xFFF) == 0x28 )
  {
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
            *(HWND *)(a2 + 40),
            1) )
      goto LABEL_31;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
    v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            -1,
            1,
            &v27);
    v8 = v19;
    if ( v19 >= 0 )
    {
      v4 = (struct tagPOINT **)v27;
      if ( *(_BYTE *)(a1 + 128) )
        v20 = *(struct tagRECT *)(a1 + 132);
      else
        v20 = *(struct tagRECT *)((char *)v27 + 88);
      v21 = (struct tagPOINT *)*((_QWORD *)v27 + 5);
      v26 = v20;
      CAnimatedTransitionVisual::SetBeginRect(v21, &v26);
      v22 = v4[5];
      *(struct tagRECT *)&v22[109].x = v20;
      CVisual::SetDirtyFlags((CVisual *)&v22[1], 4096);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v19, 0x574u);
LABEL_8:
    v4 = (struct tagPOINT **)v27;
LABEL_29:
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x29
    || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
          *(HWND *)(a2 + 40),
          0) )
  {
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 128) )
  {
    v9 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v9,
            0LL,
            0LL,
            -1,
            1,
            &v27);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v4 = (struct tagPOINT **)v27;
      v25 = *(struct tagRECT *)((char *)v27 + 88);
      v26 = v25;
      if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v11, &v25, (const struct tagRECT *)(a1 + 132)) )
      {
        v12 = v25.right - v25.left;
        v13 = *(_DWORD *)(a1 + 132);
        if ( v25.right - v25.left < 0 )
          v12 = 0;
        v26.right = v13 + v12;
      }
      else
      {
        v14 = v25.right - v25.left;
        v15 = *(_DWORD *)(a1 + 140);
        if ( v25.right - v25.left < 0 )
          v14 = 0;
        v26.right = *(_DWORD *)(a1 + 140);
        v13 = v15 - v14;
      }
      v26.left = v13;
      CAnimatedTransitionVisual::SetBeginRect(v4[5], &v26);
      v16 = v4[5];
      *(struct tagRECT *)&v16[109].x = v25;
      CVisual::SetDirtyFlags((CVisual *)&v16[1], 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v4[5], 0.0);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v10, 0x555u);
    goto LABEL_8;
  }
  v17 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 0.0, 0LL);
  v8 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0x56Cu);
LABEL_31:
  result = 1;
  *a4 = v8;
  return result;
}
