/*
 * XREFs of ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z @ 0x180013BDC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::SendWindowStyleChangedEvent(struct CWindowData *a1, unsigned int a2)
{
  HWND Window; // rax

  Window = FindWindowExW(0LL, 0LL, L"Shell_TrayWnd", 0LL);
  if ( Window )
  {
    if ( a2 )
      PostMessageW(Window, 0x32Bu, *((_QWORD *)a1 + 5), a2);
  }
}
