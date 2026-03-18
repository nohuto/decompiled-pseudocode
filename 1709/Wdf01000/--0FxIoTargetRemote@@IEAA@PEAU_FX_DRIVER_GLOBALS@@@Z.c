/*
 * XREFs of ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0013A38
 * Callers:
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0013490 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 * Callees:
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0024408 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

void __fastcall FxIoTargetRemote::FxIoTargetRemote(FxIoTargetRemote *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxIoTarget::FxIoTarget(this, FxDriverGlobals, 0x1F8u);
  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTargetRemote::`vftable';
  this->m_EvtQueryRemove.m_Method = 0LL;
  this->m_EvtRemoveCanceled.m_Method = 0LL;
  this->m_EvtRemoveComplete.m_Method = 0LL;
  this->m_OpenedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_OpenedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  this->m_OpenedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  memset(&this->m_OpenParams, 0, sizeof(this->m_OpenParams));
  this->m_ClearedPointers = 0LL;
  this->m_TargetHandle = 0LL;
  this->m_EvtQueryRemove.m_Method = 0LL;
  this->m_EvtRemoveCanceled.m_Method = 0LL;
  this->m_EvtRemoveComplete.m_Method = 0LL;
  this->m_TargetNotifyHandle = 0LL;
  this->m_InStack = 0;
  this->m_OpenState = 1;
}
