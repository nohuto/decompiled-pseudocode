/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C000F944
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F730 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C480 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E750 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E8E0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002E99C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0033458 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this, unsigned __int8 ImplicitPowerUp)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v5; // si
  FxEnumerationInfo *m_EnumInfo; // rcx
  _LIST_ENTRY *p_m_ListHead; // rbx
  FxEnumerationInfo *v8; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  __int16 v11; // dx
  unsigned __int64 v12; // rcx
  FxTransactionedEntry *v14; // rbx
  FxTransactionedEntry *NextEntryLocked; // rax

  m_DmaEnablerList = this->m_DmaEnablerList;
  v5 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v14 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v14);
      v14 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v5 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
    if ( !v5 )
      return 0;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    p_m_ListHead = 0LL;
    while ( 1 )
    {
      v8 = this->m_EnumInfo;
      if ( !p_m_ListHead )
        p_m_ListHead = &v8->m_ChildListList.m_ListHead;
      while ( 1 )
      {
        p_m_ListHead = p_m_ListHead->Flink;
        if ( p_m_ListHead == &v8->m_ChildListList.m_ListHead )
          break;
        if ( LODWORD(p_m_ListHead[2].Flink) == 1 )
          goto LABEL_8;
      }
      p_m_ListHead = 0LL;
LABEL_8:
      if ( !p_m_ListHead )
        break;
      Blink = p_m_ListHead[2].Blink;
      Flink = Blink[12].Flink;
      v11 = WORD1(Blink->Blink);
      if ( Flink )
      {
        v12 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v11 )
          v12 = 0LL;
        ((void (__fastcall *)(unsigned __int64))Flink)(v12);
      }
    }
    FxTransactionedList::UnlockFromEnum(&v8->m_ChildListList, this->m_Globals);
  }
  if ( !ImplicitPowerUp )
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, 0);
  return 1;
}
