/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000A0E4
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180007B78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180008E0C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180009FD4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     _lambda_01b389546427082a9499a493e716ac63_::operator() @ 0x18000CC60 (_lambda_01b389546427082a9499a493e716ac63_--operator().c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180001F44 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x18000C764 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000E1E8 (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        bool a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool a8,
        bool *a9)
{
  __int64 v9; // rax
  int v10; // ebx
  __int128 v13; // rdi
  int v15; // eax
  __int64 v16; // rdx
  bool v17; // dl
  VisualCollection *v18; // rcx
  int inserted; // eax
  __int64 v20; // rax
  bool *v21; // rbx
  __int64 v22; // rcx
  unsigned int x; // edx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v28; // eax
  bool v29; // al
  int v30; // r9d
  unsigned int v31; // [rsp+20h] [rbp-30h]
  CVisual *v32; // [rsp+30h] [rbp-20h] BYREF
  __int128 v33; // [rsp+38h] [rbp-18h] BYREF
  __int64 v34; // [rsp+48h] [rbp-8h]
  struct tagPOINT v35; // [rsp+88h] [rbp+38h] BYREF

  v9 = *((_QWORD *)a2 + 90);
  v10 = 0;
  v32 = 0LL;
  *(_QWORD *)&v13 = a2;
  if ( (*(_BYTE *)(v9 + 592) & 4) != 0 )
    return (unsigned int)v10;
  v15 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, (bool)a3, a4, &v32);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v15, 0x91u);
    goto LABEL_22;
  }
  v16 = *(_QWORD *)(v13 + 720);
  if ( v16 )
  {
    v35 = *(struct tagPOINT *)(v16 + 48);
    if ( a7 )
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
        *(HWND *)(v16 + 40),
        &v35);
  }
  else
  {
    v35 = *(struct tagPOINT *)(v13 + 112);
  }
  *((_QWORD *)&v13 + 1) = v32;
  CVisual::SetOffset(v32, &v35);
  if ( a4 )
    CVisual::SetHitTestVisibility(*((CVisual **)&v13 + 1), v17);
  v18 = (struct CVisual *)((char *)a3 + 32);
  if ( !a6 )
  {
    inserted = VisualCollection::InsertRelative(v18, *((struct CVisual **)&v13 + 1), a5, 0, 1);
    v10 = inserted;
    if ( inserted >= 0 )
      goto LABEL_10;
    v31 = 177;
LABEL_36:
    v30 = inserted;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v30, v31);
    goto LABEL_23;
  }
  inserted = VisualCollection::InsertRelative(v18, *((struct CVisual **)&v13 + 1), a5, 1, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v31 = 173;
    goto LABEL_36;
  }
LABEL_10:
  if ( a8 )
  {
    v20 = *(_QWORD *)(v13 + 720);
    if ( !v20 || (*(_DWORD *)(v20 + 600) & 0x20000000) == 0 )
      CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 1);
  }
  v21 = a9;
  v33 = v13;
  LOBYTE(v34) = a4;
  *(_WORD *)((char *)&v34 + 1) = 257;
  if ( a9 )
  {
    v29 = *a9 && CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*(_QWORD *)(v13 + 720) + 40LL));
    *v21 = v29;
    BYTE2(v34) = v29;
  }
  v22 = *((unsigned int *)this + 12);
  x = v35.x;
  v24 = v22 + 1;
  if ( (int)v22 + 1 >= (unsigned int)v22 )
    x = v22 + 1;
  v10 = v24 < (unsigned int)v22 ? 0x80070216 : 0;
  if ( v24 < (unsigned int)v22 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB5u);
  }
  else if ( x > *((_DWORD *)this + 11) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 24, 24LL, 1LL, &v33);
    v10 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
  }
  else
  {
    v25 = *((_QWORD *)this + 3);
    v26 = 3 * v22;
    *(_OWORD *)(v25 + 8 * v26) = v33;
    *(_QWORD *)(v25 + 8 * v26 + 16) = v34;
    *((_DWORD *)this + 12) = x;
  }
  if ( v10 < 0 )
  {
    v31 = 195;
    v30 = v10;
    goto LABEL_38;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
LABEL_22:
  *((_QWORD *)&v13 + 1) = v32;
LABEL_23:
  if ( v10 < 0 && *((_QWORD *)&v13 + 1) )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 0);
    VisualCollection::Remove((struct CVisual *)((char *)a3 + 32), *((struct CVisual **)&v13 + 1));
    CBaseObject::Release(*((CBaseObject **)&v13 + 1));
  }
  return (unsigned int)v10;
}
