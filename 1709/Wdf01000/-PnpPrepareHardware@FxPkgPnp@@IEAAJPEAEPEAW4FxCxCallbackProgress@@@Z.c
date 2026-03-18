/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C002A160
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0020F90 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099890 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00999B0 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x1C0029C64 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0029CC0 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0034860 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v4; // eax
  int matched; // esi
  unsigned __int8 v8; // r8
  FxDeviceBase *v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r8
  FxCmResList *m_Resources; // rax
  WDFCMRESLIST__ *v13; // rax
  FxCmResList *m_ResourcesRaw; // rdx
  WDFCMRESLIST__ *v15; // rdx
  FxDeviceBase *v16; // r8
  WDFDEVICE__ *v17; // r8
  int v18; // eax
  unsigned __int8 v19; // r8
  FxDeviceBase *v20; // rdi
  unsigned __int8 v21; // al
  unsigned __int8 v22; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v26; // rcx
  FxVerifierLock *v27; // rcx
  FxVerifierLock *v28; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v30; // rdx
  FxDeviceBase *v31; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v4 = this->m_PnpStateAndCaps.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpStateAndCaps.Value = v4 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  if ( matched < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_InternalFailure = 1;
    *ResourcesMatched = 0;
    IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    this->m_PendingPnPIrp->IoStatus.Status = matched;
  }
  else
  {
    *ResourcesMatched = 1;
    v9 = this->m_DeviceBase;
    if ( SLOBYTE(v9->m_ObjectFlags) < 0
      && (m_DeviceObject = (FxVerifierLock *)v9[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v8);
      v10 = PreviousIrql;
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
    }
    LOBYTE(v9[1].m_Globals) |= 1u;
    if ( SLOBYTE(v9->m_ObjectFlags) < 0 && (v26 = (FxVerifierLock *)v9[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
      FxVerifierLock::Unlock(v26, v10, v11);
    else
      KeReleaseSpinLock(&v9->m_NPLock.m_Lock, v10);
    m_Resources = this->m_Resources;
    if ( m_Resources->m_ObjectSize )
      v13 = (WDFCMRESLIST__ *)((unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    m_ResourcesRaw = this->m_ResourcesRaw;
    if ( m_ResourcesRaw->m_ObjectSize )
      v15 = (WDFCMRESLIST__ *)((unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    v16 = this->m_DeviceBase;
    if ( v16->m_ObjectSize )
      v17 = (WDFDEVICE__ *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    this->m_DevicePrepareHardware.m_Device = v17;
    this->m_DevicePrepareHardware.m_ResourcesRaw = v15;
    this->m_DevicePrepareHardware.m_ResourcesTranslated = v13;
    v18 = FxPrePostCallback::InvokeStateful(&this->m_DevicePrepareHardware, Progress, FxCxCleanupAfterPreFailure);
    v20 = this->m_DeviceBase;
    matched = v18;
    if ( SLOBYTE(v20->m_ObjectFlags) < 0 && (v27 = (FxVerifierLock *)v20[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(v27, &PreviousIrql, v19);
      v21 = PreviousIrql;
    }
    else
    {
      v21 = KeAcquireSpinLockRaiseToDpc(&v20->m_NPLock.m_Lock);
    }
    LOBYTE(v20[1].m_Globals) &= ~1u;
    if ( SLOBYTE(v20->m_ObjectFlags) < 0 && (v28 = (FxVerifierLock *)v20[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
      FxVerifierLock::Unlock(v28, v21, v22);
    else
      KeReleaseSpinLock(&v20->m_NPLock.m_Lock, v21);
    if ( matched < 0 )
    {
      if ( matched == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerifierOn )
        {
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
            || v30->FxVerifyDownlevel )
          {
            FxVerifierDbgBreakPoint(v30);
          }
        }
      }
      v31 = this->m_DeviceBase;
      this->m_InternalFailure = 1;
      IoInvalidateDeviceState(v31->m_PhysicalDevice.m_DeviceObject);
      this->m_PendingPnPIrp->IoStatus.Status = matched;
    }
    else
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
  }
  return (unsigned int)matched;
}
