/*
 * XREFs of ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E750 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E8E0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002E99C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0033458 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingDmaEnable(FxPkgPnp *This)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v3; // di
  FxEnumerationInfo *m_EnumInfo; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  __int64 v7; // r8
  _LIST_ENTRY *p_m_ListHead; // rbx
  FxEnumerationInfo *v9; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  FxTransactionedEntry *v15; // rbx
  FxTransactionedEntry *NextEntryLocked; // rax
  char v17; // [rsp+30h] [rbp+8h] BYREF

  m_DmaEnablerList = This->m_DmaEnablerList;
  v3 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, This->m_Globals);
    v15 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(This->m_DmaEnablerList, v15);
      v15 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v3 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(This->m_DmaEnablerList, This->m_Globals);
    if ( !v3 )
      return 834LL;
  }
  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo )
  {
    m_Globals = This->m_Globals;
    m_EnumInfo->m_ChildListList.AcquireLock(&m_EnumInfo->m_ChildListList, m_Globals, (unsigned __int8 *)&v17);
    v6 = m_EnumInfo->m_ChildListList.__vftable;
    ++m_EnumInfo->m_ChildListList.m_ListLockedRecursionCount;
    LOBYTE(v7) = v17;
    v6->ReleaseLock(&m_EnumInfo->m_ChildListList, m_Globals, v7);
    p_m_ListHead = 0LL;
    while ( 1 )
    {
      v9 = This->m_EnumInfo;
      if ( !p_m_ListHead )
        p_m_ListHead = &v9->m_ChildListList.m_ListHead;
      while ( 1 )
      {
        p_m_ListHead = p_m_ListHead->Flink;
        if ( p_m_ListHead == &v9->m_ChildListList.m_ListHead )
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
      v12 = WORD1(Blink->Blink);
      if ( Flink )
      {
        v13 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v12 )
          v13 = 0LL;
        ((void (__fastcall *)(unsigned __int64))Flink)(v13);
      }
    }
    FxTransactionedList::UnlockFromEnum(&v9->m_ChildListList, This->m_Globals);
  }
  return 786LL;
}
