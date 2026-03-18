/*
 * XREFs of ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018A3C
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C00143F0 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017F00 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxTimer::FxTimer(FxTimer *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1028, 0x160u, FxDriverGlobals);
  this->__vftable = (FxTimer_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.OldIrql;
  this->m_Timer.m_Timer.m_TimerContext = 0LL;
  this->m_Timer.m_Timer.m_TimerCallback = 0LL;
  this->m_Timer.m_Timer.m_Period = 0;
  this->m_Timer.m_Timer.m_KernelExTimer = 0LL;
  this->m_Object = 0LL;
  *(_QWORD *)&this->m_Period = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  this->m_Callback = 0LL;
  this->m_RunningDown = 0;
  this->m_SystemWorkItem = 0LL;
  this->m_CallbackThread = 0LL;
  this->m_StopThread = 0LL;
  *(_WORD *)&this->m_StopAgain = 0;
  this->m_ObjectFlags |= 0x810u;
}
