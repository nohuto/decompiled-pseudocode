/*
 * XREFs of ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0028DC0
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003A3E0 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003B630 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000E194 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x1C000E940 (-PowerDown@FxDmaEnabler@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0025CC0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E750 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E8E0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002E99C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00347F0 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStopped(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  POWER_STATE v3; // ebx
  int EaLength; // eax
  int _a4; // edi
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v7; // r14
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  bool v10; // r14
  unsigned __int16 m_ObjectSize; // dx
  int globals; // r8d
  char v13; // r13
  _LIST_ENTRY *Blink; // rbp
  FxDeviceBase *v15; // rdx
  unsigned __int16 v16; // ax
  WDFDEVICE__ *v17; // rdx
  char v18; // bp
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v20; // bl
  __int64 v21; // rdx
  unsigned __int64 v23; // rcx
  int v24; // ebx
  _LIST_ENTRY **p_Blink; // r15
  int v26; // eax
  FxTransactionedEntry *v27; // rbp
  FxTransactionedEntry *NextEntryLocked; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // r8d
  FxDeviceBase *v31; // rdx
  const void *_a2; // rcx
  __int16 v33; // cx
  const void *v34; // r15
  char v35; // [rsp+90h] [rbp+8h]
  int v36; // [rsp+98h] [rbp+10h]

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  v3.SystemState = PowerSystemSleeping3;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  if ( EaLength < 4 || (_a4 = 5, EaLength > 6) )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = 6;
  m_DmaEnablerList = this->m_DmaEnablerList;
  v7 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v27 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v27);
      v27 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( (int)FxDmaEnabler::PowerDown((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject, v29, v30) < 0 )
        v7 = 0;
    }
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
  }
  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  v10 = v7 == 0;
  v35 = v10;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v23 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v23 = 0LL;
    globals = m_Method((WDFDEVICE__ *)v23, (_WDF_POWER_DEVICE_STATE)_a4);
  }
  else
  {
    globals = 0;
  }
  if ( globals < 0 )
  {
    v10 = 1;
    v35 = 1;
    v31 = this->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v31->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)v31,
      0xCu,
      0x14u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v31->m_DeviceObject.m_DeviceObject,
      _a4,
      globals);
  }
  v13 = 16;
  if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
  {
    v13 = 80;
    this->m_WakeInterruptsKeepConnected = 0;
  }
  Blink = this->m_InterruptListHead.Blink;
  if ( Blink != &this->m_InterruptListHead )
  {
    v24 = 0;
    do
    {
      p_Blink = &Blink[-28].Blink;
      v26 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, v13);
      v36 = v26;
      if ( v26 < 0 )
      {
        v33 = *((_WORD *)p_Blink + 5);
        v34 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v33 )
          v34 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Fu, WPP_FxPkgPnp_cpp_Traceguids, v34, v26);
        v24 = v36;
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_InterruptListHead );
    v10 = v35;
    if ( v24 < 0 )
      v10 = 1;
    v3.SystemState = PowerSystemSleeping3;
  }
  v15 = this->m_DeviceBase;
  v16 = v15->m_ObjectSize;
  v17 = (WDFDEVICE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4;
  if ( !v16 )
    v17 = 0LL;
  this->m_DeviceD0Exit.m_Device = v17;
  v18 = v10;
  if ( FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v18 = 1;
  this->PowerParentPowerDereference(this);
  this->m_DevicePowerStateOld = this->m_DevicePowerState;
  this->m_DevicePowerState = _a4;
  if ( _a4 == 1 )
  {
    this->m_SystemPowerAction = 0;
LABEL_19:
    v3.SystemState = _a4;
    goto LABEL_20;
  }
  if ( _a4 <= 4 || _a4 > 6 )
    goto LABEL_19;
LABEL_20:
  PoSetPowerState(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, v3);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v18 = 1;
  }
  if ( v18 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      v20 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
      FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v20);
    }
    else
    {
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDown, 0);
    }
    LOBYTE(v21) = 1;
    this->PowerReleasePendingDeviceIrp(this, v21);
    return 1;
  }
}
