/*
 * XREFs of KdReleaseDebuggerLock @ 0x14023E9C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 */

void __fastcall KdReleaseDebuggerLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&KdDebuggerLock);
  __writecr8(v1);
}
