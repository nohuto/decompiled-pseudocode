/*
 * XREFs of ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C009DE74
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C002AEC0 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C009F694 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 */

__int64 __fastcall PnpPassThroughQI(unsigned __int64 Device, FxIrp *Irp)
{
  unsigned int Status; // edi
  _DEVICE_OBJECT *_a2; // rbx
  _IRP *v6; // rax
  _IRP *v7; // rsi
  const void *_a1; // rcx
  FxAutoIrp fxFwdIrp; // [rsp+60h] [rbp+8h] BYREF
  MxDeviceObject pTopOfStack; // [rsp+68h] [rbp+10h] BYREF

  Status = Irp->m_Irp->IoStatus.Status;
  pTopOfStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(Device + 224) + 144LL));
  _a2 = pTopOfStack.m_DeviceObject;
  v6 = IoAllocateIrp(pTopOfStack.m_DeviceObject->StackSize, 0);
  v7 = v6;
  if ( v6 )
  {
    fxFwdIrp.m_Irp = v6;
    PnpPassThroughQIWorker(&pTopOfStack, Irp, &fxFwdIrp);
    if ( v7->IoStatus.Status != -1073741637 )
      Status = v7->IoStatus.Status;
    Irp->m_Irp->IoStatus.Status = Status;
    Irp->m_Irp->IoStatus.Information = v7->IoStatus.Information;
    IoFreeIrp(v7);
  }
  else
  {
    Status = -1073741670;
    _a1 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Device + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qid(
      *(_FX_DRIVER_GLOBALS **)(Device + 16),
      2u,
      0xCu,
      0x22u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      (__int64)_a2,
      -1073741670);
  }
  ObfDereferenceObject(_a2);
  return Status;
}
