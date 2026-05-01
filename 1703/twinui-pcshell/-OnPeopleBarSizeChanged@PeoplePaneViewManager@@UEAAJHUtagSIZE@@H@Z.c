/*
 * XREFs of ?OnPeopleBarSizeChanged@PeoplePaneViewManager@@UEAAJHUtagSIZE@@H@Z @ 0x1800E88A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::OnPeopleBarSizeChanged(
        PeoplePaneViewManager *this,
        int a2,
        struct tagSIZE a3,
        int a4)
{
  unsigned __int16 cx; // bx
  LPARAM v5; // rdi
  HWND WindowW; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 cy; // [rsp+44h] [rbp+1Ch]

  cy = a3.cy;
  *((_DWORD *)this + 38) = a2;
  cx = a3.cx;
  v5 = a4;
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW )
  {
    PostMessageW(WindowW, 0x507u, cx | ((unsigned __int64)cy << 16), v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
