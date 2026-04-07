/*
 * XREFs of ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009BE70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800022E0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180037B2C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800965E0 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x180099190 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800991C0 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CShrinkPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  struct CAnimationComponent *v4; // rbx
  int v8; // r14d
  int PVLTarget; // eax
  int v10; // eax
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  CPanelAnimation *v16; // rcx
  int v17; // eax
  LONG v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int128 v22; // xmm0
  char result; // al
  struct tagRECT v24; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-20h] BYREF
  struct CAnimationComponent *v26; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  v8 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x29 )
      goto LABEL_29;
    v22 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v22;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x28 )
  {
    if ( (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x29
      || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
            *(HWND *)(a2 + 40),
            0) )
    {
      goto LABEL_29;
    }
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            -1,
            1,
            &v26);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x5EDu);
LABEL_12:
      v4 = v26;
      goto LABEL_27;
    }
    v4 = v26;
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v26 + 5), 1.0);
    v12 = (struct tagPOINT *)*((_QWORD *)v4 + 5);
    v25 = *(struct tagRECT *)((char *)v4 + 88);
    v11 = v25;
    CAnimatedTransitionVisual::SetBeginRect(v12, &v25);
    v13 = *((_QWORD *)v4 + 5);
    *(struct tagRECT *)(v13 + 872) = v11;
    goto LABEL_21;
  }
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
          *(HWND *)(a2 + 40),
          1) )
    goto LABEL_29;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v14 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
    v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v14,
            0LL,
            0LL,
            -1,
            1,
            &v26);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x5CFu);
      goto LABEL_12;
    }
    v4 = v26;
    v25 = *(struct tagRECT *)((char *)v26 + 88);
    v24 = v25;
    if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v16, &v24, (const struct tagRECT *)(a1 + 132)) )
    {
      v17 = v25.right - v25.left;
      v18 = *(_DWORD *)(a1 + 132);
      if ( v25.right - v25.left < 0 )
        v17 = 0;
      v24.right = v18 + v17;
    }
    else
    {
      v19 = v25.right - v25.left;
      v20 = *(_DWORD *)(a1 + 140);
      if ( v25.right - v25.left < 0 )
        v19 = 0;
      v24.right = *(_DWORD *)(a1 + 140);
      v18 = v20 - v19;
    }
    v24.left = v18;
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v4 + 5), &v25);
    v13 = *((_QWORD *)v4 + 5);
    *(struct tagRECT *)(v13 + 872) = v24;
LABEL_21:
    CVisual::SetDirtyFlags((CVisual *)(v13 + 8), 4096);
LABEL_27:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_29;
  }
  v21 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 1.0, 0LL);
  v8 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0x5E5u);
LABEL_29:
  result = 1;
  *a4 = v8;
  return result;
}
