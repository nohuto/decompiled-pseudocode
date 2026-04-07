/*
 * XREFs of ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18000A55C
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180001998 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000C8AC (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A2C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180082544 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall CImmersiveState::IsLauncherShownAboveWindow(CImmersiveState *this, const struct tagRECT *a2)
{
  unsigned int left; // r9d
  char v3; // r8
  int v4; // eax

  left = a2[7].left;
  v3 = 0;
  if ( left - 8 <= 3 || left <= 0xC && (v4 = 4130, _bittest(&v4, left)) )
  {
    if ( *((_BYTE *)this + 56) && ContainsRect((const struct tagRECT *)((char *)this + 72), a2 + 3) )
      return 1;
  }
  return v3;
}
