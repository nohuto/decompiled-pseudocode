/*
 * XREFs of IsWindowSubjectToShellSizingPolicy @ 0x1C01DCEBC
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB8B0 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01D87E8 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = 0;
  if ( IsLeftOrRightArranged(a1) && !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(v1 + 24), 8) )
    return (unsigned int)IsWindowSubjectToShellWindowBehavior(v4, 64LL, v3) != 0;
  return v2;
}
