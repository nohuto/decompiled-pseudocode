/*
 * XREFs of ?IsTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180033FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::IsTrayWindow(CClassicWindow *this)
{
  return *((_DWORD *)this + 18) & 1;
}
