/*
 * XREFs of ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0036750
 * Callers:
 *     ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C009F590 (-_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0027E80 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B79C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C009ED30 (WPP_IFR_SF_cqcqq.c)
 */

__int64 __fastcall FxPkgFdo::_PnpStartDeviceCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context,
        unsigned __int16 a4)
{
  int Status; // eax
  _IRP *flags; // rax
  KIRQL v8; // bl
  unsigned __int8 v9; // r8
  FxDeviceBase *m_DeviceBase; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *id; // r8
  FxDeviceBase *v15; // r8
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // r8
  unsigned __int8 v18; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  FxIrp v20; // [rsp+68h] [rbp+10h] BYREF

  Status = Irp->IoStatus.Status;
  v20.m_Irp = Irp;
  if ( Status < 0 )
  {
    WPP_IFR_SF_d(Context->m_Globals, 2u, 0xCu, 0x19u, WPP_fxpkgfdo_cpp_Traceguids, Status);
    FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceFailed, v18);
    FxPkgPnp::CompletePnpRequest(Context, &v20, Irp->IoStatus.Status);
  }
  else
  {
    flags = Context->m_PendingPnPIrp;
    if ( flags )
    {
      m_DeviceBase = Context->m_DeviceBase;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        id = 0LL;
      WPP_IFR_SF_cqcqq(
        Context->m_Globals,
        (unsigned __int8)CurrentStackLocation,
        (unsigned int)id,
        a4,
        traceGuid,
        CurrentStackLocation->MinorFunction,
        Irp,
        flags->Tail.Overlay.CurrentStackLocation->MinorFunction,
        flags,
        id);
      v15 = Context->m_DeviceBase;
      v16 = v15->m_ObjectSize;
      v17 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v16 )
        v17 = 0LL;
      FxVerifierBugCheckWorker(Context->m_Globals, WDF_PNP_FATAL_ERROR, v17, (unsigned __int64)Irp);
    }
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    Context->m_PendingPnPIrp = Irp;
    if ( Context->m_PowerPolicyMachine.m_Owner )
    {
      v8 = KfRaiseIrql(2u);
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v9);
      KeLowerIrql(v8);
    }
    else
    {
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, (unsigned __int8)Context);
    }
  }
  return 3221225494LL;
}
