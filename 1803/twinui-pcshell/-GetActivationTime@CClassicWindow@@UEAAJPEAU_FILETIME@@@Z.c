/*
 * XREFs of ?GetActivationTime@CClassicWindow@@UEAAJPEAU_FILETIME@@@Z @ 0x180007FE0
 * Callers:
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180006A90 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::GetActivationTime(CClassicWindow *this, struct _FILETIME *a2)
{
  *a2 = *(struct _FILETIME *)((char *)this + 32);
  return 0LL;
}
