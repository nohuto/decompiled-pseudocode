/*
 * XREFs of ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D800
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x180088728 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenBarrelKeyVisual@@@.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013014 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18004485C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Initialize(CPenBarrelKeyVisual *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v8; // rsi
  CDesktopManager *v9; // rax
  int v10; // eax
  int inserted; // eax

  v4 = CVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 1, 0LL, (struct CBitmapSource **)this + 39);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v8 = (struct CVisual **)((char *)this + 320);
      v9 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 41) = *(_QWORD *)(*((_QWORD *)this + 39) + 24LL);
      *((_DWORD *)this + 84) = (int)(*((double *)v9 + 50) * 20.0);
      v10 = CImage::Create(a2, (struct CImage **)this + 40);
      v5 = v10;
      if ( v10 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CPenBarrelKeyVisual *)((char *)this + 32), *v8, 0LL, 0, 1);
        v5 = inserted;
        if ( inserted >= 0 )
          CVisual::SetSize((struct tagSIZE *)*v8, (const struct tagSIZE *)this + 41);
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x3Au);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x39u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x33u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x30u);
  }
  return v5;
}
