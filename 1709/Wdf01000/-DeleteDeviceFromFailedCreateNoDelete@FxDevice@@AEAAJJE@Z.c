/*
 * XREFs of ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D5AC
 * Callers:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D574 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C007D6F0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C00650AC (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C007CDD8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C007F4D4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C009CBA0 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009CC3C (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreateNoDelete(
        FxDevice *this,
        unsigned int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  unsigned int _a3; // edi
  const void *v6; // rsi
  bool v7; // zf
  const void *_a1; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDisposeList *m_DisposeList; // rcx
  FxPkgPnp *v12; // rcx
  _DEVICE_OBJECT *_a2; // [rsp+30h] [rbp-48h]
  MxEvent waitEvent; // [rsp+40h] [rbp-38h] BYREF

  _a3 = FailedStatus;
  _a2 = this->m_DeviceObject.m_DeviceObject;
  v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = this->m_ObjectSize == 0;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  if ( v7 )
    _a1 = 0LL;
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0xBu, WPP_FxDevice_cpp_Traceguids, _a1, (__int64)_a2, FailedStatus);
  if ( this->m_Filter )
  {
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qid(
      this->m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_FxDevice_cpp_Traceguids,
      v6,
      (__int64)this->m_DeviceObject.m_DeviceObject,
      _a3);
    _a3 = 0;
  }
  if ( UseStateMachine )
  {
    waitEvent.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&waitEvent.m_Event, SynchronizationEvent, 0);
    m_PkgPnp = this->m_PkgPnp;
    waitEvent.m_DbgFlagIsInitialized = 1;
    FxPkgPnp::CleanupDeviceFromFailedCreate(m_PkgPnp, &waitEvent);
  }
  else
  {
    FxObject::EarlyDispose(this);
    FxObject::DestroyChildren(this);
    m_DisposeList = this->m_DisposeList;
    if ( m_DisposeList )
      FxDisposeList::WaitForEmpty(m_DisposeList);
    v12 = this->m_PkgPnp;
    if ( v12 )
      FxPkgPnp::CleanupStateMachines(v12, 1u);
  }
  FxDevice::Destroy(this);
  return _a3;
}
