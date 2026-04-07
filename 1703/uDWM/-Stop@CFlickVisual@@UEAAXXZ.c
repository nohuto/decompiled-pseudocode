/*
 * XREFs of ?Stop@CFlickVisual@@UEAAXXZ @ 0x18008E260
 * Callers:
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008DE0C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x18008E310 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18008B08C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x18008E2D0 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::Stop(CFlickVisual *this)
{
  __int64 v2; // rcx

  CFlickVisual::StopTimer(this);
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18),
    *((_DWORD *)this + 74),
    *((_DWORD *)this + 75),
    (_QWORD *)this + 39,
    0);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v2, (__int64)&UdwmFlickVisual_End, *((_DWORD *)this + 75));
}
