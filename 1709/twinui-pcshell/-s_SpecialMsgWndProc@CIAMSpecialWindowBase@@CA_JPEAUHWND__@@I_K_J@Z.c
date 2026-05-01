/*
 * XREFs of ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18002E360
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowProcedure@CIAMSpecialWindowBase@@AEAA_JI_K_J@Z @ 0x18002E3F8 (-_WindowProcedure@CIAMSpecialWindowBase@@AEAA_JI_K_J@Z.c)
 */

LRESULT __fastcall CIAMSpecialWindowBase::s_SpecialMsgWndProc(
        HWND hWnd,
        unsigned int a2,
        unsigned __int64 a3,
        LONG_PTR *a4)
{
  CIAMSpecialWindowBase *WindowLongPtrW; // rsi

  WindowLongPtrW = (CIAMSpecialWindowBase *)GetWindowLongPtrW(hWnd, 0);
  if ( a2 == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *a4);
  }
  else if ( a2 == 2 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    WindowLongPtrW = 0LL;
  }
  if ( WindowLongPtrW )
    return CIAMSpecialWindowBase::_WindowProcedure(WindowLongPtrW, a2, a3, (__int64)a4);
  else
    return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
}
