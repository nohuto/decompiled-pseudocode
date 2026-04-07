/*
 * XREFs of ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180002B00
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x180002348 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180005AD0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180005D40 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLauncherDismiss::OnEndTransitionRequest(CLauncherDismiss *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  CLauncherAnimationBase::RecordLauncherRect(this);
  v2 = CStoryboard::_EnumerateWindows(this, 4LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v2, 0xBBFu);
  }
  else
  {
    v4 = CStoryboard::OnEndTransitionRequest(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v4, 0xBC0u);
  }
  return v3;
}
