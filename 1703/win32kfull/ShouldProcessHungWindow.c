/*
 * XREFs of ShouldProcessHungWindow @ 0x1C01199B0
 * Callers:
 *     NtUserQueryWindow @ 0x1C003C1C0 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013224C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C013294C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
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
