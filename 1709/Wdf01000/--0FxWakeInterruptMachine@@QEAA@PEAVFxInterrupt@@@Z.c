/*
 * XREFs of ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C00A2FEC
 * Callers:
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00A1B00 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C002F9E8 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

void __fastcall FxWakeInterruptMachine::FxWakeInterruptMachine(FxWakeInterruptMachine *this, FxInterrupt *Interrupt)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)Interrupt);
  this->m_IsrEvent.m_DbgFlagIsInitialized = 0;
  this->m_CurrentState = 2;
  memset(this->m_Queue, 0, 0x28uLL);
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = this->m_CurrentState;
  this->m_Interrupt = Interrupt;
}
