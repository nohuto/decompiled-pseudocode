/*
 * XREFs of ?IsPseudoTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180035640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsPseudoTrayWindow(CClassicWindow *this)
{
  return (*((_DWORD *)this + 18) & 2) != 0;
}
