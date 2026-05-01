/*
 * XREFs of ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x180063840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x1800645E8 (-_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z.c)
 */

char __fastcall CTaskWindow::ValidateActivation(CTaskWindow *this)
{
  char v1; // bl

  v1 = 1;
  if ( (~(*((_DWORD *)this + 15) >> 2) & 1) == 0 || (int)CTaskWindow::_Invoke((char *)this - 8, 2LL) < 0 )
    return 0;
  return v1;
}
