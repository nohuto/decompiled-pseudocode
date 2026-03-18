/*
 * XREFs of imp_WdfRequestCompleteWithInformation @ 0x1C0032BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001FECC (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0078458 (WPP_IFR_SF_qqxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00D7C88 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        __int64 RequestStatus,
        unsigned __int64 Information)
{
  unsigned int flags; // r14d
  __int64 Offset; // rcx
  FxRequest *v7; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rbp
  _IRP *globals; // rsi
  __int64 level; // rdi
  const void *_a4; // rax
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF

  flags = RequestStatus;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v7 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxRequest *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4104 )
  {
    pRequest = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v7 = pRequest;
  }
  m_Globals = v7->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(m_Globals, v7) < 0 )
      return;
    v7 = pRequest;
  }
  v7->m_Irp.m_Irp->IoStatus.Information = Information;
  m_DeviceBase = v7->m_DeviceBase;
  if ( v7->m_Globals->FxVerboseOn )
  {
    globals = v7->m_Irp.m_Irp;
    level = globals->IoStatus.Information;
    _a4 = (const void *)FxObject::GetObjectHandleUnchecked(v7);
    WPP_IFR_SF_qqxd(v7->m_Globals, 5u, 0x10u, 0xBu, WPP_FxRequest_hpp_Traceguids, _a4, globals, level, flags);
  }
  if ( m_DeviceBase )
    v7->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
  else
    v7->m_PriorityBoost = 0;
  FxRequest::CompleteInternal(v7, (_FX_DRIVER_GLOBALS *)flags, RequestStatus, Information);
}
