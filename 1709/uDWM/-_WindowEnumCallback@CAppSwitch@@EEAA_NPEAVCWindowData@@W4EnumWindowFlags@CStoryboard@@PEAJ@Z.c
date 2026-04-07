/*
 * XREFs of ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098480
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004708 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180004820 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000BDB8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000C014 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18007A034 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800929C0 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     ?GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800930B0 (-GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x180095488 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800960FC (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098DC0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppSwitch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // esi
  CAnimatedTransitionVisual **v10; // r13
  char v11; // bl
  struct tagRECT *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct CAnimationComponent *v18; // rbx
  int PVLTarget; // eax
  int v20; // eax
  int v21; // eax
  struct CAnimationComponent *v22; // rbx
  struct tagPOINT *v23; // rcx
  __int64 v24; // rcx
  CBaseObject *v25; // rdi
  char result; // al
  unsigned int v27; // [rsp+20h] [rbp-69h]
  struct CAnimationComponent *v28; // [rsp+50h] [rbp-39h] BYREF
  CBaseObject *v29; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v30; // [rsp+60h] [rbp-29h] BYREF
  int *v31; // [rsp+68h] [rbp-21h]
  struct tagRECT v32; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v34; // [rsp+90h] [rbp+7h] BYREF

  v31 = a4;
  CGroupingStoryboard::_WindowEnumCallback();
  v7 = *(_DWORD *)(a2 + 600);
  v28 = 0LL;
  v8 = v7 & 0xFFF;
  v30 = 0LL;
  v29 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_88;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      goto LABEL_88;
    }
    if ( v8 != 3 )
      goto LABEL_88;
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_80;
  }
  if ( (v7 & 0x1000000) == 0 || (v11 = 1, IsRectEmpty((const RECT *)(a2 + 604))) )
    v11 = 0;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v32);
  v12 = (struct tagRECT *)(a2 + 620);
  if ( !v11 )
    v12 = &v32;
  v34 = *v12;
  rc = v34;
  switch ( v8 )
  {
    case 2u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 600) |= 0x4000000u;
      PVLTarget = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              PVLTarget,
              (struct tagRECT *)((a2 + 604) & -(__int64)(v11 != 0)),
              0LL,
              17,
              1,
              &v28);
      v9 = v14;
      if ( v14 < 0 )
      {
        v27 = 2492;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v28 + 17) != 2 )
        *((_DWORD *)v28 + 17) = 1;
      if ( CStoryboard::IsRTL() )
      {
        v20 = v32.right - v32.left;
        if ( v32.right - v32.left < 0 )
          v20 = 0;
      }
      else
      {
        v21 = v32.right - v32.left;
        if ( v32.right - v32.left < 0 )
          v21 = 0;
        v20 = -v21;
      }
      OffsetRect(&rc, v20, 0);
      goto LABEL_62;
    case 3u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 600) |= 0x4000000u;
      if ( *(_BYTE *)(a1 + 168) )
        v17 = 3;
      else
        v17 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
      if ( v11 )
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v17,
                (struct tagRECT *)(a2 + 604),
                0LL,
                -1,
                1,
                &v28);
        v9 = v14;
        if ( v14 < 0 )
        {
          v27 = 2426;
          goto LABEL_14;
        }
      }
      else
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v17,
                0LL,
                0LL,
                -1,
                1,
                &v28);
        v9 = v14;
        if ( v14 < 0 )
        {
          v27 = 2430;
          goto LABEL_14;
        }
      }
      v18 = v28;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v28 + 5), 0.0);
      if ( *((_DWORD *)v18 + 17) != 2 )
        *((_DWORD *)v18 + 17) = 1;
      goto LABEL_62;
    case 0x16u:
      if ( (*(_BYTE *)(a2 + 592) & 1) == 0
        || (*(_BYTE *)(a2 + 596) & 1) != 0
        || !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
      {
        goto LABEL_88;
      }
      if ( *(_BYTE *)(a1 + 168) )
        v16 = 7;
      else
        v16 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v16,
              0LL,
              0LL,
              -1,
              1,
              &v28);
      v9 = v14;
      if ( v14 < 0 )
      {
        v27 = 2451;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v28 + 17) != 2 )
        *((_DWORD *)v28 + 17) = 1;
      v34 = *(struct tagRECT *)((char *)v28 + 88);
      rc = v34;
      goto LABEL_62;
    case 0x1Cu:
      if ( *(_BYTE *)(a1 + 168) )
        v15 = 5;
      else
        v15 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
      if ( v11 )
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                (struct tagRECT *)(a2 + 604),
                0LL,
                -1,
                1,
                &v28);
        v9 = v14;
        if ( v14 < 0 )
        {
          v27 = 2468;
          goto LABEL_14;
        }
      }
      else
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                0LL,
                0LL,
                -1,
                1,
                &v28);
        v9 = v14;
        if ( v14 < 0 )
        {
          v27 = 2472;
          goto LABEL_14;
        }
      }
      if ( *((_DWORD *)v28 + 17) != 2 )
        *((_DWORD *)v28 + 17) = 1;
LABEL_62:
      if ( !v28 )
        goto LABEL_88;
      if ( v8 == 3 || v8 == 2 || v8 == 22 || v8 == 28 )
      {
        v22 = v28;
        *(_QWORD *)&v32.left = a1;
        v23 = (struct tagPOINT *)*((_QWORD *)v28 + 5);
        v32.right = v23[116].x;
        CAnimatedTransitionVisual::SetBeginRect(v23, &v34);
        v24 = *((_QWORD *)v22 + 5);
        *(struct tagRECT *)(v24 + 872) = rc;
        CVisual::SetDirtyFlags((CVisual *)(v24 + 8), 4096);
        if ( v8 == 3 || v8 == 2 )
          lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v32, (CAnimatedTransitionVisual **)v28);
        if ( (*(_DWORD *)(a2 + 600) & 0x18000) != 0 )
        {
          CGroupingStoryboard::_CreateGuttersForApp(
            (CStoryboard *)a1,
            a2,
            &v34,
            &rc.left,
            v8,
            (CBaseObject *)&v30,
            &v29);
          v10 = (CAnimatedTransitionVisual **)v30;
          if ( v30 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v32, (CAnimatedTransitionVisual **)v30);
          v25 = v29;
          if ( v29 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v32, v10);
          goto LABEL_81;
        }
      }
LABEL_80:
      v25 = v29;
LABEL_81:
      if ( v28 )
        CBaseObject::Release(v28);
      if ( v10 )
        CBaseObject::Release((CBaseObject *)v10);
      goto LABEL_86;
    case 0x2Bu:
      v13 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 600));
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v13, &v28);
      v9 = v14;
      if ( v14 < 0 )
      {
        v27 = 2501;
LABEL_14:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v14, v27);
        goto LABEL_80;
      }
      goto LABEL_62;
  }
  v25 = v29;
LABEL_86:
  if ( v25 )
    CBaseObject::Release(v25);
LABEL_88:
  result = 1;
  *v31 = v9;
  return result;
}
