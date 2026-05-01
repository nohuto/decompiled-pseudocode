/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeCoverWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1802E2AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E24CC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E24CC.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E24D8 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 */

LRESULT __fastcall CWRLImpWndProc<TabletModeCoverWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  LONG_PTR v9; // r8
  volatile int *WindowLongPtrW; // rax
  volatile int *v12; // rdx
  volatile int *v13; // rdi
  __int64 v14; // rsi
  volatile int *v15; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      v9 = *lParam;
      *(_QWORD *)(v8 + 104) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v9);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 96))(
               v8 + 96,
               hWnd,
               Msg,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = (volatile int *)GetWindowLongPtrW(hWnd, 0);
    v13 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v15 = WindowLongPtrW;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::InternalAddRef(
      (__int64)WindowLongPtrW,
      v12);
    v14 = (**((__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))v13 + 12))(
            (__int64)(v13 + 24),
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *((_QWORD *)v13 + 13) = 0LL;
    }
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v15);
    return v14;
  }
}
