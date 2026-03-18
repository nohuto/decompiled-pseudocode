/*
 * XREFs of ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001AD6C
 * Callers:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0019FB0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001B770 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C003B1E0 (imp_WdfIoQueueStart.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C0095A48 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00969D4 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::SetState(FxIoQueue *this, _FX_IO_QUEUE_SET_STATE NewStatus)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int32 v4; // edi
  _FX_IO_QUEUE_STATE m_QueueState; // eax
  const void *_a1; // rbx
  bool v7; // zf
  _FX_DRIVER_GLOBALS *v8; // rcx
  const void *v9; // rcx

  m_Globals = this->m_Globals;
  if ( (NewStatus & 0x7FFCFFF0) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v7 = this->m_ObjectSize == 0;
    v8 = this->m_Globals;
    if ( v7 )
      _a1 = 0LL;
    WPP_IFR_SF_q(v8, 2u, 0xDu, 0x16u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v4 = NewStatus & 0x7FFFFFFF;
    if ( (NewStatus & 0x20000) != 0 )
      this->m_QueueState &= ~0x10000u;
    if ( (NewStatus & 0x10000) != 0 )
      this->m_QueueState |= 0x10000u;
    if ( (NewStatus & 1) != 0 )
    {
      m_QueueState = this->m_QueueState;
      if ( (m_QueueState & 0x10000) != 0 )
      {
        v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v9 = 0LL;
        WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, v9);
      }
      else
      {
        this->m_QueueState = m_QueueState | 1;
      }
    }
    if ( (v4 & 0x80000002) != 0 )
      this->m_QueueState &= ~1u;
    if ( (v4 & 0x80000004) != 0 )
    {
      this->m_QueueState |= 2u;
      this->m_CancelDispatchedRequests = 0;
    }
    if ( (v4 & 0x80000008) != 0 )
      this->m_QueueState &= ~2u;
  }
}
