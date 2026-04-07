/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003DBAC
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003E7AC (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180014E18 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015A38 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019E84 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003D510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003D654 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003DADC (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DF10 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DF88 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DFFC (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003E06C (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003E0CC (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18003E6E8 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v3; // rax
  CTopLevelWindow **v4; // rsi
  int inserted; // eax
  unsigned int v6; // ebx
  struct CVisual **v7; // r15
  char *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        744LL);
  if ( v3 )
    v3 = CWindowData::CWindowData(v3);
  *((_QWORD *)this + 10) = v3;
  if ( !v3 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x65u);
    return v6;
  }
  v4 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CTopLevelWindow **)this + 11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 106;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v12);
    return v6;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 400LL) = *v4;
  if ( *v4 )
    _InterlockedIncrement((volatile signed __int32 *)*v4 + 2);
  v7 = (struct CVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 432LL) = this;
  *((_QWORD *)*v4 + 90) = *((_QWORD *)this + 10);
  *((_BYTE *)*v4 + 240) |= 0x40u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 593LL) |= 0x10u;
  inserted = CCanvasVisual::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CCanvasVisual **)this + 13);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 134;
    goto LABEL_30;
  }
  inserted = CImage::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CImage **)this + 12);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 135;
    goto LABEL_30;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v7 + 32),
               *((struct CVisual **)this + 12),
               0LL,
               0,
               1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 136;
    goto LABEL_30;
  }
  v8 = (char *)this + 112;
  inserted = CClientArea::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               0,
               (struct CClientArea **)this + 14);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 137;
    goto LABEL_30;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v8 + 32LL), *v7, 0LL, 0, 1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 138;
    goto LABEL_30;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
  if ( v9 )
    LODWORD(v9) = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(*((_QWORD *)this + 10) + 128LL) = v9;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 26),
    this,
    (enum IconicRepresentationType *)&v13);
  inserted = CWindowIconic::SetRepresentationType((__int64)this, v13, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 146;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 147;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 148;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 149;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 150;
    goto LABEL_30;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 392LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 594LL) & 2) != 0,
                 0);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v12 = 153;
      goto LABEL_30;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 155;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 156;
    goto LABEL_30;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 157;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 20) )
  {
    LOBYTE(v10) = 1;
    CTopLevelWindow::ShowWindow(*v4, v10);
  }
  return v6;
}
