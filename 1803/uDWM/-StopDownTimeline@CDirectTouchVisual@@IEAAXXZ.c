/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x18003D4A0
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x18003D4D0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008D36C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18008D5A0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // al

  v1 = *((_QWORD *)this + 47);
  if ( v1 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmDirectTouchDownAnimation_End);
      v1 = *((_QWORD *)this + 47);
    }
    if ( v1 )
    {
      v3 = (*(_DWORD *)(v1 + 8))-- == 1;
      v4 = CDesktopManager::s_fTimelineDirty;
      if ( v3 )
        v4 = 1;
      *((_QWORD *)this + 47) = 0LL;
      CDesktopManager::s_fTimelineDirty = v4;
    }
  }
}
