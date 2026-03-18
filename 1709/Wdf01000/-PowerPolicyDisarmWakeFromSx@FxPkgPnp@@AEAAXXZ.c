/*
 * XREFs of ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C00A18BC
 * Callers:
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0970 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A09E0 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1190 (-PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A12E0 (-PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E750 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E8E0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002E99C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C006F644 (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyDisarmWakeFromSx(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // dx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int64 v5; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int m_WaitWakeStatus; // esi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v9; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax

  m_DeviceBase = this->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  m_Method = this->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromSx.m_Method;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    m_Method((WDFDEVICE__ *)v5);
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  m_WaitWakeStatus = m_Owner->m_WaitWakeStatus;
  if ( m_WaitWakeStatus != -1073741536 )
  {
    m_EnumInfo = this->m_EnumInfo;
    if ( m_EnumInfo )
    {
      if ( m_Owner->m_WakeSettings.IndicateChildWakeOnParentWake )
      {
        FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
        v9 = 0LL;
        while ( 1 )
        {
          NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v9);
          v9 = NextEntryLocked;
          if ( !NextEntryLocked )
            break;
          FxChildList::IndicateWakeStatus((FxChildList *)NextEntryLocked->m_TransactionedObject, m_WaitWakeStatus);
        }
        FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
      }
    }
  }
  this->m_PowerPolicyMachine.m_Owner->m_WaitWakeStatus = -1073741637;
  this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 0;
}
