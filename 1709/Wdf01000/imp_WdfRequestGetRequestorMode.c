/*
 * XREFs of imp_WdfRequestGetRequestorMode @ 0x1C0078950
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

char __fastcall imp_WdfRequestGetRequestorMode(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  unsigned __int8 v2; // r8
  FxRequest *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  int IsNotCompleted; // eax
  char RequestorMode; // di
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v3 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return pRequest->m_Irp.m_Irp->RequestorMode;
  FxNonPagedObject::Lock(pRequest, &PreviousIrql, v2);
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(v3, m_Globals);
  else
    IsNotCompleted = 0;
  if ( IsNotCompleted >= 0 )
    RequestorMode = v3->m_Irp.m_Irp->RequestorMode;
  else
    RequestorMode = 1;
  FxNonPagedObject::Unlock(v3, PreviousIrql, v5);
  return RequestorMode;
}
