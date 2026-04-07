/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180040D60
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180040D90 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F080 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18008B310 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al

  if ( *((_QWORD *)this + 47) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(this, &UdwmDirectTouchDownAnimation_End);
    v2 = *((_QWORD *)this + 47);
    if ( v2 )
    {
      v3 = (*(_DWORD *)(v2 + 8))-- == 1;
      v4 = CDesktopManager::s_fTimelineDirty;
      if ( v3 )
        v4 = 1;
      *((_QWORD *)this + 47) = 0LL;
      CDesktopManager::s_fTimelineDirty = v4;
    }
  }
}
