/*
 * XREFs of ?TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C00555C0
 * Callers:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C0055610 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0098E2C (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall VIDMM_WORKER_THREAD::TransitionToState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 28) = a2;
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 152) + 24LL), 0, 0);
  return KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 152) + 48LL), Executive, 0, 0, 0LL);
}
