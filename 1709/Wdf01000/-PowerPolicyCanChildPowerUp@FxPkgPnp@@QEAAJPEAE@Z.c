/*
 * XREFs of ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C002C674
 * Callers:
 *     ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1C0021260 (-PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyCanChildPowerUp(FxPkgPnp *this, unsigned __int8 *PowerUp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 result; // rax
  FxEnumerationInfo *m_EnumInfo; // rsi
  FxEnumerationInfo *v7; // rcx

  *PowerUp = 0;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    result = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
    if ( (int)result < 0 )
      return result;
    m_EnumInfo = this->m_EnumInfo;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    ++this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    *PowerUp = this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp;
    v7 = this->m_EnumInfo;
    v7->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v7->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    *PowerUp = 1;
  }
  return 0LL;
}
