/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098250
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004708 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180004820 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18007A034 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093070 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094C4C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800960FC (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098DC0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  struct CAnimationComponent *v8; // rbx
  __int16 v9; // ax
  unsigned int v10; // eax
  int v11; // edi
  BOOL v12; // eax
  __int16 v13; // r8
  int PVLTarget; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct tagRECT v18; // xmm6
  struct tagPOINT *v19; // rcx
  __int64 v20; // rcx
  char result; // al
  struct tagRECT v22; // [rsp+50h] [rbp-38h] BYREF
  struct CAnimationComponent *v23; // [rsp+98h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = 0LL;
  v9 = *(_DWORD *)(a2 + 600);
  v23 = 0LL;
  v10 = v9 & 0xFFF;
  v11 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_28;
    if ( v10 == 1 )
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    else if ( v10 <= 2 || v10 > 4 )
    {
      goto LABEL_28;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_26;
  }
  if ( v10 == 1 )
    goto LABEL_7;
  if ( v10 <= 2 )
    goto LABEL_28;
  if ( v10 <= 4 )
    goto LABEL_7;
  if ( v10 != 22 )
  {
    if ( v10 != 30 )
      goto LABEL_28;
LABEL_7:
    v12 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x909u);
    goto LABEL_28;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
    goto LABEL_28;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v13);
    v15 = CStoryboard::_CreateAndAddNullComponentWithWindow(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            &v23);
    v11 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v15, 0x913u);
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(a2 + 592) & 1) == 0 || (*(_BYTE *)(a2 + 596) & 1) != 0 )
    goto LABEL_28;
  v16 = CAppLaunch::GetPVLTarget(a1, v13);
  v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          (CStoryboard *)a1,
          (struct CWindowData *)a2,
          0,
          v16,
          0LL,
          0LL,
          -1,
          1,
          &v23);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0x919u);
LABEL_13:
    v8 = v23;
    goto LABEL_26;
  }
  v8 = v23;
  v19 = (struct tagPOINT *)*((_QWORD *)v23 + 5);
  v22 = *(struct tagRECT *)((char *)v23 + 88);
  v18 = v22;
  CAnimatedTransitionVisual::SetBeginRect(v19, &v22);
  v20 = *((_QWORD *)v8 + 5);
  *(struct tagRECT *)(v20 + 872) = v18;
  CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
LABEL_26:
  if ( v8 )
    CBaseObject::Release(v8);
LABEL_28:
  result = 1;
  *a4 = v11;
  return result;
}
