/*
 * XREFs of ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x180033FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::IsOwned(CClassicWindow *this)
{
  return (*((_DWORD *)this + 18) >> 2) & 1;
}
