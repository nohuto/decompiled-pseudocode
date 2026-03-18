/*
 * XREFs of NtUserEndMenu @ 0x1C011B010
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1C0203CAC (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 MenuStateWindow; // rax

  EnterCrit(0LL, 1LL);
  v2 = gptiCurrent;
  v3 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v3 )
  {
    MenuStateWindow = GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 528LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499LL, 0LL, 0LL);
    else
      *(_DWORD *)(v3 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v2, v3, v0, v1);
  return 1LL;
}
