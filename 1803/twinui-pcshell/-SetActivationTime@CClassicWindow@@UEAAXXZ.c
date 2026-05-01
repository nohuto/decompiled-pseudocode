/*
 * XREFs of ?SetActivationTime@CClassicWindow@@UEAAXXZ @ 0x180007FD0
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1800067C0 (-UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::SetActivationTime(struct _FILETIME *this)
{
  GetSystemTimeAsFileTime(this + 4);
}
