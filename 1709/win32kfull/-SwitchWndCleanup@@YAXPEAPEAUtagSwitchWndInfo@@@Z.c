/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01CF5C0
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C0106FD0 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C01D0100 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1, __int64 a2, __int64 a3)
{
  struct tagBWL *v4; // rcx

  v4 = (struct tagBWL *)*((_QWORD *)*a1 + 2);
  if ( v4 )
    FreeHwndList(v4);
  Win32FreePool(*a1, a2, a3);
  *a1 = 0LL;
}
