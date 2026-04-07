/*
 * XREFs of ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@W4NCAREA_FLAGS@@@Z @ 0x1800072A4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CTopLevelWindow::SendWindowStyleChangedEvent(__int64 a1, int a2)
{
  LPARAM v2; // rbx
  HWND Window; // rax

  v2 = a2;
  Window = FindWindowExW(0LL, 0LL, L"Shell_TrayWnd", 0LL);
  if ( Window && (_DWORD)v2 )
    LODWORD(Window) = PostMessageW(Window, 0x32Bu, *(_QWORD *)(a1 + 40), v2);
  return (int)Window;
}
