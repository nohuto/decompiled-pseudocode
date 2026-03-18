/*
 * XREFs of _GetCurrentLogicalCursorThread @ 0x1C0098230
 * Callers:
 *     zzzSetCursorPos @ 0x1C0051414 (zzzSetCursorPos.c)
 *     _FindExistingCursorIcon @ 0x1C0097F3C (_FindExistingCursorIcon.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     _CreateEmptyCursorObject @ 0x1C00995DC (_CreateEmptyCursorObject.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00CB310 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0109BD0 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     zzzShowCursor @ 0x1C011E824 (zzzShowCursor.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetCurrentLogicalCursorThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v5 + 1184) & 0x4000000) != 0 )
    return *(_QWORD *)(v5 + 1448);
  else
    return v5;
}
