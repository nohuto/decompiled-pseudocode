/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C006379C
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C00890D0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0037E90 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00639D8 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C0AC (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0095B7C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0097760 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  char v8; // r15
  unsigned __int8 CurrentIrql; // r13
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v12; // eax
  FxRequest *v13; // rsi
  int _a1; // ebx
  int ReservedRequest; // eax
  int v16; // eax
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  FxRequest *request; // [rsp+60h] [rbp+8h] BYREF

  request = 0LL;
  if ( !Queue || (v8 = 1, !Queue->m_SupportForwardProgress) )
    v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 1u )
    KeEnterCriticalRegion();
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  v12 = FxRequest::_CreateForPackage(this->m_Device, p_RequestAttributes, Irp, &request);
  v13 = request;
  _a1 = v12;
  if ( v8 )
  {
    if ( v12 < 0 )
      goto LABEL_15;
    if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, request);
  }
  if ( _a1 >= 0 )
  {
    if ( !v8 || !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_21;
    m_ObjectSize = v13->m_ObjectSize;
    v18 = (unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v13->m_Presented = 1;
    if ( !m_ObjectSize )
      v18 = 0LL;
    v19 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Queue->m_ObjectSize )
      v19 = 0LL;
    if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *))Queue->m_FwdProgContext->m_IoResourcesAllocate.Method)(
           v19,
           v18,
           Queue->m_FwdProgContext) >= 0 )
      goto LABEL_21;
    FxRequest::FreeRequest(v13);
    request = 0LL;
    ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
    _a1 = ReservedRequest;
    if ( ReservedRequest == 259 )
      goto $IrpIsGone;
    goto LABEL_19;
  }
LABEL_15:
  if ( this->m_Filter && !Queue )
    goto $CompleteIrp;
  if ( !v8 )
  {
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
    goto $CompleteIrp;
  }
  ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
  _a1 = ReservedRequest;
  if ( ReservedRequest == 259 )
    goto $IrpIsGone;
LABEL_19:
  if ( ReservedRequest < 0 )
  {
$CompleteIrp:
    Irp->IoStatus.Status = _a1;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    goto $IrpIsGone;
  }
  v13 = request;
LABEL_21:
  if ( IoInCallerCtx && IoInCallerCtx->m_Method && !v13->m_Reserved )
  {
    v13->m_InternalContext = Queue;
    v16 = FxPkgIo::DispathToInCallerContextCallback(this, IoInCallerCtx, v13, Irp);
  }
  else
  {
    v16 = FxIoQueue::QueueRequest(Queue, v13);
  }
  _a1 = v16;
$IrpIsGone:
  if ( CurrentIrql <= 1u )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
