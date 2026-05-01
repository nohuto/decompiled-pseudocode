/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VThumbnailInteropWindow@ThumbnailInteropDevice@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1801670B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<ThumbnailInteropDevice::ThumbnailInteropWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rbx
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v11; // rbx
  __int64 v12; // rsi

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 16))(
               v8 + 16,
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
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v11 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
    v12 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v11 + 16))(
            v11 + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)v11 + 16LL))(v11);
    return v12;
  }
}
