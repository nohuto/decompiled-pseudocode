/*
 * XREFs of ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C002AE60
 * Callers:
 *     ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C0007CB0 (-Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z.c)
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002CFD0 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::GetPnpCapsInternal(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  unsigned int v6; // edi
  FxVerifierLock *v8; // rcx
  FxVerifierLock *v9; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v8 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
  {
    FxVerifierLock::Lock(v8, &irql, a3);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v6 = this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v9 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    FxVerifierLock::Unlock(v9, v4, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  return v6;
}
