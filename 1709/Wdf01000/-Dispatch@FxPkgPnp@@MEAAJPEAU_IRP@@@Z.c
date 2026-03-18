/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C0007CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcLq @ 0x1C000CE60 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0022CB0 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C002AE60 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C0030418 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C00304FC (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0035FC0 (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp, unsigned int a3, unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char _a3; // r11
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxPkgPnp_vtbl *v9; // rax
  int (__fastcall *const *(__fastcall *GetDispatchPnp)(FxPkgPnp *))(FxPkgPnp *, FxIrp *); // rax
  int (__fastcall *const *v11)(FxPkgPnp *, FxIrp *); // rax
  int (__fastcall *v12)(FxPkgPnp *, FxIrp *); // rax
  FxDeviceBase *v14; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v17; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int PnpCapsInternal; // eax
  _FX_DRIVER_GLOBALS *v20; // rcx
  int (__fastcall *SendIrpSynchronously)(FxPkgPnp *, FxIrp *); // rax
  _IO_STACK_LOCATION *v22; // rcx
  _DEVICE_OBJECT *v23; // rbx
  _IO_STACK_LOCATION *v24; // rdx
  NTSTATUS Status; // r14d
  PIRP v26; // rbx
  FxDeviceBase *v27; // rcx
  unsigned int Length; // ecx
  FxDeviceBase *v29; // rax
  _DEVICE_OBJECT *v30; // r8
  const void *v31; // rax
  FxDeviceBase *v32; // rsi
  unsigned int id; // ecx
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *v35; // rsi
  unsigned __int8 MinorFunction; // bl
  int (__fastcall *v37)(FxPkgPnp *, FxIrp *); // rax
  FxDeviceBase *v38; // rsi
  _DEVICE_OBJECT *v39; // r8
  const void *v40; // rsi
  _FX_DRIVER_GLOBALS *v41; // rcx
  FxDeviceBase *v42; // r10
  const void *v43; // r8
  FxDeviceBase *m_DeviceBase; // r10
  const void *v45; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-19h]
  _KEVENT Event; // [rsp+60h] [rbp+27h] BYREF
  char v48; // [rsp+78h] [rbp+3Fh]
  PIRP v49; // [rsp+A0h] [rbp+67h] BYREF

  v49 = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Irp = v49;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  _a3 = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( _a3 && _a3 != 2 )
    {
      v41 = this->m_Globals;
      if ( !v41->FxVerboseOn )
      {
LABEL_59:
        MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
        v9 = this->__vftable;
        if ( MinorFunction <= 3u )
        {
          v37 = v9->GetDispatchPower(this)[MinorFunction];
          return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v37)(this, &v49);
        }
        return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v9->FireAndForgetIrp)(this, &v49);
      }
      m_DeviceBase = this->m_DeviceBase;
      v45 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        v45 = 0LL;
      WPP_IFR_SF_qqcq(
        v41,
        5u,
        0xCu,
        0x13u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v45,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3,
        Irp);
    }
    else if ( CurrentStackLocation->Parameters.Create.Options )
    {
      v32 = this->m_DeviceBase;
      id = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      m_DeviceObject = v32->m_DeviceObject.m_DeviceObject;
      if ( v32->m_ObjectSize )
        v35 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v35 = 0LL;
      WPP_IFR_SF_qqcqL(this->m_Globals, (unsigned __int8)Irp, a3, a4, traceGuid, v35, m_DeviceObject, _a3, Irp, id);
    }
    else
    {
      v38 = this->m_DeviceBase;
      v39 = v38->m_DeviceObject.m_DeviceObject;
      if ( v38->m_ObjectSize )
        v40 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v40 = 0LL;
      WPP_IFR_SF_qqcqLd(
        this->m_Globals,
        (unsigned __int8)Irp,
        (unsigned int)v39,
        a4,
        traceGuid,
        v40,
        v39,
        _a3,
        Irp,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1);
    }
    Irp = v49;
    goto LABEL_59;
  }
  if ( (unsigned __int8)_a3 >= 8u && (unsigned __int8)_a3 < 0x11u )
    goto LABEL_6;
  if ( _a3 == 7 )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v29 = this->m_DeviceBase;
    v30 = v29->m_DeviceObject.m_DeviceObject;
    if ( v29->m_ObjectSize )
      v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v31 = 0LL;
    WPP_IFR_SF_qqcLq(
      this->m_Globals,
      (unsigned __int8)Irp,
      (unsigned int)v30,
      a4,
      traceGuid,
      v31,
      v30,
      _a3,
      Length,
      Irp);
LABEL_51:
    Irp = v49;
    goto LABEL_7;
  }
  if ( (unsigned __int8)_a3 > 6u && _a3 != 20 && _a3 != 17 && _a3 != 23 )
  {
LABEL_6:
    v8 = this->m_Globals;
    if ( !v8->FxVerboseOn )
      goto LABEL_7;
    v42 = this->m_DeviceBase;
    v43 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v42->m_ObjectSize )
      v43 = 0LL;
    WPP_IFR_SF_qqcq(v8, 5u, 0xCu, 0x10u, WPP_FxPkgPnp_cpp_Traceguids, v43, v42->m_DeviceObject.m_DeviceObject, _a3, Irp);
    goto LABEL_51;
  }
  v14 = this->m_DeviceBase;
  _a2 = v14->m_DeviceObject.m_DeviceObject;
  if ( v14->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qqcq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2, _a3, Irp);
  Irp = v49;
LABEL_7:
  v9 = this->__vftable;
  if ( Irp->Tail.Overlay.CurrentStackLocation->MinorFunction > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v9->FireAndForgetIrp)(this, &v49);
  GetDispatchPnp = v9->GetDispatchPnp;
  if ( (char *)GetDispatchPnp == (char *)FxPkgFdo::GetDispatchPnp )
  {
    v11 = FxPkgFdo::m_FdoPnpFunctionTable;
  }
  else if ( (char *)GetDispatchPnp == (char *)FxPkgPdo::GetDispatchPnp )
  {
    v11 = FxPkgPdo::m_PdoPnpFunctionTable;
  }
  else
  {
    v11 = GetDispatchPnp(this);
    Irp = v49;
  }
  v12 = v11[Irp->Tail.Overlay.CurrentStackLocation->MinorFunction];
  if ( v12 != FxPkgFdo::_PnpQueryCapabilities )
    return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v12)(this, &v49);
  v17 = this->m_Globals;
  if ( v17->FxVerboseOn )
  {
    WPP_IFR_SF_(v17, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
    Irp = v49;
  }
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  PnpCapsInternal = FxPkgPnp::GetPnpCapsInternal(this);
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (PnpCapsInternal & 0x3000) == 0x1000 )
      HIDWORD(SecurityContext->SecurityQos) |= 4u;
    if ( (PnpCapsInternal & 0xC000) == 0x4000 )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( (PnpCapsInternal & 0x30000) == 0x10000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    if ( (PnpCapsInternal & 0xC0000) == 0x40000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20u;
    if ( (PnpCapsInternal & 0x3000000) == 0x1000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    if ( (PnpCapsInternal & 0x30000000) == 0x10000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    if ( this->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v20 = this->m_Globals;
  if ( v20->FxVerboseOn )
    WPP_IFR_SF_(v20, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
  SendIrpSynchronously = this->SendIrpSynchronously;
  if ( (char *)SendIrpSynchronously == (char *)FxPkgFdo::SendIrpSynchronously )
  {
    v48 = 0;
    v22 = v49->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v22[-1].MajorFunction = *(_OWORD *)&v22->MajorFunction;
    *(_OWORD *)&v22[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v22->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v22[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v22->Parameters.SetQuota + 6);
    v22[-1].FileObject = v22->FileObject;
    v22[-1].Control = 0;
    v23 = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v48 = 1;
    v24 = v49->Tail.Overlay.CurrentStackLocation;
    v24[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
    v24[-1].Context = &Event;
    v24[-1].Control = -32;
    Status = IofCallDriver(v23, v49);
    if ( Status == 259 )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
      Status = v49->IoStatus.Status;
    }
  }
  else
  {
    Status = SendIrpSynchronously(this, (FxIrp *)&v49);
  }
  if ( Status >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion((FxPkgFdo *)this, (FxIrp *)&v49);
  v26 = v49;
  v49->IoStatus.Status = Status;
  IofCompleteRequest(v49, 0);
  v27 = this->m_DeviceBase;
  v49 = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&v27->m_DeviceObject.m_DeviceObject[1], v26, 0x20u);
  return (unsigned int)Status;
}
