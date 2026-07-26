/*
 * XREFs of ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00C3B58
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C504 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072780 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C63E8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisMDisableOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, bool *a2)
{
  bool v4; // zf
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0;
  ndisCancelMediaDisconnectTimer((__int64)a1);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, 8);
  v5.m_Lock = &a1->MiniportOwner.m_lock;
  KeEnterCriticalRegion();
  v5.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
  v5.m_State = Exclusive;
  if ( KeReadStateEvent(&a1->MiniportOwner.m_isUnowned.m_event) )
  {
    KeClearEvent(&a1->MiniportOwner.m_isUnowned.m_event);
    a1->MiniportOwner.m_owner = MiniportOwnedByBindEngine;
    KLockHolder::~KLockHolder(&v5);
  }
  else
  {
    ExReleasePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
    KeLeaveCriticalRegion();
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 1;
    *a2 = 1;
    if ( !v4 )
      ndisAoAcStop(a1, 8, RunAsynchronous);
    if ( !a1->DoNotBlockOnMiniportLock )
      Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a1->MiniportOwner, 2LL);
  }
}
