/*
 * XREFs of ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0096070
 * Callers:
 *     imp_WdfIoQueuePurge @ 0x1C000D840 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueDrain @ 0x1C0095110 (imp_WdfIoQueueDrain.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1C0095170 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x1C00951D0 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfIoQueueStop @ 0x1C00953D0 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0095430 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C0095490 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C00954F0 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall __noreturn FxIoQueue::FatalError(FxIoQueue *this, int Status)
{
  unsigned __int16 m_ObjectSize; // ax
  WDFQUEUE__ *v3; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_QUEUE_FATAL_ERROR_DATA data; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&data.Status = 0LL;
  m_ObjectSize = this->m_ObjectSize;
  v3 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  data.Request = 0LL;
  if ( !m_ObjectSize )
    v3 = 0LL;
  data.Queue = v3;
  data.Status = Status;
  FxVerifierBugCheckWorker(m_Globals, WDF_QUEUE_FATAL_ERROR, (ULONG_PTR)&data, 0LL);
}
