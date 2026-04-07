/*
 * XREFs of ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x18009C730
 * Callers:
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x18009C5A0 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180009B34 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180009DB0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::OnEndTransitionRequest(CGroupingStoryboard *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CStoryboard::_EnumerateWindows(this, 4u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x790u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x78Fu);
  }
  return v3;
}
