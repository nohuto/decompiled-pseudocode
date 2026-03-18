/*
 * XREFs of imp_WdfFdoQueryForInterface @ 0x1C0022070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfFdoQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Fdo,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData)
{
  __int64 v10; // rcx
  FxDeviceBase *flags; // rbx
  FxDeviceBase_vtbl *v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  PIRP Irp; // rax
  _IRP *v19; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v21; // rax
  unsigned int Status; // esi
  unsigned __int8 CurrentIrql; // al
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  FxDevice *pDevice; // [rsp+50h] [rbp-58h] BYREF
  _KEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  char v28; // [rsp+70h] [rbp-38h]
  FxQueryInterfaceParams params; // [rsp+78h] [rbp-30h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  FxDeviceBase *pDeviceBase; // [rsp+B8h] [rbp+10h] BYREF

  *(_DWORD *)&params.Type = 4098;
  params.Object = (void **)&pDevice;
  if ( !Fdo )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  LOWORD(v10) = 0;
  flags = (FxDeviceBase *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Fdo & 1) != 0 )
  {
    v10 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v10);
  }
  if ( flags->m_Type == 4144 )
  {
    pDeviceBase = flags;
  }
  else
  {
    pDeviceBase = 0LL;
    *(_QWORD *)&Event.Header.Lock = &pDeviceBase;
    v12 = flags->FxNonPagedObject::FxObject::__vftable;
    WORD1(Event.Header.WaitListHead.Flink) = v10;
    LOWORD(Event.Header.WaitListHead.Flink) = 4144;
    if ( v12->QueryInterface(flags, (FxQueryInterfaceParams *)&Event) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v13, v14, v15, traceGuid, (const void *)Fdo, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Fdo, 0x1030uLL);
    }
    flags = pDeviceBase;
  }
  m_Globals = flags->m_Globals;
  pDevice = 0LL;
  if ( !InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Interface )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  else if ( flags->QueryInterface(flags, &params) >= 0 && (pDevice->m_Legacy || pDevice->m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceFdoAPI_cpp_Traceguids, (const void *)Fdo, -1073741811);
    return 3221225485LL;
  }
  else
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(pDeviceBase->m_DeviceObject.m_DeviceObject);
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v19 = Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Status = -1073741637;
      v28 = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = InterfaceSpecificData;
      CurrentStackLocation[-1].Parameters.QueryInterface.Size = Size;
      CurrentStackLocation[-1].Parameters.QueryInterface.Version = Version;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Interface;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)InterfaceType;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v21 = v19->Tail.Overlay.CurrentStackLocation;
      v28 = 1;
      v21[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
      v21[-1].Context = &Event;
      v21[-1].Control = -32;
      Status = IofCallDriver(AttachedDeviceReference, v19);
      if ( Status == 259 )
      {
        KeEnterCriticalRegion();
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        KeLeaveCriticalRegion();
        Status = v19->IoStatus.Status;
      }
      IoFreeIrp(v19);
    }
    else
    {
      Status = -1073741670;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    return Status;
  }
}
