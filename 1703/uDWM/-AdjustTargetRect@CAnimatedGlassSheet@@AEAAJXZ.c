/*
 * XREFs of ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x180086900
 * Callers:
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x1800872A0 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

__int64 __fastcall CAnimatedGlassSheet::AdjustTargetRect(RECT *this)
{
  const RECT *v2; // rcx
  unsigned int v3; // edi
  HMONITOR v4; // rsi
  signed int LastError; // eax
  LONG left; // ecx
  CDesktopManager *v7; // rdx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // r8d
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  v2 = this + 25;
  v3 = 0;
  this[26] = *v2;
  v4 = MonitorFromRect(v2, 0);
  if ( v4 )
  {
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    SetLastError(0);
    if ( GetMonitorInfoW(v4, &mi) )
    {
      left = this[26].left;
      v7 = CDesktopManager::s_pDesktopManagerInstance;
      if ( mi.rcWork.left == left )
        this[26].left = left - (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 49) * -8.0);
      right = this[26].right;
      if ( mi.rcWork.right == right )
        this[26].right = right - (int)(*((double *)v7 + 49) * 8.0);
      top = this[26].top;
      if ( mi.rcWork.top == top )
        this[26].top = top - (int)(*((double *)v7 + 50) * -8.0);
      bottom = this[26].bottom;
      if ( mi.rcWork.bottom == bottom )
        this[26].bottom = bottom - (int)(*((double *)v7 + 50) * 8.0);
      this[26].left += this[29].right;
      this[26].right -= this[29].bottom;
      this[26].top += this[30].left;
      this[26].bottom -= this[30].top;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v3 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x232u);
    }
  }
  return v3;
}
