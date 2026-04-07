/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800897C0
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z @ 0x18007FE04 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800359E4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180039F18 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003B1B4 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(struct tagSIZE *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  void *Theme; // rax
  struct CBitmapSource **v7; // r9
  int BitmapFromAtlas; // eax
  int v9; // eax
  int v10; // eax
  struct CVisual ***v11; // r15
  int v12; // eax
  struct CVisual ***v13; // r14
  int v14; // eax

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v7);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      this[46].cy = 1067030938;
      this[47].cx = 1072064102;
      this[47].cy = 1065353216;
      this[48] = (struct tagSIZE)1067869798LL;
      this[49].cx = 0;
      this[49].cy = 150;
      this[45].cx = 1050253722;
      this[45].cy = 1059760811;
      this[46].cx = 1051372203;
      this[50] = 0LL;
      LOBYTE(this[35].cx) = 0;
      v9 = CDesktopManager::MonitorDpiFromPoint(0LL);
      v10 = MulDiv(50, v9, 96);
      v11 = (struct CVisual ***)&this[43];
      this[42].cy = v10;
      this[42].cx = v10;
      this[41].cx = v10;
      this[41].cy = v10;
      v12 = CImage::Create(a2, (struct CImage **)&this[43]);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v13 = (struct CVisual ***)&this[44];
        v14 = CImage::Create(a2, (struct CImage **)&this[44]);
        v5 = v14;
        if ( v14 >= 0 )
        {
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v11, 0LL, 0, 1);
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v13, 0LL, 0, 1);
          CVisual::SetSize((struct tagSIZE *)*v11, this + 41);
          CVisual::SetSize((struct tagSIZE *)*v13, this + 42);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x44u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x43u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapFromAtlas, 0x25u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x22u);
  }
  return v5;
}
