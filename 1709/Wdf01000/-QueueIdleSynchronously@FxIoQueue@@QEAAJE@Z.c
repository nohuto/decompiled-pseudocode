/*
 * XREFs of ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0096D74
 * Callers:
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C0095490 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C00954F0 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0016B0C (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0065CFC (WPP_IFR_SF_dq.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00969D4 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdleSynchronously(FxIoQueue *this, unsigned __int8 CancelRequests)
{
  int v4; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v8; // rcx
  void *v9; // rdi
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v4 = FxIoQueue::QueueIdle(this, CancelRequests, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v4 >= 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xDu, 0x45u, WPP_FxIoQueue_cpp_Traceguids, this->m_DriverIoCount, _a2);
    }
    KeEnterCriticalRegion();
    m_ObjectSize = this->m_ObjectSize;
    v8 = this->m_Globals;
    v9 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      v8,
      &eventOnStack,
      "waiting for queue to stop, WDFQUEUE",
      v9,
      v8->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
