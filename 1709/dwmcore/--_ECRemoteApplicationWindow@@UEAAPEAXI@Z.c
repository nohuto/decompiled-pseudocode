/*
 * XREFs of ??_ECRemoteApplicationWindow@@UEAAPEAXI@Z @ 0x1801916F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRemoteApplicationWindow@@UEAA@XZ @ 0x1801916AC (--1CRemoteApplicationWindow@@UEAA@XZ.c)
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
