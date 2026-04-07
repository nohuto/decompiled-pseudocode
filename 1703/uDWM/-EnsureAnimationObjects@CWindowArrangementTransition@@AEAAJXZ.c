/*
 * XREFs of ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180087EBC
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800880F8 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013014 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180045960 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x180086AB4 (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180087910 (-Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::EnsureAnimationObjects(struct CAnimatedGlassSheet **this)
{
  unsigned int v2; // ebx
  struct IDwmChannel *v3; // rsi
  int v4; // eax
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v7; // eax
  struct CBitmapSource *v9[12]; // [rsp+30h] [rbp-78h] BYREF

  if ( (dword_1800C4710 & 1) == 0 )
  {
    dword_1800C4670 = -2147023728;
    dword_1800C4710 |= 1u;
  }
  v2 = 0;
  v3 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  if ( *this
    || (v4 = CAnimatedGlassSheet::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this),
        v2 = v4,
        v4 >= 0) )
  {
    if ( !this[1] )
    {
      Theme = (void *)CDesktopManager::GetTheme(0);
      BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                     Theme,
                                     59,
                                     0xCu,
                                     0LL,
                                     (struct tagRECT **)v9);
      v2 = BitmapsFromAtlasImageStrip;
      if ( BitmapsFromAtlasImageStrip >= 0 )
      {
        v7 = CRippleEffect::Create(v3, v9, this + 1);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1800C4670, 1LL, v7, 0x46u);
      }
      else if ( (_WORD)BitmapsFromAtlasImageStrip == 1168 )
      {
        return 0;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800C4670, 1LL, BitmapsFromAtlasImageStrip, 0x40u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800C4670, 1LL, v4, 0x2Eu);
  }
  return v2;
}
