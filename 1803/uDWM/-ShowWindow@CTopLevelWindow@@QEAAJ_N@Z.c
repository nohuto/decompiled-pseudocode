/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180022CA0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180023074 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002B860 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800304B8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A580 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180081E28 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180082794 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@W4NCAREA_FLAGS@@@Z @ 0x1800072A4 (-SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@W4NCAREA_FLAGS@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsTaskbarWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001ED98 (-IsTaskbarWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800257D0 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180025868 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x1800258A8 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18007F630 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x1800807C8 (-OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char v2; // r8
  __int64 v3; // r14
  char v4; // bp
  __int64 v6; // rax
  char v7; // cl
  char v8; // dl
  bool v9; // al
  __int64 v10; // r8
  char v11; // al
  int v12; // esi
  struct CWindowData *v13; // rdi
  CProjectionBorderVisual *v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rdx
  int v18; // eax
  bool v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  CAccent *v24; // rcx

  v2 = *((_BYTE *)this + 241);
  v3 = 0LL;
  v4 = a2;
  if ( (v2 & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v6 = *((_QWORD *)this + 90);
    v7 = *(_BYTE *)(v6 + 595);
    if ( v7 < 0 || (v2 & 4) != 0 )
    {
      v4 = 0;
LABEL_5:
      v8 = *(_BYTE *)(v6 + 592);
      v9 = (v8 & 1) != 0 && v7 >= 0 && (v8 & 4) == 0;
      v10 = *((_QWORD *)this + 32);
      if ( v9 )
      {
        v11 = *(_BYTE *)(v10 + 84);
        v12 = 0;
        if ( (v11 & 4) == 0 )
        {
          *(_BYTE *)(v10 + 84) = v11 | 4;
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL) + 16LL);
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v17 + 16) + 448LL))(
                  *(_QWORD *)(v17 + 16),
                  *(unsigned int *)(v17 + 24),
                  *(unsigned int *)(*(_QWORD *)(v10 + 16) + 24LL),
                  0LL);
          v12 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x187u);
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x415u);
        }
        if ( (*((_BYTE *)this + 240) & 1) == 0 )
        {
          CVisual::Hide(this);
          *((_BYTE *)this + 240) |= 1u;
        }
        goto LABEL_13;
      }
      v12 = CVisual::ConnectToParent(*((CVisual **)this + 32), 0);
      if ( (*((_BYTE *)this + 240) & 1) == 0 )
        goto LABEL_13;
LABEL_24:
      CVisual::Unhide(this);
      *((_BYTE *)this + 240) &= ~1u;
      goto LABEL_13;
    }
    if ( !a2 )
      goto LABEL_5;
  }
  if ( CTopLevelWindow::IsTaskbarWindow(this) )
    CTopLevelWindow::SendWindowStyleChangedEvent(*((_QWORD *)this + 90), *((_DWORD *)this + 146) & 0xFFF90F9F);
  v12 = CVisual::ConnectToParent(*((CVisual **)this + 32), 1);
  if ( (*((_BYTE *)this + 240) & 1) != 0 )
    goto LABEL_24;
LABEL_13:
  v13 = (struct CWindowData *)*((_QWORD *)this + 90);
  v14 = (CProjectionBorderVisual *)*((_QWORD *)v13 + 51);
  if ( v14 )
  {
    v19 = v4 && (*((_BYTE *)this + 241) & 2) == 0;
    CProjectionBorderVisual::Show(v14, v19);
    v13 = (struct CWindowData *)*((_QWORD *)this + 90);
    v20 = *((_QWORD *)v13 + 51);
    v21 = *(_QWORD *)(v20 + 24);
    if ( v21 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(v21 + 32), (struct CVisual **)v20, this, 1u, 1);
      v13 = (struct CWindowData *)*((_QWORD *)this + 90);
    }
  }
  v15 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56);
  if ( *(_DWORD *)(v15 + 568) )
  {
    do
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v15 + 544) + 8 * v3);
      v23 = *(_QWORD *)(v22 + 392);
      if ( v23 )
      {
        if ( *(_QWORD *)(v22 + 120) == *((_QWORD *)v13 + 15) )
        {
          v24 = *(CAccent **)(v23 + 264);
          if ( v24 )
            CAccent::OnBlurBehindUpdated(v24, v13);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v15 + 568) );
  }
  return (unsigned int)v12;
}
