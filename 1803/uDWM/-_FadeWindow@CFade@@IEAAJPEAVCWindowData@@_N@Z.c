/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800482AC
 * Callers:
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180048190 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A0CE0 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A0FA0 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800071D8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800075E4 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000A314 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180011CBC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800484E8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180097D2C (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x18009C13C (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  bool IsWindowTrackedAndCloakChanged; // si
  int v7; // eax
  char IsLauncherShownAboveWindow; // al
  int v9; // r8d
  bool v10; // dl
  bool v11; // al
  float v12; // xmm7_4
  int v13; // eax
  int v14; // eax
  struct tagPOINT **v15; // rdi
  int v16; // eax
  struct tagRECT *v17; // rbx
  bool v18; // cf
  struct tagRECT *v19; // rax
  struct tagRECT v20; // xmm6
  struct tagPOINT *v21; // rcx
  struct tagPOINT *v22; // rcx
  int v24; // r8d
  int v25; // edx
  int v26; // eax
  int v27; // eax
  struct CAnimationComponent *v28; // [rsp+58h] [rbp-19h] BYREF
  CImmersiveState *v29; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp+7h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  if ( (*((_DWORD *)a2 + 150) & 0x100000) != 0 )
    IsWindowTrackedAndCloakChanged = *((char *)a2 + 595) >= 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  else
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 28)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 != 1);
  v7 = CImmersiveState::Create(&v29, *((_QWORD *)a2 + 15));
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v7, 0x1E6u);
    goto LABEL_20;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v29, (const struct tagRECT *)a2);
  v10 = 0;
  if ( !IsLauncherShownAboveWindow )
    v10 = IsWindowTrackedAndCloakChanged;
  v11 = v10;
  if ( !a3 )
  {
    v11 = v10;
    if ( v10 )
    {
      if ( !CStoryboard::HasAnimatingOwnerWindow((CStoryboard *)IsWindowTrackedAndCloakChanged, a2, v9) )
        goto LABEL_31;
      v11 = 0;
    }
  }
  if ( !v11 )
    goto LABEL_20;
  if ( a3 )
  {
    v12 = 0.0;
    goto LABEL_10;
  }
LABEL_31:
  v12 = FLOAT_0_99000001;
LABEL_10:
  if ( (*((_DWORD *)a2 + 150) & 0x20000) != 0 )
  {
    CTransitionVisualController::GetOwnedInclusiveClipRect(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
      a2,
      &v30);
    v24 = -*((_DWORD *)a2 + 13);
    v25 = -*((_DWORD *)a2 + 12);
    rc = v30;
    OffsetRect(&rc, v25, v24);
    v26 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 150));
    v27 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v26, &rc, 0LL, 0xFFFFFFFF, 1, &v28);
    if ( v27 >= 0 )
    {
      v15 = (struct tagPOINT **)v28;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v27, 0x205u);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 88LL))(this);
    v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v13, 0LL, 0LL, 0xFFFFFFFF, 1, &v28);
    if ( v14 >= 0 )
    {
      v15 = (struct tagPOINT **)v28;
      v30 = *(struct tagRECT *)((char *)v28 + 88);
LABEL_13:
      v16 = *((_DWORD *)a2 + 150);
      v17 = (struct tagRECT *)((char *)a2 + 620);
      if ( (v16 & 0x1000000) != 0 )
        v30 = *v17;
      v18 = (v16 & 0x800000) != 0;
      v19 = &v30;
      if ( v18 )
        v19 = v17;
      v20 = *v19;
      CAnimatedTransitionVisual::SetBeginRect(v15[5], &v30);
      v21 = v15[5];
      *(struct tagRECT *)&v21[109].x = v20;
      CVisual::SetDirtyFlags((CVisual *)&v21[1], 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v15[5], v12);
      v22 = v15[5];
      *(float *)&v22[116].y = 1.0 - v12;
      CVisual::SetDirtyFlags((CVisual *)&v22[1], 4096);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v14, 0x209u);
  }
  v15 = (struct tagPOINT **)v28;
LABEL_18:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
LABEL_20:
  if ( v29 )
    CBaseObject::Release(v29);
  return 0LL;
}
