/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800996D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800047A0 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800074CC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000C014 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180065FE8 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180066038 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x18008AE34 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800939EC (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800964C4 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800966C8 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180096918 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18009A734 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v6; // edi
  struct CAnimationComponent *v7; // rsi
  unsigned int v8; // r14d
  int v9; // eax
  struct tagRECT v10; // xmm0
  HWND v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // r13
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  struct tagPOINT *v19; // rcx
  __int128 v20; // xmm6
  __int64 v21; // rcx
  int v22; // r14d
  int v23; // eax
  CBaseObject *v24; // r14
  double v25; // xmm6_8
  RECT v26; // xmm1
  LONG *TaggedWindow; // rax
  LONG bottom; // ebx
  int v29; // ecx
  int v30; // eax
  __m128i v31; // xmm0
  int v32; // eax
  struct CAnimationComponent **v33; // r8
  struct tagSIZE *v34; // rdx
  int v35; // eax
  int v36; // eax
  char result; // al
  CBaseObject *v38; // [rsp+38h] [rbp-79h] BYREF
  struct tagSIZE v39; // [rsp+40h] [rbp-71h] BYREF
  struct CAnimationComponent *v40; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v41; // [rsp+50h] [rbp-61h] BYREF
  int *v42; // [rsp+60h] [rbp-51h]
  struct tagRECT rc; // [rsp+68h] [rbp-49h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-39h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-29h] BYREF
  RECT v46; // [rsp+98h] [rbp-19h] BYREF

  v42 = a4;
  v38 = 0LL;
  *(double *)&v40 = 0.0;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_70;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v41);
  v8 = *(_DWORD *)(a2 + 600) & 0xFFF;
  if ( v8 )
  {
    switch ( *(_DWORD *)(a2 + 600) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
          goto LABEL_70;
        *(_DWORD *)(a2 + 600) |= 0x200000u;
        v35 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v41, 1, &v38);
        v6 = v35;
        if ( v35 >= 0 )
          *(_BYTE *)(*((_QWORD *)v38 + 5) + 976LL) = 1;
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v35, 0x29Cu);
        goto LABEL_63;
      case 11:
        *(_DWORD *)(a2 + 600) |= 0x200000u;
        break;
      case 24:
      case 42:
LABEL_11:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
        {
          v9 = *(_DWORD *)(a2 + 600) & 0xFFF;
          if ( v9 != 42 && v9 != 87 )
            goto LABEL_70;
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
            goto LABEL_70;
        }
        v10 = *(struct tagRECT *)(a2 + 48);
        v11 = *(HWND *)(a2 + 40);
        *(_QWORD *)&rcSrc2.left = 0LL;
        *(double *)&v39 = 0.0;
        rc = v10;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                    v11,
                    (struct tagPOINT *)&rcSrc2) >= 0 )
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v39) >= 0 )
        {
          rc.right = v39.cx + rc.left;
          rc.bottom = v39.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v41);
        v12 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v41, 1, (__m128i *)&rc, &v38);
        v6 = v12;
        if ( v12 >= 0 )
        {
          v15 = v38;
          *(_BYTE *)(*((_QWORD *)v38 + 5) + 976LL) = 1;
          v16 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8);
          v17 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v16, &v40);
          v6 = v17;
          if ( v17 >= 0 )
          {
            v7 = v40;
            if ( *(double *)&v40 != 0.0 )
            {
              v18 = *((_QWORD *)v15 + 5);
              v19 = (struct tagPOINT *)*((_QWORD *)v40 + 5);
              v20 = *(_OWORD *)(v18 + 872);
              v46 = *(RECT *)(v18 + 856);
              CAnimatedTransitionVisual::SetBeginRect(v19, &v46);
              v21 = *((_QWORD *)v7 + 5);
              *(_OWORD *)(v21 + 872) = v20;
              CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
              *(_BYTE *)(*((_QWORD *)v7 + 5) + 987LL) = 1;
              *((_BYTE *)v7 + 74) = 1;
              if ( *((_DWORD *)v7 + 17) != 2 )
                *((_DWORD *)v7 + 17) = 1;
              *((_DWORD *)v38 + 14) = *((_DWORD *)v7 + 14) + 1;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0x27Au);
            v7 = v40;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x277u);
        }
        goto LABEL_63;
      case 60:
        break;
      default:
        switch ( *(_DWORD *)(a2 + 600) & 0xFFF )
        {
          case 'E':
            v14 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v41, 1, &v38);
            v6 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v14,
                0x292u);
            break;
          case 'F':
            v13 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v38);
            v6 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v13,
                0x28Eu);
            break;
          case 'W':
            goto LABEL_11;
          default:
            goto LABEL_70;
        }
LABEL_63:
        if ( v38 )
          CBaseObject::Release(v38);
        if ( v7 )
          CBaseObject::Release(v7);
        goto LABEL_70;
    }
    v22 = *(_DWORD *)(a2 + 600);
    v23 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v38);
    v6 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v23, 0x2AAu);
      goto LABEL_63;
    }
    *(_DWORD *)(a2 + 600) = v22;
    if ( (v22 & 0xFFF) != 0x3C )
      goto LABEL_63;
    v24 = v38;
    v25 = 0.0;
    *(double *)&v40 = 0.0;
    *(double *)&v39 = 0.0;
    *(_BYTE *)(*((_QWORD *)v38 + 5) + 976LL) = 1;
    v46 = *(RECT *)(*((_QWORD *)v24 + 5) + 856LL);
    v26 = *(RECT *)(*((_QWORD *)v24 + 5) + 872LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v26;
    *(_QWORD *)&rc.right = 0LL;
    *(_QWORD *)&rcSrc2.left = 0LL;
    *(_QWORD *)&rcSrc2.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v41.bottom;
    if ( TaggedWindow )
    {
      rcSrc2.left = TaggedWindow[12];
      v29 = 0;
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v29 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v41.bottom - v29;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v41.bottom;
    }
    if ( v46.bottom <= rcSrc1.bottom )
    {
      if ( v46.bottom >= rcSrc1.bottom )
        goto LABEL_55;
      if ( IntersectRect(&rc, &v46, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v32 = rc.bottom - rc.top;
        if ( rc.bottom - rc.top < 0 )
          v32 = 0;
        v25 = (double)-v32;
        *(double *)&v39 = v25;
      }
      v31 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v25 = (double)(v41.bottom - v46.bottom);
      *(double *)&v39 = v25;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
        goto LABEL_55;
      v30 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v30 = 0;
      v31 = _mm_cvtsi32_si128(-v30);
    }
    COERCE_DOUBLE(v40 = *(struct CAnimationComponent **)&_mm_cvtepi32_pd(v31).m128d_f64[0]);
    if ( *(double *)&v40 != 0.0 )
    {
      v33 = &v40;
LABEL_56:
      v34 = 0LL;
      if ( v25 != 0.0 )
        v34 = &v39;
      CAnimatedTransitionVisual::SetChopPosition(
        *((CAnimatedTransitionVisual **)v24 + 5),
        (const double *)v34,
        (const double *)v33);
      goto LABEL_63;
    }
LABEL_55:
    v33 = 0LL;
    goto LABEL_56;
  }
  if ( *(int *)(a2 + 600) < 0 )
  {
    v36 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v6 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v36, 0x2EDu);
  }
LABEL_70:
  result = 1;
  *v42 = v6;
  return result;
}
