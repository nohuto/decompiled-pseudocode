/*
 * XREFs of ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x180140E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18002A470 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SetViewState(CWin32ApplicationView *this, unsigned int a2)
{
  HWND hWnd; // [rsp+30h] [rbp+8h] BYREF

  CWin32ApplicationView::GetWindow((CWin32ApplicationView *)((char *)this + 144), &hWnd);
  PostMessageW(hWnd, 0x112u, a2, 0LL);
  return 0LL;
}
