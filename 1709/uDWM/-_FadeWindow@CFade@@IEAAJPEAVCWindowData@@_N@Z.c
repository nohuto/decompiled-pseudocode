/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18009581C
 * Callers:
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098A20 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098CE0 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098D50 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180004820 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800074CC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800074E8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180007608 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18008F144 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x180093A4C (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18009A734 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  bool IsWindowTrackedAndCloakChanged; // r14
  int v7; // eax
  char IsLauncherShownAboveWindow; // al
  bool v9; // dl
  bool v10; // al
  float v11; // xmm7_4
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  int v15; // eax
  struct tagPOINT **v16; // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct tagRECT *v20; // rbx
  struct tagRECT v21; // xmm6
  struct tagPOINT *v22; // rcx
  struct tagPOINT *v23; // rcx
  struct CAnimationComponent *v25; // [rsp+58h] [rbp-29h] BYREF
  CImmersiveState *v26; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  if ( (*((_DWORD *)a2 + 150) & 0x100000) != 0 )
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 596) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  else
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 28)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 != 1);
  v7 = CImmersiveState::Create(&v26, *((_QWORD *)a2 + 15));
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v7, 0x1E6u);
    goto LABEL_35;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v26, (const struct tagRECT *)a2);
  v9 = 0;
  if ( !IsLauncherShownAboveWindow )
    v9 = IsWindowTrackedAndCloakChanged;
  v10 = v9;
  if ( !a3 && v9 )
  {
    if ( !CStoryboard::HasAnimatingOwnerWindow((CStoryboard *)IsWindowTrackedAndCloakChanged, a2) )
      goto LABEL_18;
    v10 = 0;
  }
  if ( !v10 )
    goto LABEL_35;
  if ( a3 )
  {
    v11 = 0.0;
    goto LABEL_19;
  }
LABEL_18:
  v11 = FLOAT_0_99000001;
LABEL_19:
  if ( (*((_DWORD *)a2 + 150) & 0x20000) == 0 )
  {
    v17 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 88LL))(this);
    v18 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v17, 0LL, 0LL, -1, 1, &v25);
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v18, 0x209u);
      goto LABEL_22;
    }
    v16 = (struct tagPOINT **)v25;
    v27 = *(struct tagRECT *)((char *)v25 + 88);
LABEL_27:
    v19 = *((_DWORD *)a2 + 150);
    if ( (v19 & 0x1000000) != 0 )
      v27 = *(struct tagRECT *)((char *)a2 + 620);
    if ( (v19 & 0x800000) != 0 )
      v20 = (struct tagRECT *)((char *)a2 + 620);
    else
      v20 = &v27;
    v21 = *v20;
    CAnimatedTransitionVisual::SetBeginRect(v16[5], &v27);
    v22 = v16[5];
    *(struct tagRECT *)&v22[109].x = v21;
    CVisual::SetDirtyFlags((CVisual *)&v22[1], 4096);
    CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v16[5], v11);
    v23 = v16[5];
    *(float *)&v23[116].y = 1.0 - v11;
    CVisual::SetDirtyFlags((CVisual *)&v23[1], 4096);
    goto LABEL_33;
  }
  CTransitionVisualController::GetOwnedInclusiveClipRect(
    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
    (struct tagRECT *)a2,
    &v27);
  v12 = -*((_DWORD *)a2 + 13);
  v13 = -*((_DWORD *)a2 + 12);
  rc = v27;
  OffsetRect(&rc, v13, v12);
  v14 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 150));
  v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v14, &rc, 0LL, -1, 1, &v25);
  if ( v15 >= 0 )
  {
    v16 = (struct tagPOINT **)v25;
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v15, 0x205u);
LABEL_22:
  v16 = (struct tagPOINT **)v25;
LABEL_33:
  if ( v16 )
    CBaseObject::Release((CBaseObject *)v16);
LABEL_35:
  if ( v26 )
    CBaseObject::Release(v26);
  return 0LL;
}
