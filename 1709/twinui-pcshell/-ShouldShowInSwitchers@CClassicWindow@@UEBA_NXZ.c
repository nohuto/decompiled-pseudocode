/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180035610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CClassicWindow::ShouldShowInSwitchers(CClassicWindow *this)
{
  unsigned int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 3) == 0 )
    return 0;
  v2 = 1;
  if ( (~(v1 >> 3) & 1) == 0 )
    return 0;
  return v2;
}
