/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x18009E014
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009FAB0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004849C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18009B720 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x18009BC60 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009D8C0 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x18009DB68 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x18009E37C (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18009E690 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CAppArrangementImmediate::_HandleThumbnailTag(
        CAppArrangementImmediate *this,
        struct CWindowData *a2,
        char a3)
{
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  struct tagRECT v7; // xmm0
  int v8; // edx
  int PVLTarget; // eax
  int v10; // eax
  unsigned int v11; // r13d
  struct tagPOINT v12; // rbx
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct tagRECT v20; // xmm0
  struct tagRECT v21; // xmm6
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rcx
  struct tagPOINT v26; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-29h] BYREF
  struct CAnimationComponent *v28; // [rsp+78h] [rbp-19h] BYREF
  struct CAnimationComponent *v29; // [rsp+80h] [rbp-11h] BYREF
  struct tagRECT v30; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp+7h] BYREF

  v3 = 0LL;
  v26 = 0LL;
  v4 = 0LL;
  *(_QWORD *)&v30.left = 0LL;
  *(_QWORD *)&v30.right = 0LL;
  v27 = (struct tagRECT)0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 150);
    rc = v7;
    if ( (v8 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 604);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v8);
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v26);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xE0Du);
LABEL_6:
      v12 = v26;
      goto LABEL_30;
    }
  }
  else
  {
    v13 = *((_DWORD *)a2 + 150);
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    if ( (v13 & 0x1000000) != 0 )
    {
      v14 = -*((_DWORD *)a2 + 155);
      v15 = -HIDWORD(*(_QWORD *)((char *)a2 + 620));
      rc = *(struct tagRECT *)((char *)a2 + 620);
      OffsetRect(&rc, v14, v15);
      v13 = *((_DWORD *)a2 + 150);
    }
    v16 = v13 & 0x1000000;
    v17 = CAppArrangementImmediate::GetPVLTarget((__int64)this, v13);
    v18 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            1,
            v17,
            (struct tagRECT *)(((unsigned __int64)a2 + 604) & -(__int64)(v16 != 0)),
            (struct tagRECT *)((unsigned __int64)&rc & -(__int64)(v16 != 0)),
            0xFFFFFFFF,
            1,
            (struct CAnimationComponent **)&v26);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0xE20u);
      goto LABEL_6;
    }
  }
  v19 = *((_DWORD *)a2 + 150);
  v12 = v26;
  if ( (v19 & 0x1000000) != 0 )
    v20 = *(struct tagRECT *)((char *)a2 + 620);
  else
    v20 = *(struct tagRECT *)(*(_QWORD *)&v26 + 88LL);
  v30 = v20;
  if ( (v19 & 0x800000) != 0 )
  {
    v21 = *(struct tagRECT *)((char *)a2 + 652);
  }
  else
  {
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                *((HWND *)a2 + 5),
                &v26) >= 0 )
    {
      v22 = 0;
      v27.left = v26.x;
      if ( v30.right - v30.left >= 0 )
        v22 = v30.right - v30.left;
      v27.top = v26.y;
      v23 = 0;
      v27.right = v26.x + v22;
      if ( v30.bottom - v30.top >= 0 )
        v23 = v30.bottom - v30.top;
      v27.bottom = v26.y + v23;
      v21 = v27;
      goto LABEL_24;
    }
    v21 = v30;
  }
  v27 = v21;
LABEL_24:
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v12 + 40LL), &v30);
  v24 = *(_QWORD *)(*(_QWORD *)&v12 + 40LL);
  *(struct tagRECT *)(v24 + 872) = v21;
  CVisual::SetDirtyFlags((CVisual *)(v24 + 8), 4096);
  *(_BYTE *)(*(_QWORD *)&v12 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_WORD *)a2 + 300) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v12);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        this,
        (__int64)a2,
        &v30,
        &v27.left,
        *((_DWORD *)a2 + 150) & 0xFFF,
        (CBaseObject *)&v28,
        &v29);
      v3 = v28;
      if ( v28 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v28);
      v4 = v29;
      if ( v29 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v29);
    }
  }
LABEL_30:
  if ( v12 )
    CBaseObject::Release(*(CBaseObject **)&v12);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  return v11;
}
