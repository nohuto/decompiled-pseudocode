/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C011B920
 * Callers:
 *     xxxDesktopThread @ 0x1C0048580 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0048D04 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 */

__int64 __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  struct tagWND *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = a1 + 8;
  v2 = *(struct tagWND **)(a1 + 8);
  SetVisible(v2, 0);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow((volatile signed __int32 *)v2, v4, v5);
  return result;
}
