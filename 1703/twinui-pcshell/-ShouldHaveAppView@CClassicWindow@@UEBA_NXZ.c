/*
 * XREFs of ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180033F70
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180033E00 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CClassicWindow::ShouldHaveAppView(CClassicWindow *this)
{
  unsigned int v1; // edx
  char v2; // cl

  v1 = *((_DWORD *)this + 18);
  v2 = 1;
  if ( ((v1 & 3) == 0 || (~(v1 >> 3) & 1) == 0) && (v1 & 5) == 0 )
    return 0;
  return v2;
}
