/*
 * XREFs of ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0028C18
 * Callers:
 *     ?_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C003B6D0 (-_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0021168 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B720 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C0038038 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxPkgPnp::DispatchWaitWake(FxPkgPnp *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v7; // r14
  NTSTATUS v8; // esi
  FxPkgPnp *v9; // rcx
  unsigned __int8 v10; // r8
  const void *_a1; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  m_Globals = this->m_Globals;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedWaitWakeIrp )
    {
      WPP_IFR_SF_qq(
        this->m_Globals,
        2u,
        0xCu,
        0x28u,
        WPP_FxPkgPnp_cpp_Traceguids,
        Irp->m_Irp,
        this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
      FxVerifierBugCheckWorker(
        this->m_Globals,
        WDF_POWER_MULTIPLE_PPO,
        (unsigned __int64)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        (unsigned __int64)Irp->m_Irp);
    }
    m_Owner->m_RequestedWaitWakeIrp = 0;
  }
  if ( !this->m_SharedPower.m_WaitWakeOwner )
  {
    if ( !this->m_PowerPolicyMachine.m_Owner )
      return ((unsigned int (__fastcall *)(FxPkgPnp *))this->FireAndForgetIrp)(this);
    _a1 = (const void *)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&this->m_SharedPower,
                          (signed __int64)Irp->m_Irp,
                          0LL);
    if ( !_a1 )
    {
      this->m_PowerPolicyMachine.m_Owner->m_WaitWakeCancelCompletionOwnership = 0;
      CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      FxIrp::SetCompletionRoutineEx(
        Irp,
        this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgPnp::_PowerPolicyWaitWakeCompletionRoutine,
        this);
      v8 = PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
      goto LABEL_14;
    }
    v8 = -1073741101;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x2Bu, WPP_FxPkgPnp_cpp_Traceguids, _a1, (__int64)Irp->m_Irp, -1073741101);
    v9 = this;
LABEL_22:
    FxPkgPnp::CompletePowerRequest(v9, Irp, v8);
    return (unsigned int)v8;
  }
  p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
  if ( this->m_SharedPower.m_WaitWakeIrp )
  {
    v8 = -1073741436;
    WPP_IFR_SF_qdq(
      this->m_Globals,
      2u,
      0xCu,
      0x29u,
      WPP_FxPkgPnp_cpp_Traceguids,
      Irp->m_Irp,
      -1073741436,
      this->m_SharedPower.m_WaitWakeIrp);
  }
  else
  {
    v8 = 259;
    _InterlockedExchange64(
      (volatile __int64 *)&Irp->m_Irp->CancelRoutine,
      (__int64)FxPkgPnp::_PowerWaitWakeCancelRoutine);
    if ( Irp->m_Irp->Cancel
      && (WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x2Au, WPP_FxPkgPnp_cpp_Traceguids, Irp->m_Irp),
          _InterlockedExchange64((volatile __int64 *)&Irp->m_Irp->CancelRoutine, 0LL)) )
    {
      v8 = -1073741536;
      Irp->m_Irp->IoStatus.Status = -1073741536;
    }
    else
    {
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      this->m_SharedPower.m_WaitWakeIrp = Irp->m_Irp;
    }
  }
  KeReleaseSpinLock(p_m_Lock, v7);
  v9 = this;
  if ( v8 < 0 )
    goto LABEL_22;
  FxPkgPnp::PowerProcessEvent(this, 4u, 0);
  if ( this->m_PowerPolicyMachine.m_Owner )
LABEL_14:
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolWakeArrived, v10);
  return (unsigned int)v8;
}
