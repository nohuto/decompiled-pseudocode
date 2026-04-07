/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022D78 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BC20 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180078A18 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800795AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180019260 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x1800192F8 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180019338 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?IsTaskbarWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18001EC10 (-IsTaskbarWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z @ 0x180030858 (-SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180074D0C (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x180077074 (-OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char v2; // al
  __int64 v5; // rdx
  char v6; // di
  unsigned __int8 v7; // al
  char v8; // dl
  unsigned int v9; // ebp
  CProjectionBorderVisual *v10; // rcx
  struct CWindowData *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  bool v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  CAccent *v20; // rcx

  v2 = *((_BYTE *)this + 241);
  if ( (v2 & 1) != 0 )
  {
    v6 = 1;
    goto LABEL_18;
  }
  v5 = *((_QWORD *)this + 90);
  if ( (*(_BYTE *)(v5 + 596) & 1) != 0 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  v6 = 0;
  if ( (v2 & 4) == 0 )
    v6 = a2;
  if ( v6 )
  {
LABEL_18:
    if ( CTopLevelWindow::IsTaskbarWindow(this) )
      CTopLevelWindow::SendWindowStyleChangedEvent(
        *((struct CWindowData **)this + 90),
        *((_DWORD *)this + 146) & 0xFFF90F9F);
    v8 = 1;
    goto LABEL_9;
  }
LABEL_6:
  v7 = *(_BYTE *)(v5 + 592);
  if ( (v7 & 1) == 0 || ((unsigned __int8)~(*(_BYTE *)(v5 + 596) & 1) & (unsigned __int8)~(v7 >> 2) & 1) == 0 )
  {
    v8 = 0;
LABEL_9:
    v9 = CVisual::ConnectToParent(*((CVisual **)this + 32), v8);
    if ( (*((_BYTE *)this + 240) & 1) != 0 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 240) &= ~1u;
    }
    goto LABEL_11;
  }
  v9 = CVisual::ConnectToParent(*((CVisual **)this + 32), 1);
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 240) |= 1u;
  }
LABEL_11:
  v10 = *(CProjectionBorderVisual **)(*((_QWORD *)this + 90) + 416LL);
  if ( v10 )
  {
    v15 = v6 && (*((_BYTE *)this + 241) & 2) == 0;
    CProjectionBorderVisual::Show(v10, v15);
    v16 = *(_QWORD *)(*((_QWORD *)this + 90) + 416LL);
    v17 = *(_QWORD *)(v16 + 24);
    if ( v17 )
      VisualCollection::InsertRelative((VisualCollection *)(v17 + 32), (struct CVisual **)v16, this, 1u, 1);
  }
  v11 = (struct CWindowData *)*((_QWORD *)this + 90);
  v12 = 0LL;
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
  if ( *(_DWORD *)(v13 + 568) )
  {
    do
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v13 + 544) + 8 * v12);
      v19 = *(_QWORD *)(v18 + 400);
      if ( v19 )
      {
        if ( *(_QWORD *)(v18 + 120) == *((_QWORD *)v11 + 15) )
        {
          v20 = *(CAccent **)(v19 + 264);
          if ( v20 )
            CAccent::OnBlurBehindUpdated(v20, v11);
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v13 + 568) );
  }
  return v9;
}
