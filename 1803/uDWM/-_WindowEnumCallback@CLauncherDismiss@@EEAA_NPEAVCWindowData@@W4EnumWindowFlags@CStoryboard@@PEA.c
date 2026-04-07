/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180001580 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800015F0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180001908 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180001B84 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180005E4C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180011CBC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180083204 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009D8C0 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

char __fastcall CLauncherDismiss::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r13
  int v10; // edi
  char v11; // r12
  struct tagRECT *v12; // r14
  unsigned int v13; // r9d
  int v14; // eax
  int v16; // eax
  int v17; // eax
  struct tagRECT v18; // xmm6
  struct CAnimationComponent *v19; // rbx
  bool v20; // al
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int PVLTarget; // eax
  struct CAnimationComponent *v26; // rbx
  struct tagRECT v27; // xmm0
  __int64 v28; // rcx
  unsigned int v29; // [rsp+28h] [rbp-59h]
  struct tagRECT **v30; // [rsp+30h] [rbp-51h]
  struct CAnimationComponent *v31; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT *v32; // [rsp+60h] [rbp-21h] BYREF
  int *v33; // [rsp+68h] [rbp-19h]
  struct tagRECT v34; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v35; // [rsp+80h] [rbp-1h] BYREF

  v33 = a4;
  v8 = CFlyoutPopup::_WindowEnumCallback();
  v9 = v8;
  if ( *a4 >= 0 && v8 )
  {
    v10 = 0;
    v11 = 0;
    v31 = 0LL;
    if ( (a3 & 1) == 0 )
    {
      if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 600) & 0xFFF) != 0x2B )
        goto LABEL_7;
      *(_BYTE *)(a1 + 136) = 1;
      goto LABEL_17;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v34);
    v32 = 0LL;
    v12 = (struct tagRECT *)(a1 + 120);
    CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 120), &v35, &v32, &v34, v30);
    v13 = *(_DWORD *)(a2 + 600);
    v14 = v13 & 0xFFF;
    switch ( v14 )
    {
      case 3:
        if ( *(_DWORD *)(a2 + 112) == 1 )
        {
          if ( *(_BYTE *)(a1 + 136) )
          {
            v35 = *v12;
            v18 = v35;
          }
          else
          {
            v18 = v34;
          }
          PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v13);
          v17 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  PVLTarget,
                  &v35,
                  0,
                  &v31);
          v10 = v17;
          if ( v17 >= 0 )
          {
            v26 = v31;
            if ( *((_DWORD *)v31 + 17) != 2 )
            {
              v27 = *v12;
              *((_DWORD *)v31 + 17) = 2;
              *(struct tagRECT *)((char *)v26 + 104) = v27;
            }
            goto LABEL_14;
          }
          v29 = 2956;
          goto LABEL_25;
        }
        v24 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v24,
                v32,
                0LL,
                -1,
                1,
                &v31);
        v10 = v17;
        if ( v17 < 0 )
        {
          v29 = 2944;
          goto LABEL_25;
        }
        break;
      case 22:
        v20 = ContainsRect((const struct tagRECT *)(a1 + 120), (const struct tagRECT *)(a2 + 48));
        if ( !v20 || !*(_BYTE *)(a1 + 136) )
        {
          if ( (*(_BYTE *)(a2 + 592) & 1) == 0 || *(char *)(a2 + 595) < 0 || !v20 )
            goto LABEL_7;
          v23 = CLauncherDismiss::GetPVLTarget(a1, v21);
          v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v23,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v31);
          v10 = v17;
          if ( v17 >= 0 )
          {
            v35 = *(struct tagRECT *)(a2 + 48);
            v18 = v35;
            goto LABEL_14;
          }
          v29 = 2935;
          goto LABEL_25;
        }
        v11 = 1;
        v22 = CLauncherDismiss::GetPVLTarget(a1, v21);
        v17 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v22, &v31);
        v10 = v17;
        if ( v17 < 0 )
        {
          v29 = 2922;
          goto LABEL_25;
        }
        break;
      case 43:
        v11 = 1;
        v16 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v17 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v16, &v31);
        v10 = v17;
        if ( v17 >= 0 )
          break;
        v29 = 2974;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, v29);
        goto LABEL_17;
      default:
LABEL_7:
        *v33 = v10;
        return v9;
    }
    v18 = v34;
LABEL_14:
    v19 = v31;
    if ( !v31 )
      goto LABEL_7;
    if ( !v11 )
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v31 + 5), 0.0);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v19 + 5), &v35);
      v28 = *((_QWORD *)v19 + 5);
      *(struct tagRECT *)(v28 + 872) = v18;
      CVisual::SetDirtyFlags((CVisual *)(v28 + 8), 0x1000u);
    }
LABEL_17:
    if ( v31 )
      CBaseObject::Release(v31);
    goto LABEL_7;
  }
  return v9;
}
