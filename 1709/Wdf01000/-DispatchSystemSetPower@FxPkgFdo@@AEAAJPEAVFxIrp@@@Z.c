/*
 * XREFs of ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000F444
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0022040 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0037BB0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

NTSTATUS __fastcall FxPkgFdo::DispatchSystemSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v7; // rcx
  _IO_STACK_LOCATION *v8; // rcx
  _IO_STACK_LOCATION *v9; // rcx

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  if ( !this->m_PowerPolicyMachine.m_Owner )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( this->m_SystemPowerState == 1 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           m_DeviceObject,
           Irp->m_Irp,
           (PIO_COMPLETION_ROUTINE)FxPkgFdo::_SystemPowerS0Completion,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v8 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::_SystemPowerS0Completion;
      v8[-1].Context = this;
      v8[-1].Control = -32;
    }
    return PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  }
  else
  {
    CurrentStackLocation->Control |= 1u;
    this->m_PendingSystemPowerIrp = Irp->m_Irp;
    v7 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
    *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v7[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v7->Parameters.SetQuota + 6);
    v7[-1].FileObject = v7->FileObject;
    v7[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           m_DeviceObject,
           Irp->m_Irp,
           (PIO_COMPLETION_ROUTINE)FxPkgFdo::_SystemPowerSxCompletion,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v9 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::_SystemPowerSxCompletion;
      v9[-1].Context = this;
      v9[-1].Control = -32;
    }
    PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    return 259;
  }
}
