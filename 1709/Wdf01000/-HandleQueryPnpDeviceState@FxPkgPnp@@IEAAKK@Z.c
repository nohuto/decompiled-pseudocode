/*
 * XREFs of ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C002B1E0
 * Callers:
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0022BE4 (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0034E70 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0074694 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x1C007484C (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, unsigned int PnpDeviceState, unsigned __int8 a3)
{
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  FxPnpStateAndCaps v7; // edi
  unsigned __int8 v8; // r8
  int v9; // eax
  int v10; // edi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r8
  FxPnpStateAndCaps v13; // edi
  int v14; // edi
  FxCompanionTarget *m_CompanionTarget; // rbx
  FxVerifierLock *v17; // rcx
  FxVerifierLock *v18; // rcx
  FxVerifierLock *v19; // rcx
  FxVerifierLock *v20; // rcx
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v17 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
  {
    FxVerifierLock::Lock(v17, &PreviousIrql, a3);
    v5 = PreviousIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v7.ByEnum = (FxPnpStateAndCaps::<unnamed_type_ByEnum>)this->m_PnpStateAndCaps;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    FxVerifierLock::Unlock(v18, v5, v6);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v5);
  if ( (*(_BYTE *)&v7.ByEnum & 3) == 1 )
  {
    PnpDeviceState |= 1u;
  }
  else if ( (*(_BYTE *)&v7.ByEnum & 3) == 0 )
  {
    PnpDeviceState &= ~1u;
  }
  v9 = *(_BYTE *)&v7.ByEnum & 0xC;
  if ( v9 == 4 )
  {
    PnpDeviceState |= 2u;
  }
  else if ( (*(_BYTE *)&v7.ByEnum & 0xC) == 0 )
  {
    PnpDeviceState &= ~2u;
  }
  if ( (*(_BYTE *)&v7.ByEnum & 0x30) == 0x10 )
  {
    PnpDeviceState |= 4u;
  }
  else if ( (*(_BYTE *)&v7.ByEnum & 0x30) == 0 )
  {
    PnpDeviceState &= ~4u;
  }
  if ( (*(_BYTE *)&v7.ByEnum & 0xC0) == 0x40 )
  {
    PnpDeviceState |= 0x20u;
  }
  else if ( (*(_BYTE *)&v7.ByEnum & 0xC0) == 0 )
  {
    PnpDeviceState &= ~0x20u;
  }
  if ( (*(_WORD *)&v7.ByEnum & 0x300) == 0x100 )
  {
    PnpDeviceState |= 8u;
  }
  else if ( (*(_WORD *)&v7.ByEnum & 0x300) == 0 )
  {
    PnpDeviceState &= ~8u;
  }
  v10 = *(_WORD *)&v7.ByEnum & 0xC00;
  if ( v10 == 1024 )
  {
    PnpDeviceState |= 0x10u;
  }
  else if ( !v10 )
  {
    PnpDeviceState &= ~0x10u;
  }
  if ( v9 == 8 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    {
      FxVerifierLock::Lock(v19, &PreviousIrql, v8);
      v11 = PreviousIrql;
    }
    else
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    v13.ByEnum = (FxPnpStateAndCaps::<unnamed_type_ByEnum>)this->m_PnpStateAndCaps;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
      FxVerifierLock::Unlock(v20, v11, v12);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
    v14 = v13.Value & 0x30000000;
    if ( v14 == 0x10000000 )
    {
      PnpDeviceState |= 2u;
    }
    else if ( !v14 )
    {
      PnpDeviceState &= ~2u;
    }
  }
  if ( this->m_SpecialFileCount[0]
    || this->m_SpecialFileCount[1]
    || this->m_SpecialFileCount[2]
    || this->m_SpecialFileCount[3] )
  {
    PnpDeviceState |= 0x20u;
  }
  if ( this->m_InternalFailure || this->m_Failed )
    PnpDeviceState |= 4u;
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget && FxCompanionTarget::IncrementPendingTaskCountWithFloor(m_CompanionTarget) >= 0 )
  {
    m_CompanionTarget->m_RdDeviceCompanion->QueryPnPDeviceStateNotification(m_CompanionTarget->m_RdDeviceCompanion);
    FxCompanionTarget::DecrementPendingTaskCount(m_CompanionTarget);
  }
  return PnpDeviceState;
}
