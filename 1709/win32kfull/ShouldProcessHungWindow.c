/*
 * XREFs of ShouldProcessHungWindow @ 0x1C00842F8
 * Callers:
 *     NtUserQueryWindow @ 0x1C0087260 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013436C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0134ADC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rdi

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow
    && (unsigned int)IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(_WORD *)(gpsi + 884LL), 1)
    && !(unsigned int)GetWindowCloakState((__int64)v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
