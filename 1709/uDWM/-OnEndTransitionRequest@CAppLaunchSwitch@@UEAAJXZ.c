/*
 * XREFs of ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180093F80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180003D78 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180004BC0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  CAnimationScheduler *v3; // rcx
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CStoryboard::OnEndTransitionRequest(this);
  if ( v2 >= 0 )
  {
    v3 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
    if ( *((_BYTE *)this + 120) )
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Bu, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2644;
    }
    else
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Au, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2648;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, v4, v6);
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v2, 0xA4Bu);
  return 0LL;
}
