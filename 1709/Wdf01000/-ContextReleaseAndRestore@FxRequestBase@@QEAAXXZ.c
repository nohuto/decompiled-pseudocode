/*
 * XREFs of ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0064414
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006140 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002376C (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0089524 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C00643E4 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxRequestBase::ContextReleaseAndRestore(FxRequestBase *this)
{
  FxRequestContext *m_RequestContext; // rcx

  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( this->m_Irp.m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      FxRequestBase::VerifierClearFormatted(this);
    }
  }
}
