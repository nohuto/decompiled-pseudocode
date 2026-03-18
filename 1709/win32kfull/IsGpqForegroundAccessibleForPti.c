/*
 * XREFs of IsGpqForegroundAccessibleForPti @ 0x1C0050680
 * Callers:
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     zzzSetCursorPos @ 0x1C0051414 (zzzSetCursorPos.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00CB310 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0051374 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleForPti(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = 0;
  if ( !a2 )
    return 1;
  if ( !gpqForeground )
    return 1;
  v3 = *(_QWORD *)(a1 + 400);
  v4 = *(_QWORD *)(gpqForeground + 420LL);
  v5 = *(_QWORD *)(v3 + 832);
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)v5 > (unsigned int)v4 )
    return 1;
  if ( (_DWORD)v5 == (_DWORD)v4 )
  {
    v6 = HIDWORD(v5);
    v7 = HIDWORD(v4);
    if ( (_DWORD)v6 == (_DWORD)v7 || (_DWORD)v6 == -1 || (_DWORD)v7 == -1 )
      return 1;
  }
  if ( *(int *)(v3 + 12) < 0 || (unsigned int)IsForegroundShellFrameQueueAccessible() )
    return 1;
  return v2;
}
