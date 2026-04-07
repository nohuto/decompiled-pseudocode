/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1930
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180001C1C (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180005E4C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000A314 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004849C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800484E8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x18006C93C (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x180093F14 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x18009C0DC (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x18009E800 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18009EA04 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009EC58 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  struct CAnimationComponent *v5; // r14
  int v8; // esi
  unsigned int v9; // r12d
  int v10; // eax
  struct tagRECT v11; // xmm0
  HWND v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rsi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  struct tagPOINT *v20; // rcx
  __int128 v21; // xmm6
  __int64 v22; // rcx
  int v23; // eax
  CBaseObject *v24; // rsi
  double v25; // xmm8_8
  RECT v26; // xmm1
  LONG *TaggedWindow; // rax
  LONG bottom; // edi
  int v29; // ecx
  double v30; // xmm6_8
  int v31; // ecx
  __m128i v32; // xmm6
  int v33; // ecx
  struct CAnimationComponent **v34; // r8
  struct tagSIZE *v35; // rdx
  int v36; // eax
  int v37; // eax
  char result; // al
  CBaseObject *v39; // [rsp+38h] [rbp-89h] BYREF
  struct tagSIZE v40; // [rsp+40h] [rbp-81h] BYREF
  struct CAnimationComponent *v41; // [rsp+48h] [rbp-79h] BYREF
  struct tagRECT v42; // [rsp+50h] [rbp-71h] BYREF
  int *v43; // [rsp+60h] [rbp-61h]
  struct tagRECT rc; // [rsp+68h] [rbp-59h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-39h] BYREF
  RECT v47; // [rsp+98h] [rbp-29h] BYREF

  v4 = 0;
  v43 = a4;
  v39 = 0LL;
  v5 = 0LL;
  v41 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_72;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v42);
  v8 = *(_DWORD *)(a2 + 600);
  v9 = v8 & 0xFFF;
  if ( (v8 & 0xFFF) != 0 )
  {
    switch ( *(_DWORD *)(a2 + 600) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
          goto LABEL_72;
        *(_DWORD *)(a2 + 600) |= 0x200000u;
        v36 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v42, 1, &v39);
        v4 = v36;
        if ( v36 >= 0 )
          *(_BYTE *)(*((_QWORD *)v39 + 5) + 976LL) = 1;
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v36, 0x29Cu);
        goto LABEL_65;
      case 11:
        v8 |= 0x200000u;
        *(_DWORD *)(a2 + 600) = v8;
        break;
      case 24:
      case 42:
LABEL_11:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
        {
          v10 = *(_DWORD *)(a2 + 600) & 0xFFF;
          if ( v10 != 42 && v10 != 87 )
            goto LABEL_72;
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
            goto LABEL_72;
        }
        v11 = *(struct tagRECT *)(a2 + 48);
        v12 = *(HWND *)(a2 + 40);
        *(_QWORD *)&rcSrc2.left = 0LL;
        *(double *)&v40 = 0.0;
        rc = v11;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                    v12,
                    (struct tagPOINT *)&rcSrc2) >= 0 )
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v40) >= 0 )
        {
          rc.right = v40.cx + rc.left;
          rc.bottom = v40.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v42);
        v13 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v42, 1, (__m128i *)&rc, &v39);
        v4 = v13;
        if ( v13 >= 0 )
        {
          v16 = v39;
          *(_BYTE *)(*((_QWORD *)v39 + 5) + 976LL) = 1;
          v17 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v9);
          v18 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v17, &v41);
          v4 = v18;
          if ( v18 >= 0 )
          {
            v5 = v41;
            if ( v41 )
            {
              v19 = *((_QWORD *)v16 + 5);
              v20 = (struct tagPOINT *)*((_QWORD *)v41 + 5);
              v21 = *(_OWORD *)(v19 + 872);
              v47 = *(RECT *)(v19 + 856);
              CAnimatedTransitionVisual::SetBeginRect(v20, &v47);
              v22 = *((_QWORD *)v5 + 5);
              *(_OWORD *)(v22 + 872) = v21;
              CVisual::SetDirtyFlags((CVisual *)(v22 + 8), 4096);
              *(_BYTE *)(*((_QWORD *)v5 + 5) + 987LL) = 1;
              *((_BYTE *)v5 + 74) = 1;
              if ( *((_DWORD *)v5 + 17) != 2 )
                *((_DWORD *)v5 + 17) = 1;
              *((_DWORD *)v39 + 14) = *((_DWORD *)v5 + 14) + 1;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v18,
              0x27Au);
            v5 = v41;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x277u);
        }
        goto LABEL_65;
      case 60:
        break;
      default:
        switch ( *(_DWORD *)(a2 + 600) & 0xFFF )
        {
          case 'E':
            v15 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v42, 1, &v39);
            v4 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v15,
                0x292u);
            break;
          case 'F':
            v14 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v39);
            v4 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v14,
                0x28Eu);
            break;
          case 'W':
            goto LABEL_11;
          default:
            goto LABEL_72;
        }
LABEL_65:
        if ( v39 )
          CBaseObject::Release(v39);
        if ( v5 )
          CBaseObject::Release(v5);
        goto LABEL_72;
    }
    v23 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v39);
    v4 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v23, 0x2AAu);
      goto LABEL_65;
    }
    *(_DWORD *)(a2 + 600) = v8;
    if ( (v8 & 0xFFF) != 0x3C )
      goto LABEL_65;
    v24 = v39;
    v25 = 0.0;
    v41 = 0LL;
    *(double *)&v40 = 0.0;
    *(_BYTE *)(*((_QWORD *)v39 + 5) + 976LL) = 1;
    v47 = *(RECT *)(*((_QWORD *)v24 + 5) + 856LL);
    v26 = *(RECT *)(*((_QWORD *)v24 + 5) + 872LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v26;
    *(_QWORD *)&rc.right = 0LL;
    *(_QWORD *)&rcSrc2.left = 0LL;
    *(_QWORD *)&rcSrc2.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v42.bottom;
    if ( TaggedWindow )
    {
      rcSrc2.left = TaggedWindow[12];
      v29 = 0;
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v29 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v42.bottom - v29;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v42.bottom;
    }
    if ( v47.bottom <= rcSrc1.bottom )
    {
      if ( v47.bottom >= rcSrc1.bottom )
        goto LABEL_56;
      if ( IntersectRect(&rc, &v47, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v33 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v33 = rc.bottom - rc.top;
        v25 = (double)-v33;
        *(double *)&v40 = v25;
      }
      v32 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v30 = 0.0;
      v25 = (double)(v42.bottom - v47.bottom);
      *(double *)&v40 = v25;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
      {
LABEL_54:
        if ( v30 != 0.0 )
        {
          v34 = &v41;
LABEL_57:
          if ( v25 == 0.0 )
            v35 = 0LL;
          else
            v35 = &v40;
          CAnimatedTransitionVisual::SetChopPosition(
            *((CAnimatedTransitionVisual **)v24 + 5),
            (const double *)v35,
            (const double *)v34);
          goto LABEL_65;
        }
LABEL_56:
        v34 = 0LL;
        goto LABEL_57;
      }
      v31 = 0;
      if ( rc.bottom - rc.top >= 0 )
        v31 = rc.bottom - rc.top;
      v32 = _mm_cvtsi32_si128(-v31);
    }
    *(_QWORD *)&v30 = *(_OWORD *)&_mm_cvtepi32_pd(v32);
    v41 = *(struct CAnimationComponent **)&v30;
    goto LABEL_54;
  }
  if ( v8 < 0 )
  {
    v37 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v37, 0x2EDu);
  }
LABEL_72:
  result = 1;
  *v43 = v4;
  return result;
}
