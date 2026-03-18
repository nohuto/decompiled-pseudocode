/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0019E1C
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0029074 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0098B30 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C00996FC (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B450 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BAA0 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BEC0 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BEF0 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_Lq @ 0x1C0018B68 (WPP_IFR_SF_Lq.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001B770 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001B830 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C00959CC (GetIoQueueList_ProcessQueueListEntry.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, int Action, __int64 a3, unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // r8
  unsigned __int8 v10; // r8
  char m_ObjectFlags; // al
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int8 v13; // bp
  void *v14; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // r14
  _LIST_ENTRY *Blink; // rsi
  unsigned int RefCount; // edx
  FxTagTracker *v18; // rcx
  _SINGLE_LIST_ENTRY *v19; // rdi
  bool v20; // zf
  _SINGLE_LIST_ENTRY *v21; // rsi
  FxVerifierLock *v23; // rcx
  _LIST_ENTRY *Flink; // rsi
  FxVerifierLock *v25; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-48h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v9 = 0LL;
  WPP_IFR_SF_Lq(m_Globals, Action, (unsigned int)v9, a4, RefType, Action, v9);
  m_ObjectFlags = this->m_ObjectFlags;
  Next = 0LL;
  queueList.Next = 0LL;
  if ( m_ObjectFlags < 0 && (v23 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v23, &irql, v10);
    v13 = irql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v13;
  }
  this->m_PowerStateOn = 0;
  if ( Action >= 2 && Action <= 3 )
    this->m_QueuesAreShuttingDown = 1;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
    Blink = this->m_IoQueueListHead.Blink;
    if ( Blink != p_m_IoQueueListHead )
    {
      do
      {
        if ( LODWORD(Blink[1].Flink) == 1 )
        {
          Blink[1].Blink = (_LIST_ENTRY *)Next;
          queueList.Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
          RefCount = _InterlockedIncrement((volatile signed __int32 *)&Blink[-56].Flink + 1);
          if ( SLOBYTE(Blink[-55].Flink) < 0 )
            v18 = (FxTagTracker *)Blink[-60].Blink;
          else
            v18 = 0LL;
          if ( v18 )
            FxTagTracker::UpdateTagHistory(
              v18,
              (void *)0x65776F70,
              1478,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
          Next = queueList.Next;
        }
        Blink = Blink->Blink;
      }
      while ( Blink != p_m_IoQueueListHead );
      v13 = irql;
    }
  }
  else
  {
    Flink = p_m_IoQueueListHead->Flink;
    if ( p_m_IoQueueListHead->Flink != p_m_IoQueueListHead )
    {
      do
      {
        GetIoQueueList_ProcessQueueListEntry(Flink, &queueList, v14);
        Flink = Flink->Flink;
      }
      while ( Flink != p_m_IoQueueListHead );
      Next = queueList.Next;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    FxVerifierLock::Unlock(v25, v13, (unsigned __int8)v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v13);
  if ( Action == 1 )
  {
    v19 = Next;
    v20 = Next == 0LL;
    if ( !Next )
      goto LABEL_24;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v19[-116]);
      v19 = v19->Next;
    }
    while ( v19 );
  }
  while ( 1 )
  {
    v20 = Next == 0LL;
LABEL_24:
    v21 = Next;
    if ( !v20 )
      Next = Next->Next;
    if ( !v21 )
      break;
    FxIoQueue::StopProcessingForPower((FxIoQueue *)&v21[-116], (FxIoStopProcessingForPowerAction)Action);
    v21->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v21[-116].Next[2].Next)(
      &v21[-116].Next,
      1702326128LL,
      1248LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
