/*
 * XREFs of _CreateEmptyCursorObject @ 0x1C00995DC
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x1C00995A0 (NtUserCreateEmptyCursorObject.c)
 *     _DuplicateCursor @ 0x1C01409BC (_DuplicateCursor.c)
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 */

__int64 __fastcall CreateEmptyCursorObject(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax

  LOBYTE(a3) = 3;
  v4 = 0LL;
  v7 = HMAllocObject(gptiCurrent, 0LL, a3, 152LL);
  if ( v7 )
  {
    if ( a1 && (CurrentProcess = PsGetCurrentProcess(v6, v5), v6 = gpepCSRSS, CurrentProcess == gpepCSRSS) )
      *(_QWORD *)(v7 + 24) = 0LL;
    else
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(GetCurrentLogicalCursorThread(v6, v5, v8, v9) + 400);
    v4 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 80) = 2048;
    *(_QWORD *)(v7 + 48) = v7;
  }
  return v4;
}
