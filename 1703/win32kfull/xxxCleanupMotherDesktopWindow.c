/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C0111B98
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00C86F4 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = a1 + 8;
  v2 = *(_QWORD **)(a1 + 8);
  SetVisible(v2, 0);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow((__int64)v2, v4, v5);
  return result;
}
