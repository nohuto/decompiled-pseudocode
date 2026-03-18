/*
 * XREFs of ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030B20
 * Callers:
 *     imp_WdfControlFinishInitializing @ 0x1C00305D0 (imp_WdfControlFinishInitializing.c)
 *     ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00362F0 (-PnpEventEnableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::Register(FxWmiIrpHandler *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  char m_ObjectFlags; // cl
  NTSTATUS _a1; // edi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rcx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v4;
  }
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_RegisteredState = WmiRegistered;
  if ( m_ObjectFlags < 0 && (v10 = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v10, v4, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 1u);
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
    FxNonPagedObject::Lock(this, &irql, v11);
    v12 = irql;
    this->m_RegisteredState = WmiUnregistered;
    FxNonPagedObject::Unlock(this, v12, v13);
  }
  return (unsigned int)_a1;
}
