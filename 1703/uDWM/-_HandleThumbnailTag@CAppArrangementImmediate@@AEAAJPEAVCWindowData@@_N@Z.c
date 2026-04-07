/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x18009893C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A2C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180001F44 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180096320 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800967A0 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800981E0 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x180098490 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180098CA0 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180099050 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CAppArrangementImmediate::_HandleThumbnailTag(
        CAppArrangementImmediate *this,
        struct CWindowData *a2,
        char a3)
{
  CBaseObject *v5; // r15
  CBaseObject *v6; // r14
  struct tagRECT v7; // xmm0
  int v8; // edx
  int PVLTarget; // eax
  int v10; // eax
  unsigned int v11; // r13d
  struct tagPOINT v12; // rbx
  struct tagRECT v13; // xmm0
  __int64 v14; // r8
  int v15; // edx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct tagRECT v20; // xmm0
  struct tagRECT v21; // xmm6
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  struct tagPOINT v26; // [rsp+58h] [rbp-49h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-39h] BYREF
  struct CAnimationComponent *v28; // [rsp+78h] [rbp-29h] BYREF
  struct CAnimationComponent *v29; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT v30; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp-9h] BYREF

  *(_QWORD *)&v30.left = 0LL;
  *(_QWORD *)&v30.right = 0LL;
  v27 = (struct tagRECT)0LL;
  v5 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
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
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xE0Du);
LABEL_6:
      v12 = v26;
      goto LABEL_30;
    }
  }
  else
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    if ( (*((_DWORD *)a2 + 150) & 0x1000000) != 0 )
    {
      v13 = *(struct tagRECT *)((char *)a2 + 620);
      v14 = *(_QWORD *)((char *)a2 + 620);
      v15 = -*((_DWORD *)a2 + 155);
      rc = v13;
      OffsetRect(&rc, v15, -HIDWORD(v14));
    }
    v16 = *((_DWORD *)a2 + 150) & 0x1000000;
    v17 = CAppArrangementImmediate::GetPVLTarget((__int64)this, *((_DWORD *)a2 + 150));
    v18 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            1,
            v17,
            (struct tagRECT *)(((unsigned __int64)a2 + 604) & -(__int64)(v16 != 0)),
            (struct tagRECT *)((unsigned __int64)&rc & -(__int64)(v16 != 0)),
            -1,
            1,
            (struct CAnimationComponent **)&v26);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0xE20u);
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
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *((HWND *)a2 + 5),
                &v26) >= 0 )
    {
      v22 = v30.right - v30.left;
      v27.left = v26.x;
      if ( v30.right - v30.left < 0 )
        v22 = 0;
      v27.top = v26.y;
      v23 = v30.bottom - v30.top;
      v27.right = v26.x + v22;
      if ( v30.bottom - v30.top < 0 )
        v23 = 0;
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
      v5 = v28;
      if ( v28 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v28);
      v6 = v29;
      if ( v29 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v29);
    }
  }
LABEL_30:
  if ( v12 )
    CBaseObject::Release(*(CBaseObject **)&v12);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v6 )
    CBaseObject::Release(v6);
  return v11;
}
