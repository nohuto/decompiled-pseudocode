/*
 * XREFs of ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0034860
 * Callers:
 *     ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C000E5A0 (-Restarting@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F190 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C002A160 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C002FDD0 (-Init@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00367F0 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C4B0 (-PowerWakingNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C009FCEC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009FD74 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009FE00 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateful(
        FxPrePostCallback *this,
        FxCxCallbackProgress *Progress,
        FxCxCallbackCleanupAction CleanupAction)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxCxCallbackProgress v5; // bl
  FxDevice *m_Device; // rbp
  FxCompanionTarget *m_CompanionTarget; // rdx
  int v10; // esi
  __int64 result; // rax
  FxPrePostCallback *v12; // rcx

  m_PkgPnp = this->m_PkgPnp;
  v5 = FxCxCallbackProgressInitialized;
  m_Device = m_PkgPnp->m_Device;
  m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    if ( !m_CompanionTarget
      || (v10 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this), v10 >= 0) )
    {
      v10 = this->InvokeClient(this);
      v5 = FxCxCallbackProgressClientCalled;
      if ( v10 >= 0 )
        v5 = FxCxCallbackProgressClientSucceeded;
    }
    goto $exit_11;
  }
  if ( m_CompanionTarget )
  {
    v10 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v10 < 0 )
      goto $exit_11;
  }
  v10 = FxPrePostCallback::IssuePreCxCallbacksStateful(this, m_Device);
  v12 = this;
  if ( v10 < 0 )
    goto LABEL_17;
  v10 = this->InvokeClient(this);
  v5 = FxCxCallbackProgressClientCalled;
  if ( v10 >= 0 )
  {
    v5 = FxCxCallbackProgressClientSucceeded;
    goto LABEL_18;
  }
  if ( CleanupAction == FxCxCleanupAfterPreOrClientFailure )
  {
    v12 = this;
LABEL_17:
    FxPrePostCallback::IssueCleanupCxCallbacks(v12, m_Device);
  }
LABEL_18:
  if ( v10 >= 0 )
    v10 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
$exit_11:
  result = (unsigned int)v10;
  if ( Progress )
    *Progress = v5;
  return result;
}
