/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180097558
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x18009C470 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000677C (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180006808 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180006ED8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007644 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800119A4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180011A54 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180025A44 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  int v7; // eax
  struct CAnimatedTransitionVisual *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // esi
  struct CVisual *RootVisualForDesktop; // rbx
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // edi
  bool v21; // zf
  __int64 *v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-30h]
  unsigned __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  struct CAnimatedTransitionVisual *v28; // [rsp+90h] [rbp+40h] BYREF

  v27 = 0LL;
  v7 = a3->right - a3->left;
  v9 = 0LL;
  v28 = 0LL;
  if ( v7 < 0 )
    v7 = 0;
  v25 = 0LL;
  LODWORD(v26) = v7;
  v10 = a3->bottom - a3->top;
  if ( v10 < 0 )
    v10 = 0;
  HIDWORD(v26) = v10;
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 88LL))(a4, 10LL);
    v13 = CAnimationComponent::CAnimationComponent(v11, -1LL, 10, v12, (__int64)a4);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x535u);
    return v14;
  }
  *(_DWORD *)(v13 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v25);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                           v25);
  if ( !RootVisualForDesktop )
  {
    v24 = 1339;
LABEL_12:
    v16 = -2147024882;
    v14 = -2147024882;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v16,
      v24);
    goto LABEL_29;
  }
  v17 = CTransitionVisualController::_SetDesktopId(a1, v25);
  v14 = v17;
  if ( v17 < 0 )
  {
    v24 = 1342;
LABEL_16:
    v16 = v17;
    goto LABEL_13;
  }
  v18 = CAnimatedTransitionVisual::Create(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v28);
  v14 = v18;
  if ( v18 >= 0 )
  {
    v9 = v28;
    if ( !v28 )
    {
      v24 = 1346;
      goto LABEL_12;
    }
    v17 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v28, RootVisualForDesktop, 1, a3);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 1349;
      goto LABEL_16;
    }
    v17 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v9, RootVisualForDesktop, a3);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 1350;
      goto LABEL_16;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v9, a3);
    *(struct tagRECT *)((char *)v9 + 872) = *a3;
    CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v9 + 8), 4096);
    v19 = v26;
    (*(void (__fastcall **)(__int64, __int64 *))(*((_QWORD *)v9 + 1) + 80LL))((__int64)v9 + 8, &v26);
    *((_QWORD *)v9 + 119) = v19;
    CVisual::SetInterpolationMode((struct CAnimatedTransitionVisual *)((char *)v9 + 8), 1);
    v20 = a4[18];
    *((_DWORD *)v9 + 185) = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 88LL))(a4, 10LL);
    *((_DWORD *)v9 + 184) = v20;
    *((_BYTE *)v9 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v13 + 40) = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
    v21 = *(_DWORD *)(v13 + 68) == 2;
    *(struct tagRECT *)(v13 + 88) = *a3;
    if ( !v21 )
      *(_DWORD *)(v13 + 68) = 1;
    *((_QWORD *)v28 + 118) = v27;
    v22 = a5;
    *((_QWORD *)v9 + 119) = v19;
    *v22 = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v18,
      0x541u);
  }
  v9 = v28;
LABEL_29:
  CBaseObject::Release((CBaseObject *)v13);
  if ( v9 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v9 + 8));
  return v14;
}
