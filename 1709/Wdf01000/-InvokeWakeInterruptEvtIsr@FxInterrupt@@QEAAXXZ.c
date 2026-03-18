/*
 * XREFs of ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C00A1F94
 * Callers:
 *     ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3140 (-InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3180 (-InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A31C0 (-InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0064BB8 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0064C1C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::InvokeWakeInterruptEvtIsr(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  WDFINTERRUPT__ *v3; // rcx

  FxInterrupt::AcquireLock(this, a2);
  v3 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v3 = 0LL;
  this->m_WakeInterruptMachine->m_Claimed = this->m_EvtInterruptIsr(v3, this->m_InterruptInfo.MessageNumber);
  FxInterrupt::ReleaseLock(this);
}
