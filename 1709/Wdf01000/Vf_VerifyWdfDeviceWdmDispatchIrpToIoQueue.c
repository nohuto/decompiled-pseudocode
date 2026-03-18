/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00D7988
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_Dd @ 0x1C0012824 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001A584 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C003C650 (WPP_IFR_SF_qqcDq.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0063C64 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C007640C (WPP_IFR_SF_qqcDqd.c)
 */

__int64 __fastcall Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *device,
        _IRP *Irp,
        FxIoQueue *queue,
        unsigned int Flags)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int _a2; // ebp
  unsigned __int8 MajorFunction; // r14
  unsigned __int8 MinorFunction; // r12
  const void *v13; // rcx
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *flags; // rbx
  bool v19; // zf
  unsigned __int16 v20; // ax
  const void *v21; // rsi
  const _GUID *v22; // r10
  FxDevice *m_ParentDevice; // rax
  FxDevice *m_Device; // rcx
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // ax
  const void *_a1; // rbx
  FxPkgPnp *m_PkgPnp; // rax
  unsigned __int16 v29; // ax
  const void *v30; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  _a2 = 0;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( FxDriverGlobals->FxVerboseOn )
  {
    v13 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !device->m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_qqcDq(
      FxDriverGlobals,
      (unsigned __int8)device,
      MinorFunction,
      0x3Eu,
      WPP_FxDeviceApi_cpp_Traceguids,
      v13,
      device->m_DeviceObject.m_DeviceObject,
      MajorFunction,
      MinorFunction,
      Irp);
  }
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    _a2 = -1073741811;
    WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 0xDu, 0x3Fu, WPP_FxDeviceApi_cpp_Traceguids, Flags, -1073741811);
LABEL_29:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return _a2;
  }
  if ( FxDevice::GetDispatchPackage(device, MajorFunction) != (FxDefaultIrpHandler *)device->m_PkgIo )
  {
    v16 = 64;
LABEL_9:
    _a2 = -1073741811;
    m_ObjectSize = device->m_ObjectSize;
    flags = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    v19 = m_ObjectSize == 0;
    v20 = queue->m_ObjectSize;
    if ( v19 )
      flags = 0LL;
    v21 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20 )
      v21 = 0LL;
    WPP_IFR_SF_qqcDqd(FxDriverGlobals, v14, v15, v16, traceGuid, v21, Irp, MajorFunction, MinorFunction, flags);
    goto LABEL_29;
  }
  if ( !FxIoQueue::IsIoEventHandlerRegistered(queue, (_WDF_REQUEST_TYPE)MajorFunction) )
  {
    v16 = 65;
    goto LABEL_9;
  }
  m_ParentDevice = device->m_ParentDevice;
  m_Device = queue->m_Device;
  if ( m_ParentDevice == m_Device )
  {
    if ( !m_ParentDevice )
    {
      _a2 = -1073741811;
      v25 = 66;
LABEL_19:
      v26 = device->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v26 )
        _a1 = 0LL;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v25, v22, _a1, _a2);
      goto LABEL_29;
    }
    m_PkgPnp = device->m_PkgPnp;
    if ( m_PkgPnp && !BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
    {
      _a2 = -1073741808;
      v25 = 67;
      goto LABEL_19;
    }
  }
  else if ( device != m_Device )
  {
    _a2 = -1073741811;
    v29 = m_Device->m_ObjectSize;
    v30 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v29 )
      v30 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x44u, v22, v30, -1073741811);
    goto LABEL_29;
  }
  return _a2;
}
