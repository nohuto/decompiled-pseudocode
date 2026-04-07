/*
 * XREFs of ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18007F31C
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007F59C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800389A0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x18007DEB4 (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18007ED30 (-Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
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

  if ( dword_1800C2794 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C2794);
    if ( dword_1800C2794 == -1 )
    {
      dword_1800C26E8 = -2147023728;
      Init_thread_footer(&dword_1800C2794);
    }
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26E8, 1u, v7, 0x46u);
      }
      else if ( (_WORD)BitmapsFromAtlasImageStrip == 1168 )
      {
        return 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26E8, 1u, BitmapsFromAtlasImageStrip, 0x40u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26E8, 1u, v4, 0x2Eu);
  }
  return v2;
}
