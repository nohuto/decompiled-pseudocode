/*
 * XREFs of ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180005D40
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180002400 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180002B00 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180002D00 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800970F0 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x180097180 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800971B0 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x180097220 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x180097290 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x180097330 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180005218 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180005AD0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::OnEndTransitionRequest(struct _GUID *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CStoryboard *v4; // rcx

  v2 = CStoryboard::_EnumerateWindows(this, 1u);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v2, 0x13D5u);
  }
  else
  {
    v4 = *(CStoryboard **)&this[5].Data1;
    if ( v4 )
    {
      CStoryboard::Release(v4);
      *(_QWORD *)&this[5].Data1 = 0LL;
    }
  }
  return v3;
}
