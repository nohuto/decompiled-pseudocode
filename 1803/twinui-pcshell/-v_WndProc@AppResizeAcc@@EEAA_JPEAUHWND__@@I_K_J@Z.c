/*
 * XREFs of ?v_WndProc@AppResizeAcc@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E6540
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1802E5E28 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 */

LRESULT __fastcall AppResizeAcc::v_WndProc(AppResizeAcc *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  LONG_PTR v5; // rbx
  char v6; // al

  v5 = 0LL;
  v6 = 0;
  if ( a3 != 61 )
  {
    if ( a3 == 32769 )
    {
      AppResizeAcc::ProcessPendingNotifications((IRawElementProviderSimple *)this - 4, 1);
      return v5;
    }
    return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
  }
  if ( lParam == -25 )
  {
    v5 = UiaReturnRawElementProvider(*((HWND *)this + 1), a4, -25LL, (IRawElementProviderSimple *)this - 4);
    v6 = 1;
  }
  if ( !v6 )
    return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
  return v5;
}
