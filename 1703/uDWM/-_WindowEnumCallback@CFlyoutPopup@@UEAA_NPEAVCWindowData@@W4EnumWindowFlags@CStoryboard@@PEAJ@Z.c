/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002720
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002B50 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002D20 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180001FDC (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180005868 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180005900 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180037B2C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  struct CAnimationComponent *v4; // rbx
  int *v5; // r13
  int v8; // r14d
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  struct CAnimationComponent *v12; // rsi
  HWND v13; // rdx
  int WindowEndCloak; // eax
  bool v15; // r13
  int v16; // r8d
  int v17; // edx
  struct tagRECT *p_rc; // rcx
  int v19; // eax
  __int64 v20; // rcx
  CAnimatedTransitionVisual *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  CAnimatedTransitionVisual *v26; // rcx
  __int64 v27; // rcx
  int v29; // eax
  int v30; // eax
  bool v31; // [rsp+50h] [rbp-39h] BYREF
  int dy; // [rsp+54h] [rbp-35h] BYREF
  int v33; // [rsp+58h] [rbp-31h] BYREF
  struct CAnimationComponent *v34; // [rsp+60h] [rbp-29h] BYREF
  struct CAnimationComponent *v35; // [rsp+68h] [rbp-21h] BYREF
  int *v36; // [rsp+70h] [rbp-19h]
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v38; // [rsp+90h] [rbp+7h] BYREF

  v36 = a4;
  v34 = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v5 = a4;
  v8 = 0;
  if ( (a3 & 1) == 0 )
    goto LABEL_37;
  if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 120LL))(a1) )
    goto LABEL_37;
  v9 = *(_DWORD *)(a2 + 600) & 0xFFF;
  v33 = 0;
  dy = 0;
  if ( v9 < 0xC )
    goto LABEL_37;
  if ( v9 > 0x10 )
  {
    if ( v9 == 43 )
    {
      v29 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 88LL))(a1);
      v30 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v29, &v34);
      v8 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v30, 0x4F1u);
      goto LABEL_40;
    }
    if ( v9 <= 0x4C || v9 > 0x52 && (v9 <= 0x57 || v9 > 0x5C) )
      goto LABEL_37;
  }
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v9);
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          1,
          v10,
          0LL,
          0LL,
          -1,
          1,
          &v34);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = v34;
    v13 = *(HWND *)(a2 + 40);
    v38 = *(struct tagRECT *)((char *)v34 + 88);
    rc = v38;
    WindowEndCloak = CWindowPropertyTracker::GetWindowEndCloak(
                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                       v13,
                       &v31);
    v15 = v31;
    if ( WindowEndCloak >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 128LL))(
             a1,
             v9,
             &v33,
             &dy) )
      {
        v16 = dy;
        if ( v15 )
          v16 = -dy;
        v17 = v33;
        if ( v15 )
          v17 = -v33;
        p_rc = &v38;
        if ( !v15 )
          p_rc = &rc;
        OffsetRect(p_rc, v17, v16);
      }
      v19 = *(_DWORD *)(a2 + 600);
      if ( (v19 & 0x1000000) != 0 )
        rc = *(struct tagRECT *)(a2 + 620);
      if ( (v19 & 0x800000) != 0 )
        v38 = *(struct tagRECT *)(a2 + 652);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v12 + 5), &rc);
      v20 = *((_QWORD *)v12 + 5);
      *(struct tagRECT *)(v20 + 872) = v38;
      CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 0x1000u);
      v21 = (CAnimatedTransitionVisual *)*((_QWORD *)v12 + 5);
      if ( v15 )
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v21, 1.0);
        v22 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v22 + 932) = 0;
      }
      else
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v21, 0.0);
        v22 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v22 + 932) = 1065353216;
      }
      CVisual::SetDirtyFlags((CVisual *)(v22 + 8), 0x1000u);
    }
    v23 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v9);
    v24 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v23, &v35);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x4D3u);
      v4 = v35;
    }
    else
    {
      v4 = v35;
      if ( v35 )
      {
        CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v35 + 5), &rc);
        v25 = *((_QWORD *)v4 + 5);
        *(struct tagRECT *)(v25 + 872) = v38;
        CVisual::SetDirtyFlags((CVisual *)(v25 + 8), 0x1000u);
        *(_BYTE *)(*((_QWORD *)v4 + 5) + 987LL) = 1;
        *((_BYTE *)v4 + 74) = 1;
        v26 = (CAnimatedTransitionVisual *)*((_QWORD *)v4 + 5);
        if ( v15 )
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v26, 1.0);
          v27 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v27 + 932) = 0;
        }
        else
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v26, 0.0);
          v27 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v27 + 932) = 1065353216;
        }
        CVisual::SetDirtyFlags((CVisual *)(v27 + 8), 0x1000u);
        if ( *((_DWORD *)v4 + 17) != 2 )
          *((_DWORD *)v4 + 17) = 1;
        *((_DWORD *)v12 + 14) = *((_DWORD *)v4 + 14) + 1;
      }
    }
    v5 = v36;
    goto LABEL_33;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v11, 0x4ADu);
LABEL_40:
  v12 = v34;
LABEL_33:
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v4 )
    CBaseObject::Release(v4);
LABEL_37:
  *v5 = v8;
  return 1;
}
