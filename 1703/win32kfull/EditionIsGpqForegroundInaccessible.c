/*
 * XREFs of EditionIsGpqForegroundInaccessible @ 0x1C00B9660
 * Callers:
 *     <none>
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall EditionIsGpqForegroundInaccessible(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = 0;
  if ( !a1
    || !gpqForeground
    || (v4 = *(_QWORD *)(a2 + 376), v5 = *(_QWORD *)(gpqForeground + 380LL), v6 = *(_QWORD *)(v4 + 824), !gbEnforceUIPI)
    || (unsigned int)v6 > (unsigned int)v5
    || (_DWORD)v6 == (_DWORD)v5
    && ((v8 = HIDWORD(v6), v9 = HIDWORD(v5), (_DWORD)v8 == (_DWORD)v9) || (_DWORD)v8 == -1 || (_DWORD)v9 == -1)
    || *(int *)(v4 + 12) < 0
    || IsForegroundShellFrameQueueAccessible(a2) )
  {
    v2 = 1;
  }
  else
  {
    EtwTraceUIPIInputError(a2, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  }
  return v2 ^ 1u;
}
