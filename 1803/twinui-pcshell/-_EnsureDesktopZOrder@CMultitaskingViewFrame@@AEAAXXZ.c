/*
 * XREFs of ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x180283164
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1802814B0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802838B0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewFrame::_EnsureDesktopZOrder(CMultitaskingViewFrame *this)
{
  HWND v2; // rcx
  LPARAM lParam[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF
  HWND hWndInsertAfter; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned int)GetWindowBand(*((_QWORD *)this + 5), &v4)
    && v4 == 1
    && (GetWindowLongW(*((HWND *)this + 5), -20) & 8) != 0 )
  {
    v2 = (HWND)*((_QWORD *)this + 5);
    hWndInsertAfter = 0LL;
    lParam[0] = (LPARAM)&hWndInsertAfter;
    lParam[1] = (LPARAM)MonitorFromWindow(v2, 2u);
    EnumWindows(
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_afd9dab7360131ccbda0c4f57e8ea426_>,
      (LPARAM)lParam);
    SetWindowPos(*((HWND *)this + 5), hWndInsertAfter, 0, 0, 0, 0, 0x13u);
  }
}
