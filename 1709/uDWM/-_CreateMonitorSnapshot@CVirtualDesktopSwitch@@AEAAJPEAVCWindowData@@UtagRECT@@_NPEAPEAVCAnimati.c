/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800955F0
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800944D0 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A300 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800091C0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18002EC04 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18002ECB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FF94 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // r14
  int v7; // eax
  int v9; // eax
  unsigned int v11; // edi
  struct CVisual *RootVisualForDesktop; // r12
  __int64 v13; // rax
  int v14; // eax
  CAnimatedTransitionVisual *v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  CAnimatedTransitionVisual *v18; // rcx
  int v19; // eax
  CAnimatedTransitionVisual *v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  unsigned __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  struct CAnimationComponent **v25; // [rsp+50h] [rbp-10h]
  __int64 v26; // [rsp+58h] [rbp-8h]

  v5 = 0LL;
  v25 = a5;
  v7 = a3->right - a3->left;
  if ( v7 < 0 )
    v7 = 0;
  v22 = 0LL;
  LODWORD(v23) = v7;
  v9 = a3->bottom - a3->top;
  v26 = 0LL;
  if ( v9 < 0 )
    v9 = 0;
  HIDWORD(v23) = v9;
  if ( !(unsigned int)GetDesktopID(1LL, &v24) )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x1269u);
    return v11;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           v24);
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v13 )
    v5 = CAnimationComponent::CAnimationComponent(v13, 0LL, *((_DWORD *)a2 + 150) & 0xFFF, 1, (__int64)this);
  if ( !v5 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147024882,
      0x1271u);
    return v11;
  }
  v14 = CAnimatedTransitionVisual::Create(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v22);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v15 = v22;
    v16 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v22, RootVisualForDesktop, 1, a3);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x1274u);
      goto LABEL_22;
    }
    *((_DWORD *)v15 + 184) = *((_DWORD *)this + 18);
    v17 = v23;
    *((_DWORD *)v15 + 185) = 1;
    *((_QWORD *)v15 + 118) = 0LL;
    *((_QWORD *)v15 + 119) = v17;
    *(_QWORD *)(v5 + 40) = v15;
    _InterlockedAdd((volatile signed __int32 *)v15 + 4, 1u);
    *(struct tagRECT *)(v5 + 88) = *a3;
    if ( a4
      && (v18 = *(CAnimatedTransitionVisual **)(v5 + 40),
          *(_BYTE *)(v5 + 67) = 1,
          v19 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v18, RootVisualForDesktop, a3),
          v11 = v19,
          v19 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v19, 0x127Fu);
    }
    else
    {
      *v25 = (struct CAnimationComponent *)v5;
      _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v14, 0x1273u);
  }
  v15 = v22;
LABEL_22:
  CBaseObject::Release((CBaseObject *)v5);
  if ( v15 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v15 + 8));
  return v11;
}
