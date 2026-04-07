/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800014C8 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180001F44 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180001F90 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800022E0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180005900 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180005FDC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000E06C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x18008F854 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180096B5C (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800991C0 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800993C4 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v6; // edi
  struct CAnimationComponent *v7; // rsi
  unsigned int v8; // r14d
  struct tagRECT v9; // xmm0
  HWND v10; // rdx
  int v11; // eax
  struct CAnimationComponent *v12; // r13
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  CAnimatedTransitionVisual *v16; // rcx
  __int128 v17; // xmm6
  __int64 v18; // rcx
  char result; // al
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  struct CAnimationComponent *v25; // r14
  double v26; // xmm6_8
  RECT v27; // xmm1
  LONG *TaggedWindow; // rax
  unsigned int v29; // r9d
  LONG bottom; // ebx
  int v31; // ecx
  int v32; // eax
  __m128i v33; // xmm0
  int v34; // eax
  struct CAnimationComponent **v35; // r8
  tagSIZE *v36; // rdx
  int v37; // eax
  int v38; // eax
  struct CAnimationComponent *v39; // [rsp+38h] [rbp-79h] BYREF
  tagSIZE v40; // [rsp+40h] [rbp-71h] BYREF
  struct CAnimationComponent *v41; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v42; // [rsp+50h] [rbp-61h] BYREF
  int *v43; // [rsp+60h] [rbp-51h]
  struct tagRECT rc; // [rsp+68h] [rbp-49h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-39h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-29h] BYREF
  RECT v47; // [rsp+98h] [rbp-19h] BYREF

  v43 = a4;
  v39 = 0LL;
  *(double *)&v41 = 0.0;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_22;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v42);
  v8 = *(_DWORD *)(a2 + 600) & 0xFFF;
  if ( v8 )
  {
    switch ( *(_DWORD *)(a2 + 600) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
          goto LABEL_22;
        *(_DWORD *)(a2 + 600) |= 0x200000u;
        v37 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v42, 1, &v39);
        v6 = v37;
        if ( v37 >= 0 )
          *(_BYTE *)(*((_QWORD *)v39 + 5) + 976LL) = 1;
        else
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v37, 0x29Cu);
        goto LABEL_18;
      case 11:
        *(_DWORD *)(a2 + 600) |= 0x200000u;
        break;
      case 24:
      case 42:
LABEL_7:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
        {
          v22 = *(_DWORD *)(a2 + 600) & 0xFFF;
          if ( v22 != 42 && v22 != 87 )
            goto LABEL_22;
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
            goto LABEL_22;
        }
        v9 = *(struct tagRECT *)(a2 + 48);
        v10 = *(HWND *)(a2 + 40);
        *(_QWORD *)&rcSrc2.left = 0LL;
        *(double *)&v40 = 0.0;
        rc = v9;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                    v10,
                    (struct tagPOINT *)&rcSrc2) >= 0 )
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v40) >= 0 )
        {
          rc.right = v40.cx + rc.left;
          rc.bottom = v40.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v42);
        v11 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v42, 1, &rc, &v39);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v11, 0x277u);
        }
        else
        {
          v12 = v39;
          *(_BYTE *)(*((_QWORD *)v39 + 5) + 976LL) = 1;
          v13 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8);
          v14 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v13, &v41);
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v14, 0x27Au);
            v7 = v41;
          }
          else
          {
            v7 = v41;
            if ( *(double *)&v41 != 0.0 )
            {
              v15 = *((_QWORD *)v12 + 5);
              v16 = (CAnimatedTransitionVisual *)*((_QWORD *)v41 + 5);
              v17 = *(_OWORD *)(v15 + 872);
              v47 = *(RECT *)(v15 + 856);
              CAnimatedTransitionVisual::SetBeginRect(v16, &v47);
              v18 = *((_QWORD *)v7 + 5);
              *(_OWORD *)(v18 + 872) = v17;
              CVisual::SetDirtyFlags((CVisual *)(v18 + 8), 0x1000u);
              *(_BYTE *)(*((_QWORD *)v7 + 5) + 987LL) = 1;
              *((_BYTE *)v7 + 74) = 1;
              if ( *((_DWORD *)v7 + 17) != 2 )
                *((_DWORD *)v7 + 17) = 1;
              *((_DWORD *)v39 + 14) = *((_DWORD *)v7 + 14) + 1;
            }
          }
        }
        goto LABEL_18;
      case 60:
        break;
      default:
        switch ( *(_DWORD *)(a2 + 600) & 0xFFF )
        {
          case 'E':
            v21 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v42, 1, &v39);
            v6 = v21;
            if ( v21 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v21, 0x292u);
            break;
          case 'F':
            v20 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v39);
            v6 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v20, 0x28Eu);
            break;
          case 'W':
            goto LABEL_7;
          default:
            goto LABEL_22;
        }
LABEL_18:
        if ( v39 )
          CBaseObject::Release(v39);
        if ( v7 )
          CBaseObject::Release(v7);
        goto LABEL_22;
    }
    v23 = *(_DWORD *)(a2 + 600);
    v24 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v39);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x2AAu);
      goto LABEL_18;
    }
    *(_DWORD *)(a2 + 600) = v23;
    if ( (v23 & 0xFFF) != 0x3C )
      goto LABEL_18;
    v25 = v39;
    v26 = 0.0;
    *(double *)&v41 = 0.0;
    *(double *)&v40 = 0.0;
    *(_BYTE *)(*((_QWORD *)v39 + 5) + 976LL) = 1;
    v47 = *(RECT *)(*((_QWORD *)v25 + 5) + 856LL);
    v27 = *(RECT *)(*((_QWORD *)v25 + 5) + 872LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v27;
    *(_QWORD *)&rc.right = 0LL;
    *(_QWORD *)&rcSrc2.left = 0LL;
    *(_QWORD *)&rcSrc2.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v42.bottom;
    if ( TaggedWindow )
    {
      rcSrc2.left = TaggedWindow[12];
      v31 = 0;
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v31 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v42.bottom - v31;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v42.bottom;
    }
    if ( v47.bottom <= rcSrc1.bottom )
    {
      if ( v47.bottom >= rcSrc1.bottom )
        goto LABEL_61;
      if ( IntersectRect(&rc, &v47, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v34 = rc.bottom - rc.top;
        if ( rc.bottom - rc.top < 0 )
          v34 = 0;
        v26 = (double)-v34;
        *(double *)&v40 = v26;
      }
      v33 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v26 = (double)(v42.bottom - v47.bottom);
      *(double *)&v40 = v26;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
        goto LABEL_61;
      v32 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v32 = 0;
      v33 = _mm_cvtsi32_si128(-v32);
    }
    COERCE_DOUBLE(v41 = *(struct CAnimationComponent **)&_mm_cvtepi32_pd(v33).m128d_f64[0]);
    if ( *(double *)&v41 != 0.0 )
    {
      v35 = &v41;
LABEL_62:
      v36 = 0LL;
      if ( v26 != 0.0 )
        v36 = &v40;
      CAnimatedTransitionVisual::SetChopPosition(
        *((CAnimatedTransitionVisual **)v25 + 5),
        (const double *)v36,
        (const double *)v35,
        v29);
      goto LABEL_18;
    }
LABEL_61:
    v35 = 0LL;
    goto LABEL_62;
  }
  if ( *(int *)(a2 + 600) < 0 )
  {
    v38 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v6 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v38, 0x2EDu);
  }
LABEL_22:
  result = 1;
  *v43 = v6;
  return result;
}
