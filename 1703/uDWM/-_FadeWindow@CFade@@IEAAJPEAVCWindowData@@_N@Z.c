/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180001998
 * Callers:
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003340 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009B500 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009B7C0 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800022E0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180005FDC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180007880 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000A424 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18000A55C (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180037B2C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x180096BBC (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  bool IsWindowTrackedAndCloakChanged; // r14
  int v7; // eax
  bool IsLauncherShownAboveWindow; // al
  int v9; // r8d
  bool v10; // dl
  bool v11; // al
  float v12; // xmm7_4
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // eax
  CAnimatedTransitionVisual **v17; // rdi
  int v18; // eax
  struct tagRECT *v19; // rbx
  struct tagRECT v20; // xmm6
  CAnimatedTransitionVisual *v21; // rcx
  CAnimatedTransitionVisual *v22; // rcx
  int v24; // eax
  int v25; // eax
  struct CAnimationComponent *v26; // [rsp+58h] [rbp-29h] BYREF
  CImmersiveState *v27; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v28; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  if ( (*((_DWORD *)a2 + 150) & 0x100000) != 0 )
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 596) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  else
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 22)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 != 1);
  v7 = CImmersiveState::Create(&v27, *((_QWORD *)a2 + 15));
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v7, 0x1E6u);
    goto LABEL_20;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v27, a2);
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
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
      a2,
      &v28);
    v13 = -*((_DWORD *)a2 + 13);
    v14 = -*((_DWORD *)a2 + 12);
    rc = v28;
    OffsetRect(&rc, v14, v13);
    v15 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 150));
    v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v15, &rc, 0LL, -1, 1, &v26);
    if ( v16 >= 0 )
    {
      v17 = (CAnimatedTransitionVisual **)v26;
LABEL_13:
      v18 = *((_DWORD *)a2 + 150);
      if ( (v18 & 0x1000000) != 0 )
        v28 = *(struct tagRECT *)((char *)a2 + 620);
      if ( (v18 & 0x800000) != 0 )
        v19 = (struct tagRECT *)((char *)a2 + 620);
      else
        v19 = &v28;
      v20 = *v19;
      CAnimatedTransitionVisual::SetBeginRect(v17[5], &v28);
      v21 = v17[5];
      *(struct tagRECT *)((char *)v21 + 872) = v20;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v21 + 8), 0x1000u);
      CAnimatedTransitionVisual::SetBeginAlpha(v17[5], v12);
      v22 = v17[5];
      *((float *)v22 + 233) = 1.0 - v12;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v22 + 8), 0x1000u);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x205u);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 88LL))(this);
    v25 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v24, 0LL, 0LL, -1, 1, &v26);
    if ( v25 >= 0 )
    {
      v17 = (CAnimatedTransitionVisual **)v26;
      v28 = *(struct tagRECT *)((char *)v26 + 88);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v25, 0x209u);
  }
  v17 = (CAnimatedTransitionVisual **)v26;
LABEL_18:
  if ( v17 )
    CBaseObject::Release((CBaseObject *)v17);
LABEL_20:
  if ( v27 )
    CBaseObject::Release(v27);
  return 0LL;
}
