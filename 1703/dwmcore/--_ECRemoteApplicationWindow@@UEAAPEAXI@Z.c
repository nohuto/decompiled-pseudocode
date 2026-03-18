/*
 * XREFs of ??_ECRemoteApplicationWindow@@UEAAPEAXI@Z @ 0x180188080
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRemoteApplicationWindow@@UEAA@XZ @ 0x18018803C (--1CRemoteApplicationWindow@@UEAA@XZ.c)
 */

CRemoteApplicationWindow *__fastcall CRemoteApplicationWindow::`vector deleting destructor'(
        CRemoteApplicationWindow *this,
        char a2)
{
  CRemoteApplicationWindow::~CRemoteApplicationWindow(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
