/*
 * XREFs of ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180091A50
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18007FABC (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800359E4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003B0C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800922C0 (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::Initialize(CIndirectTouchVisual *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  struct CVisual ***v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  int inserted; // eax

  v4 = CVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   Theme,
                                   8,
                                   0xFu,
                                   0LL,
                                   (__int64)this + 384);
    v5 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip >= 0 )
    {
      v8 = (struct CVisual ***)((char *)this + 376);
      v9 = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      *((_DWORD *)this + 104) = -1;
      *((_DWORD *)this + 74) = 0;
      *(_QWORD *)((char *)this + 308) = v9;
      *((_DWORD *)this + 80) = 1041865114;
      *((_DWORD *)this + 82) = 1041865114;
      *((_DWORD *)this + 81) = 1036831949;
      *((_DWORD *)this + 83) = 1051372202;
      *((_DWORD *)this + 84) = 1059760810;
      v10 = CImage::Create(a2, (struct CImage **)this + 47);
      v5 = v10;
      if ( v10 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CIndirectTouchVisual *)((char *)this + 32), *v8, 0LL, 0, 1);
        v5 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetSize((struct tagSIZE *)*v8, (const struct tagSIZE *)((char *)this + 308));
          *((_QWORD *)this + 44) = 0LL;
          *((_QWORD *)this + 45) = 0LL;
          *((_QWORD *)this + 46) = 0LL;
          *((_DWORD *)this + 85) = 0;
          *((_DWORD *)this + 86) = 0;
          CIndirectTouchVisual::UpdateOpacityAndSource(this);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x37u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x36u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x28u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x25u);
  }
  return v5;
}
