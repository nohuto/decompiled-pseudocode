/*
 * XREFs of ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C00213B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0025F30 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002F930 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxPkgPdo::PowerParentPowerDereference(FxPkgPdo *this, _FX_DRIVER_GLOBALS *a2)
{
  __int64 v2; // rbx
  _KEVENT *v3; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL);
  if ( *(_QWORD *)(v2 + 880) )
  {
    FxWaitLockInternal::AcquireLock(*(FxWaitLockInternal **)(v2 + 1072), a2, 0LL);
    --*(_DWORD *)(*(_QWORD *)(v2 + 880) + 516LL);
    v3 = *(_KEVENT **)(v2 + 1072);
    v3[1].Header.WaitListHead.Flink = 0LL;
    KeSetEvent(v3, 0, 0);
    KeLeaveCriticalRegion();
    FxPowerIdleMachine::IoDecrement(*(FxPowerIdleMachine **)(v2 + 880), 0LL, 0, 0LL);
  }
}
