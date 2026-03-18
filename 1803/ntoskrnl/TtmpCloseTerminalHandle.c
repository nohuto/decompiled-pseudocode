/*
 * XREFs of TtmpCloseTerminalHandle @ 0x140772260
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x14006ECF0 (PsGetProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140772528 (TtmpSetTerminalPendingCleanup.c)
 *     TtmiLogTerminalHandleClosed @ 0x140777B5C (TtmiLogTerminalHandleClosed.c)
 */

__int64 __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  HANDLE ProcessId; // rax

  v5 = *(_DWORD *)(a2 + 28);
  v8 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  ProcessId = PsGetProcessId(Process);
  return TtmiLogTerminalHandleClosed(v8, v5, ProcessId, a4);
}
