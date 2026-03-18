/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0030640
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C0030850 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0035FC0 (WPP_IFR_SF_qqcq.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C007162C (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp, __int64 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  FxWmiProvider *ProviderLocked; // r14
  FxWmiInstance *InstanceReferencedLocked; // r12
  char v9; // r13
  unsigned __int8 _a3; // bl
  unsigned __int64 v11; // r15
  _FX_DRIVER_GLOBALS *v12; // rcx
  NTSTATUS Status; // ebx
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  char v15; // bp
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v18; // r8
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  unsigned __int8 irql; // [rsp+98h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    a3 = FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray);
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals + a3) = m_Globals;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = 0LL;
  InstanceReferencedLocked = 0LL;
  v9 = 0;
  _a3 = CurrentStackLocation->MinorFunction;
  v11 = _a3;
  v12 = this->m_Globals;
  if ( v12->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      v12,
      5u,
      0xDu,
      0xEu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      Irp);
  }
  if ( _a3 != 11 && _a3 > 9u
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != this->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_17:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_16;
    }
LABEL_37:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_16;
  }
  if ( _a3 == 11 || _a3 == 8 )
  {
    Status = 0;
    goto LABEL_8;
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( ProviderLocked )
  {
    Status = 0;
    if ( !FxWmiIrpHandler::m_WmiDispatchTable[v11].CheckInstance
      || (Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters, (Parameters[1].ReadMode & 0x80u) != 0)
      && (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v11)) != 0LL )
    {
      FxObject::AddRef(
        ProviderLocked,
        (void *)v11,
        735,
        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      goto LABEL_25;
    }
    Status = -1073741162;
  }
  else
  {
    Status = -1073741163;
  }
  ProviderLocked = 0LL;
LABEL_25:
  FxNonPagedObject::Unlock(this, irql, v18);
  if ( Status < 0 )
  {
    Irp->IoStatus.Status = Status;
    v9 = 1;
LABEL_8:
    if ( Status < 0 )
      goto LABEL_35;
  }
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v11].Handler;
  if ( Handler )
  {
    Status = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
    v15 = 1;
    goto $Done_22;
  }
LABEL_35:
  v15 = 0;
$Done_22:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)v11,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v11,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v15 )
  {
    if ( v9 )
      goto LABEL_37;
    goto LABEL_17;
  }
LABEL_16:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
