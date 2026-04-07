/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180097C4C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800997E0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009AD30 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180001C8C (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000CFE0 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000E06C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x180095DE4 (_lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_--operator().c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x180098490 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180098CA0 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 */

_BOOL8 __fastcall CGroupingStoryboard::_Create3DComponent(CGroupingStoryboard *this, struct CWindowData *a2)
{
  int v2; // esi
  unsigned int v3; // esi
  BOOL v6; // r15d
  CBaseObject *v7; // r12
  CBaseObject *v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  struct tagRECT *p_rc; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  struct tagRECT v17; // xmm0
  int v18; // eax
  struct CAnimationComponent *v19; // rbx
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-49h]
  struct CAnimationComponent *v23; // [rsp+50h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v24; // [rsp+58h] [rbp-11h] BYREF
  CAnimatedTransitionVisual **v25; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v27; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *((_DWORD *)a2 + 150);
  v23 = 0LL;
  v3 = v2 & 0xFFF;
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v27.left = 0LL;
  *(_QWORD *)&v27.right = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( v3 == 1 )
    goto LABEL_7;
  if ( v3 <= 2 )
    goto LABEL_29;
  if ( v3 <= 4 )
  {
LABEL_7:
    if ( *((_DWORD *)a2 + 28) == 1 )
      *((_DWORD *)a2 + 150) |= 0x4000000u;
    if ( (*((_DWORD *)a2 + 150) & 0x10000000) == 0
      || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
    {
      LOBYTE(v6) = 1;
    }
    if ( (*((_DWORD *)a2 + 150) & 0x1000000) == 0 || IsRectEmpty((const RECT *)((char *)a2 + 604)) )
    {
      v18 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
              this,
              *((unsigned int *)a2 + 150));
      v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v18, 0LL, 0LL, -1, v6, &v23);
      v6 = v10;
      if ( v10 < 0 )
      {
        v22 = 2170;
        goto LABEL_24;
      }
      if ( *((_DWORD *)a2 + 28) == 1 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v27);
        goto LABEL_29;
      }
      v17 = *(struct tagRECT *)((char *)v23 + 88);
    }
    else
    {
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      if ( v3 == 1 )
      {
        v11 = -*((_DWORD *)a2 + 155);
        v12 = -HIDWORD(*(_QWORD *)((char *)a2 + 620));
        rc = *(struct tagRECT *)((char *)a2 + 620);
        OffsetRect(&rc, v11, v12);
      }
      p_rc = &rc;
      if ( v3 != 1 )
        p_rc = 0LL;
      v14 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
              this,
              *((unsigned int *)a2 + 150));
      v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              this,
              a2,
              0,
              v14,
              (struct tagRECT *)((char *)a2 + 604),
              p_rc,
              -1,
              v6,
              &v23);
      v6 = v15;
      if ( v15 < 0 )
      {
        v22 = 2165;
        v16 = v15;
LABEL_20:
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, v22);
        goto LABEL_37;
      }
      v17 = *(struct tagRECT *)((char *)a2 + 620);
    }
    v27 = v17;
    goto LABEL_29;
  }
  if ( v3 == 30 )
  {
    *(_QWORD *)&rc.left = 0LL;
    CStoryboard::_GetIdealRects(a2, 0LL, &v27, (struct tagRECT **)&rc, 0LL);
    v9 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 88LL))(
           this,
           *((unsigned int *)a2 + 150));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            0,
            v9,
            *(struct tagRECT **)&rc.left,
            0LL,
            -1,
            1,
            &v23);
    v6 = v10;
    if ( v10 < 0 )
    {
      v22 = 2189;
LABEL_24:
      v16 = v10;
      goto LABEL_20;
    }
  }
LABEL_29:
  v19 = v23;
  *(_QWORD *)&rc.left = this;
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v23 + 5), &v27);
  v20 = *((_QWORD *)v19 + 5);
  *(struct tagRECT *)(v20 + 872) = v27;
  CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
  lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, (CAnimatedTransitionVisual **)v19);
  if ( *((_DWORD *)v19 + 17) != 2 )
    *((_DWORD *)v19 + 17) = 1;
  if ( (*((_DWORD *)a2 + 150) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v27, &v27, v3, &v24, &v25);
    v7 = (CBaseObject *)v24;
    if ( v24 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v24);
    v8 = (CBaseObject *)v25;
    if ( v25 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v25);
  }
LABEL_37:
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v8 )
    CBaseObject::Release(v8);
  return v6;
}
