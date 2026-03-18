/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C00890D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C006379C (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0063C64 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C008925C (WPP_IFR_SF_qcDqd.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int8 MajorFunction; // si
  const void *v6; // rcx
  int v7; // ebp
  FxDefaultIrpHandler *DispatchPackage; // rax
  __int64 v9; // rcx
  FxIoQueue *v10; // r9
  __int64 v11; // r10
  FxPkgIo *v12; // r11
  __int16 v13; // ax
  _FX_DRIVER_GLOBALS **v14; // rbx
  const void *globals; // rcx
  bool v16; // zf
  __int16 v17; // ax
  const void *v18; // r10
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  int v21; // [rsp+48h] [rbp-20h]

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !this->m_DispatchQueue && !*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + MajorFunction) )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, v6, MajorFunction);
    v7 = -1073741436;
$Fail:
    Irp->IoStatus.Status = v7;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return;
  }
  DispatchPackage = FxDevice::GetDispatchPackage(this->m_Device, CurrentStackLocation->MajorFunction);
  if ( DispatchPackage != (FxDefaultIrpHandler *)v12 )
  {
    v7 = -1073741811;
    v13 = *(_WORD *)(v9 + 10);
    v14 = (_FX_DRIVER_GLOBALS **)(v11 + 16);
    globals = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v16 = v13 == 0;
    v17 = *(_WORD *)(v11 + 10);
    if ( v16 )
      globals = 0LL;
    v18 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v17 )
      v18 = 0LL;
    WPP_IFR_SF_qcDqd(
      *v14,
      CurrentStackLocation->MinorFunction,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      v18,
      MajorFunction,
      CurrentStackLocation->MinorFunction,
      globals,
      v21);
    FxVerifierDbgBreakPoint(*v14);
    goto $Fail;
  }
  m_CxDeviceInfo = v10->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = &v12->m_InCallerContextCallback;
  FxPkgIo::DispatchStep2(v12, Irp, p_IoInCallerContextCallback, v10);
}
