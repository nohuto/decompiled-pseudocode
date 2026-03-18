/*
 * XREFs of ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C0AC
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C001A678 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C006379C (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0095B7C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C00976E0 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 * Callees:
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00651F4 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

void __fastcall FxRequest::FreeRequest(FxRequest *this)
{
  FxRequestContext *m_RequestContext; // rcx

  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  this->DeleteObject(this);
}
