/*
 * XREFs of EditionIsGpqForegroundAccessible @ 0x1C01B1C30
 * Callers:
 *     <none>
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessible(int a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  if ( !a1 )
    return 1LL;
  if ( !gpqForeground )
    return 1LL;
  v1 = *(_QWORD *)(gptiCurrent + 376LL);
  v2 = *(_QWORD *)(gpqForeground + 380LL);
  v3 = *(_QWORD *)(v1 + 824);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)v3 > (unsigned int)v2 )
    return 1LL;
  if ( (_DWORD)v3 == (_DWORD)v2 )
  {
    v4 = HIDWORD(v3);
    v5 = HIDWORD(v2);
    if ( (_DWORD)v4 == (_DWORD)v5 || (_DWORD)v4 == -1 || (_DWORD)v5 == -1 )
      return 1LL;
  }
  if ( *(int *)(v1 + 12) < 0 || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
    return 1LL;
  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 0LL;
}
