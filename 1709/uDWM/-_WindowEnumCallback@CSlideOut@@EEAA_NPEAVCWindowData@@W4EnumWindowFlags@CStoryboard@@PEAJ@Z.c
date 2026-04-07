/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180099CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004708 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800047A0 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180007428 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800074CC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000C014 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180025658 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800964C4 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800966C8 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180096918 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18009A734 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  struct CAnimationComponent *v5; // r14
  struct CAnimationComponent *v6; // rsi
  int *v7; // r13
  int v10; // r12d
  int v11; // eax
  __int64 v12; // rax
  HWND v13; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v15; // r13
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  struct CAnimationComponent *v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  struct tagRECT v28; // xmm0
  __int128 v29; // xmm6
  struct tagPOINT *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  char result; // al
  struct CAnimationComponent *v36; // [rsp+30h] [rbp-40h] BYREF
  struct CAnimationComponent *v37; // [rsp+38h] [rbp-38h] BYREF
  struct CAnimationComponent *v38; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v39; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  v36 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v7 = a4;
  if ( (a3 & 1) == 0 )
    goto LABEL_68;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v39);
  v10 = *(_DWORD *)(a2 + 600);
  if ( (v10 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 600) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_68;
      *(_DWORD *)(a2 + 600) |= 0x200000u;
      v33 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v39, 0, &v36);
      v4 = v33;
      if ( v33 >= 0 )
        *(_BYTE *)(*((_QWORD *)v36 + 5) + 976LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v33, 0x3BBu);
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(a2 + 600) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 600) |= 0x200000u;
      v32 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v4 = v32;
      if ( v32 >= 0 )
        *(_DWORD *)(a2 + 600) = v10;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v32, 0x3C6u);
      goto LABEL_68;
    }
    if ( (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 600) & 0xFFF) == 0x45 )
      {
        v19 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v39, 0, &v36);
        v4 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v19, 0x3D4u);
        goto LABEL_58;
      }
      if ( (*(_DWORD *)(a2 + 600) & 0xFFF) == 0x46 )
      {
        if ( (v10 & 0x1800000) == 0 )
          goto LABEL_68;
        v18 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v36);
        v4 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v18, 0x3CFu);
        goto LABEL_58;
      }
      if ( (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x57 )
      {
LABEL_63:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_68;
      }
    }
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
           *(HWND *)(a2 + 40),
           1)
      || ((v11 = *(_DWORD *)(a2 + 600) & 0xFFF, v11 == 42) || v11 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v12 = *((_QWORD *)a1 + 16);
      if ( !v12 )
        goto LABEL_35;
      v13 = *(HWND *)(v12 + 16);
      if ( v13 == *(HWND *)(a2 + 40) )
        goto LABEL_68;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           v13);
      v15 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 150) = *(_DWORD *)(a2 + 600) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 16) + 40LL) + 744LL) == 1.0 )
        {
          v16 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(unsigned int *)(a2 + 600));
          v17 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v16, &v36);
          v4 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0x377u);
            goto LABEL_58;
          }
          v20 = CSlide::_SlideWindowHorizontally(a1, v15, &v39, 0, 0LL, &v37);
          v4 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v20, 0x378u);
LABEL_28:
            v5 = v37;
LABEL_58:
            if ( v36 )
              CBaseObject::Release(v36);
            if ( v5 )
              CBaseObject::Release(v5);
            v7 = a4;
            goto LABEL_63;
          }
          v5 = v37;
        }
        else
        {
          v21 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v39, 0, 0LL, &v36);
          v4 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v21, 0x380u);
            goto LABEL_58;
          }
          v22 = CSlide::_SlideWindowHorizontally(a1, v15, &v39, 0, 0LL, &v37);
          v4 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v22, 0x381u);
            goto LABEL_28;
          }
          v5 = v37;
          *((_DWORD *)v37 + 14) = *((_DWORD *)v36 + 14) + 1;
        }
      }
      else
      {
LABEL_35:
        v23 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v39, 0, 0LL, &v36);
        v4 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v23, 0x38Bu);
          goto LABEL_58;
        }
        v24 = v36;
        CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v36 + 5), 1.0);
        *(_BYTE *)(*((_QWORD *)v24 + 5) + 969LL) = 1;
        if ( (*(_DWORD *)(a2 + 600) & 0xFFF) == 0x18 )
          *(_BYTE *)(*((_QWORD *)v24 + 5) + 976LL) = 1;
      }
      if ( v36 && *((_DWORD *)v36 + 17) != 2 )
        *((_DWORD *)v36 + 17) = 3;
      if ( v5 && *((_DWORD *)v5 + 17) != 2 )
        *((_DWORD *)v5 + 17) = 3;
      v25 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(_DWORD *)(a2 + 600) & 0xFFF);
      v26 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v25, &v38);
      v4 = v26;
      if ( v26 >= 0 )
      {
        v6 = v38;
        if ( v38 )
        {
          v27 = *((_QWORD *)v36 + 5);
          v28 = *(struct tagRECT *)(v27 + 856);
          v29 = *(_OWORD *)(v27 + 872);
          v30 = (struct tagPOINT *)*((_QWORD *)v38 + 5);
          v39 = v28;
          CAnimatedTransitionVisual::SetBeginRect(v30, &v39);
          v31 = *((_QWORD *)v6 + 5);
          *(_OWORD *)(v31 + 872) = v29;
          CVisual::SetDirtyFlags((CVisual *)(v31 + 8), 4096);
          *(_BYTE *)(*((_QWORD *)v6 + 5) + 987LL) = 1;
          *((_BYTE *)v6 + 74) = 1;
          if ( *((_DWORD *)v6 + 17) != 2 )
            *((_DWORD *)v6 + 17) = 1;
          *((_DWORD *)v36 + 14) = *((_DWORD *)v6 + 14) + 1;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v26, 0x3A1u);
        v6 = v38;
      }
      goto LABEL_58;
    }
  }
  else if ( v10 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
      *(const struct CTopLevelWindow **)(a2 + 400),
      1,
      1);
    v34 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v34, 0x3DDu);
  }
LABEL_68:
  result = 1;
  *v7 = v4;
  return result;
}
