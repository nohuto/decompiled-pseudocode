/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180092210
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180008E0C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180097410 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800981E0 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007948 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000A924 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000C988 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000E06C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180017098 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002EF9C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800378B0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@@@Z @ 0x18008F7E8 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@.c)
 *     Template_pddddddd @ 0x1800936F4 (Template_pddddddd.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x18009D2B4 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009D7A8 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x18009D818 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009DF38 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        bool a6,
        struct CStoryboard *a7,
        struct CAnimationComponent **a8)
{
  unsigned int v10; // esi
  struct CAnimatedTransitionVisual *v11; // rbx
  __int64 v14; // rax
  char v15; // al
  RECT v16; // xmm0
  unsigned int v17; // edi
  int v18; // eax
  HWND ShellWindowForDesktop; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  int DesktopThumbnail; // eax
  CBaseObject *v23; // r14
  CBaseObject *v24; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  CBaseObject *v31; // rbx
  RECT v32; // xmm0
  int v33; // ecx
  bool v34; // sf
  int v35; // r9d
  __m128i v36; // xmm1
  int v37; // ebx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // edx
  struct CAnimatedTransitionVisual *v44; // r14
  int v45; // edx
  int v46; // ecx
  __int128 v47; // xmm0
  unsigned int v49; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h]
  struct CAnimatedTransitionVisual *v52; // [rsp+58h] [rbp-A8h] BYREF
  CBaseObject *v53; // [rsp+60h] [rbp-A0h] BYREF
  CBaseObject *v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h]
  struct tagRECT v56; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+90h] [rbp-70h]
  unsigned __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  CBaseObject *v59; // [rsp+A0h] [rbp-60h] BYREF
  CBaseObject *v60; // [rsp+A8h] [rbp-58h] BYREF
  struct CStoryboard *v61; // [rsp+B0h] [rbp-50h]
  struct CAnimationComponent **v62; // [rsp+B8h] [rbp-48h]
  struct tagRECT v63; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v64; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 150) & 0xFFF;
  v62 = a8;
  v53 = 0LL;
  v11 = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v14 = *(_QWORD *)a7;
  v61 = a7;
  v15 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v14 + 96))(a7, v10);
  v16 = *a4;
  v57 = v15 & 0x10;
  rc2 = v16;
  if ( (v15 & 0x10) != 0 )
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
  if ( !(unsigned int)GetDesktopID(1LL, &v58) )
  {
    v49 = 1420;
LABEL_5:
    v17 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, -2147467259, v49);
    return v17;
  }
  v18 = CTransitionVisualController::_SetDesktopId(this, v58);
  v17 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v18, 0x590u);
    return v17;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                            v58);
  if ( !ShellWindowForDesktop )
  {
    v49 = 1429;
    goto LABEL_5;
  }
  v20 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v20 )
    v21 = CAnimationComponent::CAnimationComponent(v20, (__int64)ShellWindowForDesktop, v10, a3, (__int64)a7);
  else
    v21 = 0LL;
  if ( !v21 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x599u);
    return v17;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v53);
  v17 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x59Bu);
LABEL_76:
    v23 = v53;
    goto LABEL_77;
  }
  v23 = v53;
  v24 = v53;
  *((_QWORD *)v53 + 34) = v58;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v24);
  v17 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x59Cu);
    goto LABEL_77;
  }
  v64 = rc2;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v23, &v64, &v54);
  v17 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail >= 0 )
  {
    v27 = CAnimatedTransitionVisual::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v52);
    v17 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v27, 0x59Fu);
LABEL_25:
      v11 = v52;
      goto LABEL_77;
    }
    if ( a5 )
      *(_BYTE *)(v21 + 67) = 1;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v29 = CDesktopThumbnailCVI::CreateBrush(v54, &v59, &v60, 0LL, &rc2);
      v17 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v29, 0x5ACu);
        goto LABEL_25;
      }
      v11 = v52;
      v30 = CAnimatedTransitionVisual::SetCVIBrush(v52, v59, v60);
      v17 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v30, 0x5ADu);
        goto LABEL_77;
      }
    }
    else
    {
      v11 = v52;
      v28 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v52, v23, 1, &rc2);
      v17 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v28, 0x5A8u);
        goto LABEL_77;
      }
    }
    *((_DWORD *)v11 + 184) = *((_DWORD *)v61 + 18);
    *((_DWORD *)v11 + 185) = a3;
    *((_BYTE *)v11 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v21 + 40) = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 4);
    v31 = v54;
    *(_QWORD *)(v21 + 48) = v54;
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
      v31 = v54;
    }
    if ( (*((_DWORD *)a2 + 150) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 604), &rc2)
      || (*((_DWORD *)a2 + 150) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 636), &rc2) )
    {
      v32 = rc2;
      v56 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v56);
      v32 = v56;
    }
    *(RECT *)(v21 + 88) = v32;
    if ( a6 )
    {
      v33 = rc2.right - rc2.left;
      if ( rc2.right - rc2.left < 0 )
        v33 = 0;
      v55 = 0LL;
      v35 = rc2.bottom - rc2.top;
      v34 = rc2.bottom - rc2.top < 0;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v63);
      LODWORD(v55) = v56.left - v63.left;
      v33 = v56.right - v56.left;
      HIDWORD(v55) = v56.top - v63.top;
      if ( v56.right - v56.left < 0 )
        v33 = 0;
      v35 = v56.bottom - v56.top;
      v34 = v56.bottom - v56.top < 0;
    }
    v36 = *(__m128i *)((char *)v31 + 40);
    if ( v34 )
      v35 = 0;
    v51 = __PAIR64__(v35, v33);
    v66 = *(_OWORD *)((char *)v31 + 40);
    v37 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8)) - _mm_cvtsi128_si32(v36);
    v38 = v37;
    if ( v37 < 0 )
      v38 = 0;
    if ( v33 > v38 )
    {
      v39 = v37;
      if ( v37 < 0 )
        v39 = 0;
      v40 = MulDiv(v35, v39, v33);
      v33 = v37;
      v35 = v40;
      HIDWORD(v51) = v40;
      if ( v37 < 0 )
        v33 = 0;
      LODWORD(v51) = v33;
    }
    v41 = HIDWORD(v66) - DWORD1(v66);
    v42 = HIDWORD(v66) - DWORD1(v66);
    if ( HIDWORD(v66) - DWORD1(v66) < 0 )
      v42 = 0;
    if ( v35 > v42 )
    {
      v43 = HIDWORD(v66) - DWORD1(v66);
      if ( v41 < 0 )
        v43 = 0;
      LODWORD(v51) = MulDiv(v33, v43, v35);
      if ( v41 < 0 )
        v41 = 0;
      HIDWORD(v51) = v41;
    }
    v44 = v52;
    *((_QWORD *)v52 + 118) = v55;
    *((_QWORD *)v44 + 119) = v51;
    if ( v57 )
    {
      *(_OWORD *)((char *)v44 + 888) = *(_OWORD *)((char *)a2 + 604);
      *(_OWORD *)((char *)v44 + 824) = *(_OWORD *)((char *)a2 + 604);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v44 + 8), 4096);
      *(_OWORD *)((char *)v44 + 904) = *(_OWORD *)((char *)a2 + 636);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v44 + 8), 4096);
      *((_BYTE *)v44 + 986) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 668)) )
    {
      v47 = *(_OWORD *)((char *)a2 + 668);
      *(_DWORD *)(v21 + 68) = 2;
      *(_OWORD *)(v21 + 104) = v47;
    }
    *v62 = (struct CAnimationComponent *)v21;
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddddd(
        v46,
        v45,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v61 + 18),
        *((_DWORD *)a2 + 150),
        1,
        a4->left,
        a4->top,
        a4->bottom,
        a4->right);
    v11 = v52;
    goto LABEL_76;
  }
  MilInstrumentationCheckHR(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    PerMonitorDesktopThumbnail,
    0x59Du);
LABEL_77:
  CBaseObject::Release((CBaseObject *)v21);
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v54 )
    CBaseObject::Release(v54);
  if ( v11 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v11 + 8));
  if ( v59 )
    CBaseObject::Release(v59);
  if ( v60 )
    CBaseObject::Release(v60);
  return v17;
}
