/*
 * XREFs of ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F7E8
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C002EC44 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00A1B00 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxEventQueue::Initialize(FxEventQueue *this, _FX_DRIVER_GLOBALS *DriverGlobals)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rbx
  __int64 result; // rax

  p_m_StateMachineLock = &this->m_StateMachineLock;
  KeInitializeEvent(&this->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
  result = 0LL;
  p_m_StateMachineLock->m_Event.m_DbgFlagIsInitialized = 1;
  return result;
}
