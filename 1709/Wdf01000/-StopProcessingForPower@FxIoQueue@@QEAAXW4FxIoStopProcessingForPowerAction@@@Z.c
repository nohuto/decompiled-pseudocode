/*
 * XREFs of ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001B770
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0019E1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0016B0C (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001AD6C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall FxIoQueue::StopProcessingForPower(
        FxIoQueue *this,
        FxIoStopProcessingForPowerAction Action,
        unsigned __int8 a3)
{
  int v4; // edx
  unsigned __int16 v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v8; // rcx
  MxEvent *p_m_PowerIdle; // rdx
  void *v10; // rbx
  int v11; // edx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  const void *v14; // rdx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  v4 = Action - 1;
  if ( v4 )
  {
    v11 = v4 - 1;
    if ( v11 )
    {
      if ( v11 != 1 || this->m_PowerManaged == 1 )
        return;
    }
    else if ( !this->m_PowerManaged )
    {
      return;
    }
    FxNonPagedObject::Lock(this, &irql, a3);
    FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
    FxNonPagedObject::Unlock(this, irql, v12);
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v13);
    this->m_PowerState = FxIoQueuePowerPurge;
  }
  else
  {
    if ( !this->m_PowerManaged )
      return;
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStopping;
  }
  KeClearEvent(&this->m_PowerIdle.m_Event);
  if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x67u, WPP_FxIoQueue_cpp_Traceguids, v14);
    }
    m_ObjectSize = this->m_ObjectSize;
    v8 = this->m_Globals;
    p_m_PowerIdle = &this->m_PowerIdle;
    v10 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v10 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      v8,
      p_m_PowerIdle,
      "waiting for all inflight requests to be acknowledged on WDFQUEUE",
      v10,
      v8->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
  }
}
