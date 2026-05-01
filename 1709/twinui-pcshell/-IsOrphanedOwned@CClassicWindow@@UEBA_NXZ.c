/*
 * XREFs of ?IsOrphanedOwned@CClassicWindow@@UEBA_NXZ @ 0x180035670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CClassicWindow::IsOrphanedOwned(CClassicWindow *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_DWORD *)this + 18) & 4) == 0 || *((_QWORD *)this + 8) )
    return 0;
  return v1;
}
