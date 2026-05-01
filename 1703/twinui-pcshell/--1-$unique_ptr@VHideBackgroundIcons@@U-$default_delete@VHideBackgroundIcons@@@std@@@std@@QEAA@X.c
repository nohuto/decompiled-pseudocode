/*
 * XREFs of ??1?$unique_ptr@VHideBackgroundIcons@@U?$default_delete@VHideBackgroundIcons@@@std@@@std@@QEAA@XZ @ 0x18016927C
 * Callers:
 *     _DesktopBackgroundFactory::DesktopBackgroundFactory_::_1_::dtor$2 @ 0x1801A4AAB (_DesktopBackgroundFactory--DesktopBackgroundFactory_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<HideBackgroundIcons>::~unique_ptr<HideBackgroundIcons>(_BYTE **a1)
{
  _BYTE *v1; // rbx
  HWND ShellWindow; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
    {
      ShellWindow = GetShellWindow();
      PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 0LL);
    }
    operator delete(v1);
  }
}
